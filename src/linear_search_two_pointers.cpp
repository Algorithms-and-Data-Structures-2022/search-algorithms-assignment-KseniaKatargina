#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.

    int start = 0;
    int stop = static_cast <int> (arr.size())- 1;

    while (start <= stop){
      if (arr[start] == search_elem) {
        return start;
      }
      if (arr[stop] == search_elem) {
        return stop;
      }
      start++;
      stop--;
    }

    return std::nullopt;
  }

}  // namespace assignment