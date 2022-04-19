#pragma once

#include <utility>  // pair, make_pair
#include <optional>
#include <vector>

namespace assignment {

  /**
   * Требования:
   * - используйте технику двух указателей
   *
   * Дано:
   * - массив из уникальных элементов
   * - элементы массива находятся в порядке неубывания
   *
   * Найти:
   * - индексы двух элементов, сумма которых равна указанному значению
   */
  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& data, int sum);

}  // namespace assignment