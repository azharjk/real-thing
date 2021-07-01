#include "lrs.h"

#include <iostream>

namespace lrs {
  void System::Login() const {
    std::cout << _info.username << _info.password << std::endl;
  }

  void System::Register() const {
    //
  }
} // namespace lrs
