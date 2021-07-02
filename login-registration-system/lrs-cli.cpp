#include "lrs-cli.h"

#include <iostream>

#include "lrs.h"

namespace lrs {
  void CLI::_eat_action() {
    switch (_action) {
      case ActionsType::LOGIN:
        _action_login();
        break;
      case ActionsType::REGISTER:
        _action_register();
        break;
      default:
        _action_invalid();
        break;
    }
  }

  void CLI::_action_login() {
    Information info{};

    std::cout << "\n[LOGIN] Enter your information\nUsername: ";
    std::cin >> info.username;
    std::cout << "Password: ";
    std::cin >> info.password;

    _sys.Login(info);
  }

  void CLI::_action_register() {
    Information info{};

    std::cout << "\n[REGISTER] Create your information\nUsername: ";
    std::cin >> info.username;
    std::cout << "Password: ";
    std::cin >> info.password;

    _sys.Register(info);

    // after you register go to login
    _action_login();
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
