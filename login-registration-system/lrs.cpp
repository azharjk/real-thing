#include "lrs.h"

#include <iostream>

namespace lrs {
  void System::Login(const Information& info) {
    for (auto& user : _users) {
      if (user.username == info.username && user.password == info.password) {
        std::cout << "\n[INFO] Account verified\n";
      }
    }
  }

  void System::Register(const Information& info) {
    _users.push_back(info);
    std::cout << "\n[INFO] Account created\n";
  }
} // namespace lrs
