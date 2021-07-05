#ifndef BS_CLI_H_
#define BS_CLI_H_

#include <iostream>

#include "bank.h"

namespace bscli {
  enum class ActionType {
    WITHDRAW = 1,
    DEPOSIT
  };

  void welcome_message();

  void choices_message(bs::Bank& bank);

  void current_balance(bs::Bank& bank);

  void withdraw_action(bs::Bank& bank);

  void deposit_action(bs::Bank& bank);
} // namespace bscli

#endif // BS_CLI_H_
