#include "lrs.h"

#include <iostream>

namespace lrs {
  void System::Login() const {
    std::cout << _info.username << _info.password << std::endl;
  }

  void System::Register() {
    _users.push_back(_info);
  }
} // namespace lrs
