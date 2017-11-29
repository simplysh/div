#include <iostream>
#include <vector>
#include <iterator>
#include <string>

void to_int(char* array[], int len, std::vector<int>* into) {
  for (int i = 0; i != len; i += 1) {
    const int parsed = std::atoi(array[i]);

    if (parsed != 0) { into->push_back(parsed); }
  }
}

int common(std::vector<int>* numbers, bool verbose) {
  int max = 1;

  if (verbose) { std::cout << '1'; }

  // loop through all the numbers
  for (auto n = numbers->begin(); n != numbers->end(); n += 1) {
    // only search until half of the number + 1
    for (int i = 1; i <= *n / 2 + 1; i += 1) {
      bool valid = true;

      // see if all the numbers are divisible by it
      for (auto test = numbers->begin(); test != numbers->end(); test += 1) {
        if (*test % i != 0) {
          valid = false;
          break;
        }
      }

      if (valid && i > max) {
        if (verbose) { std::cout << ' ' << i; }
        max = i;
      }
    }
  }

  if (!verbose) { std::cout << max; }

  return max;
}

int main(int argc, char* argv[]) {
  std::vector<int> args;

  to_int(argv, argc, &args);

  const std::string flag("-a");
  const bool verbose = argc >=2 && flag.compare(argv[1]) == 0;

  common(&args, verbose);

  std::cout << std::endl;
}
