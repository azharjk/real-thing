#ifndef BANK_SYSTEM_H_
#define BANK_SYSTEM_H_

namespace bs {
  class Bank {
    int balance_;

    public:
      Bank(int balance) :
        balance_(balance)
      {}

      void withdraw(int value);
      void deposit(int value);
      int get_balance() const;
  };
} // namespace bank

#endif // BANK_SYSTEM_H_
