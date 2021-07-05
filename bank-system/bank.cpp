#include "bank.h"

namespace bs {
  void Bank::withdraw(int value) {
    balance_ -= value;
  }

  void Bank::deposit(int value) {
    balance_ += value;
  }

  int Bank::get_balance() const {
    return balance_;
  }
} // namespace bs
