#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> msg{"A", "simple", "word", "counter", "with", "C++"};

  for (const std::string& word : msg) {
    std::cout << word << " ";

  }

  std::cout << std::endl;
}