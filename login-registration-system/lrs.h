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
    Information(const Information& other) = default;
    Information(Information&& other) = default;
    ~Information() = default;

    Information& operator=(const Information& other) = default;
    Information& operator=(Information&& other) = default;
  };

  class System {
    Information _info;
    std::vector<Information> _users;

    public:
      System() = default;
      explicit System(Information& info) : _info(info) {}
      // login logic
      void Login(const Information& info);
      // register logic
      void Register(const Information& info);
  };
} // namespace lrs

#endif // LRS_LRS_H_
