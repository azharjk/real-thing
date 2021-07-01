#ifndef LRS_CLI_H_
#define LRS_CLI_H_

#include <string>

namespace lrs {
  enum class ActionsType {
    LOGIN = 1,
    REGISTER
  };

  class CLI {
    ActionsType _action;
    int _opt;

    // use the `_action` value to determining the next step
    void _eat_action();

    // login process
    static void _action_login();

    // register process
    static void _action_register();

    // invalid process
    static void _action_invalid();

    public:
      // printing to the console the welcome message
      static void WelcomeMessage();

      // take the input after welcome message
      // you should call this after `WelcomeMessage`
      void TakeInput();
  };
} // namespace lrs

#endif // LRS_CLI_H_
