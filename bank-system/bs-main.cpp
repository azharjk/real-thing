#include <iostream>

#include "bank.h"
#include "bs-cli.h"

int main() {
  bs::Bank bank(1000);

  bscli::welcome_message();

  while (true) {
    bscli::choices_message(bank);
    bscli::current_balance(bank);
  }
  return 0;
}
