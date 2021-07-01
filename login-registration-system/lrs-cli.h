#ifndef __LRS_CLI_H__
#define __LRS_CLI_H__

namespace lrs {
  enum ActionsType {
    LOGIN = 1,
    REGISTER
  };

  class CLI {
    ActionsType _action;
    int _opt;

    // use the `_action` value to determining the next step
    void _eat_action();

    // login process
    void _action_login();

    // register process
    void _action_register();

    // invalid process
    void _action_invalid();

    public:
      // printing to the console the welcome message
      static void WelcomeMessage();

      // take the input after welcome message
      // you should call this after `WelcomeMessage`
      void TakeInput();
  };
} // namespace lrs

#endif // __LRS_CLI_H__
