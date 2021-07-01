#include "lrs-cli.h"

int main() {
  lrs::CLI cli{};
  lrs::CLI::WelcomeMessage();
  cli.TakeInput();
  return 0;
}
