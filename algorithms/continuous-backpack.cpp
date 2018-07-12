/*
 * A continuous backpack
 * The first line contains the number of objects 1≤n≤103 and the capacity of the backpack 0≤W≤2⋅10^6.
 * Each of the following n lines sets the value 0≤ci≤2⋅106 and the volume 0 <wi≤2⋅10^6 of the subject 
 * n, W, ci, wi are integers). Output the maximum cost of parts of objects (from each object you can
 * separate any part, the cost and volume will decrease proportionally), placed in this backpack, with
 * an accuracy of at least three digits after the decimal point.
*/

#include <cassert>
#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>
struct Item final {
    int weight;
    int value;
};

double get_item_profit (const Item &item) {
    return static_cast<double>(item.weight) / item.value;
}

double get_max_knapsack_value(int capacity, std::vector <Item> items) {
    std::sort(items.begin(), items.end(), [](const Item &lhs, const Item &rhs) {
                return get_item_profit(lhs) < get_item_profit(rhs);
    });
	
    double value = 0.0;

  // take items while there is empty space in knapsack
    for (auto &item:items) {
        if (capacity > item.weight) {
        // can take full item and continue
        capacity -= item.weight;
        value += item.value;
        } else {
            value += item.value * (static_cast <double>(capacity) / item.weight);
            break;
        }
    }

    return value;
}

int main(void) {
    int number_of_items;
    int knapsack_capacity;
    std::cin >> number_of_items >> knapsack_capacity;
    std::vector <Item> items(number_of_items);
    for (int i = 0; i < number_of_items; i++) {
        std::cin >> items[i].value >> items[i].weight;
    }

    double max_knapsack_value = get_max_knapsack_value(knapsack_capacity, std::move(items));

    std::cout.precision(10);
    std::cout << max_knapsack_value << std::endl;
    return 0;
}