// 12.5 Практическая работа. Задание 4. Ряд чисел
#include <iostream>

int main() {
  std::cout << "12.5 Practical work\n";
  std::cout << "Task 4. A series of numbers \n";
  std::cout << "======================================================\n";
  std::cout << "\t\t\tInput Array[]\n";
  int arr[] = {114, 111, 106, 107, 108, 105, 115, 108,
               110, 109, 112, 113, 116, 117, 118};
  int n = sizeof(arr) / sizeof(int);
  for (auto i : arr)
    std::cout << i << "\t";
  int min = arr[0];
  int sum = 0;
  for (int i : arr) {
    sum += i;
    if (min > i)
      min = i;
  }
  std::cout << "\n------------------------------------------------------\n";
  std::cout << "In this example, minimum number = " << min << std::endl;
  std::cout << "A repeating number = "
            << sum - ((n - 1) * n / 2 + (min - 1) * (n - 1)) << std::endl;
  std::cout << "======================================================\n";
  return 0;
}