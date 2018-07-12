#include <iostream>
#include <vector>

int binSearch(int val, std::vector<int>& mas) {
    int l = 0;
    int r = mas.size() - 1;
    if (val > mas.at(r)) return -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        unsigned int elem = mas.at(m);
        if (elem == val) return m + 1; // Для нумерации с 1
        if (val > elem) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main()
{
    int num_count = 0;
    std::cin >> num_count;
    std::vector<int> mas;
    while (num_count-- > 0) {
        int val = 0;
        std::cin >> val;
        mas.push_back(val);
    }
    std::cin >> num_count;
    std::vector<int> nums_to_search;
    while (num_count-- > 0) {
        int val = 0;
        std::cin >> val;
        nums_to_search.push_back(val);
    }
    for (auto val : nums_to_search) {
        std::cout << binSearch(val, mas) << " ";
    }
    std::cout << std::endl;
    std::cout.flush();
    return 0;
}