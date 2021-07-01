#include "lrs-cli.h"

#include <iostream>

namespace lrs {
  void CLI::_eat_action() {
    switch (_action) {
      case LOGIN:
        _action_login();
        break;
      case REGISTER:
        _action_register();
        break;
      default:
        _action_invalid();
        break;
    }
  }

  void CLI::_action_login() {
    std::cout << "login\n";
  }

  void CLI::_action_register() {
    std::cout << "register\n";
  }

  void CLI::_action_invalid() {
    std::cout << "error: Invalid action, please try again\n";
  }

  void CLI::WelcomeMessage() {
    std::cout << "Welcome to Login and Registration System\n\n1. Login\n2. Register\n\nSelect the action you want to perform: ";
  }

  void CLI::TakeInput() {
    std::cin >> _opt;
    _action = static_cast<ActionsType>(_opt);

    _eat_action();
  }
} // namespace lrs

int main() {
  lrs::CLI::WelcomeMessage();

  lrs::CLI cli;
  cli.TakeInput();

  return 0;
}
