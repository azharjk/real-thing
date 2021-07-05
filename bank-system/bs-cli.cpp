#include "bs-cli.h"

#include <iostream>

#include "bank.h"

namespace bscli {
  void welcome_message() {
    std::cout << "Welcome to Dummy Bank" << std::endl;
  }

  void choices_message(bs::Bank& bank) {
    int input;

    std::cout << "\nTake actions\n1. Withdraw\n2. Deposit\n\nChoose your action: ";
    std::cin >> input;

    ActionType input_t = static_cast<ActionType>(input);

    switch (input_t) {
    case ActionType::WITHDRAW:
      withdraw_action(bank);
      break;

    case ActionType::DEPOSIT:
      deposit_action(bank);
      break;

    default:
      break;
    }
  }

  void current_balance(bs::Bank& bank) {
    std::cout << "Your current balance is: " << bank.get_balance() << std::endl;
  }

  void withdraw_action(bs::Bank& bank) {
    int value;

    current_balance(bank);
    std::cout << "\nWithdraw: ";
    std::cin >> value;

    bank.withdraw(value);
  }

  void deposit_action(bs::Bank& bank) {
    int value;

    current_balance(bank);
    std::cout << "\nDeposit: ";
    std::cin >> value;

    bank.deposit(value);
  }
} // namespace bscli
