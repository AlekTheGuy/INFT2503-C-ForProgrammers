#include <iostream>
#include <string>

int main() {
  std::string word1;
  std::string word2;
  std::string word3;

  std::cout << "Type word 1: ";
  std::cin >> word1;
  std::cout << std::endl;
  std::cout << "Type word 2: ";
  std::cin >> word2;
  std::cout << std::endl;
  std::cout << "Type word 3: ";
  std::cin >> word3;
  std::cout << std::endl;

  std::string sentence = word1 + " " + word2 + " " + word3 + ".";
  std::cout << "sentence:" << sentence << std::endl;
  std::cout << "Size of word 1: " << word1.length() << std::endl;
  std::cout << "Size of word 2: " << word2.length() << std::endl;
  std::cout << "Size of word 3: " << word3.length() << std::endl;
  std::cout << "Size of sentence: " << sentence.length() << std::endl;

  std::string sentence2 = sentence;
  if (sentence2.length() >= 12) {
    sentence2[9] = 'x';
    sentence2[10] = 'x';
    sentence2[11] = 'x';
  } else if (sentence2.length() >= 11) {
    sentence2[9] = 'x';
    sentence2[10] = 'x';
  } else if (sentence2.length() >= 10) {
    sentence2[9] = 'x';
  }

  std::cout << "sentence 1: " << sentence << std::endl
            << "sentence 2: " << sentence2 << std::endl;

  std::string sentence_start = sentence.substr(0, 5);

  std::cout << "sentence: " << sentence << std::endl
            << "subsentence: " << sentence_start << std::endl;

  if (sentence.find("hallo") != std::string::npos) {
    std::cout << "sentence contains 'hallo'" << std::endl;
  }

  std::string tmp_sentence;
  std::string substring = "er";
  int index = 0;
  while ((index = sentence.find(substring, index)) != std::string::npos) {
    tmp_sentence += sentence.substr(0, index) + "{" + substring + "}";
    sentence = sentence.substr(index + substring.length());
    index = 0;
  }
  tmp_sentence += sentence.substr(index + 1);

  sentence = tmp_sentence;
  std::cout << sentence << std::endl;
}