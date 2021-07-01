#ifndef LRS_LRS_H_
#define LRS_LRS_H_

#include <string>
#include <utility>
#include <vector>

namespace lrs {
  struct Information {
    std::string username;
    std::string password;

    Information() = default;
  };

  class System {
    Information _info;
    std::vector<Information> _users;

    public:
      explicit System(Information& info) : _info(std::move(info)) {}
      // login logic
      void Login() const;
      // register logic
      void Register() const;
  };
} // namespace lrs

#endif // LRS_LRS_H_
