#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdint>
#include <cctype>

int main() {
  std::ifstream data("words.txt");
  std::string content((std::istreambuf_iterator<char>(data)), std::istreambuf_iterator<char>());
  uint32_t wordCount = 0;

  for (char& ch : content) {
    if (std::isspace(ch)) {
      wordCount++;
    }
  }

  // To return actually total words by increase the counter one more
  // But this will cause an issue if the input file is empty
  wordCount++;

  std::cout << "Word: " << wordCount << " ";
}