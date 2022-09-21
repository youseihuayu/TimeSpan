/*
 * VendingBank.h
 * Interface which models the coin-operated bank part of a vending machine which sells snacks.
 * Program 1
 * Tuesday, September 20,2022
 * shihua Yu
*/
#include <string>
using namespace std;

class VendingBank {
public:
    //Constructors
  VendingBank();
    VendingBank(int id);
    VendingBank(int id, int pennies, int nicke1s, int dimes, int quarters, int halves);
    VendingBank(int id, int amount);

    // getters - setters

    int getPennies() const; // constant
    int getNickels() const;
    int getDimes() const;
    int getQuarters() const;
    int getHalves() const;
    int getId() const;

    void setPennies(const int &num);
    void setNickels(const int &num);
    void setDimes(const int &num);
    void setQuarters(const int &num);
    void setHalves(const int &num);
    void setId(const int &id);

    // actions

    bool Addcoins(int pennies, int nickels, int dims, int quarters, int halves);
    bool CanMakeChange(int amount) const;
    bool isEmpty() const;

    // operator overloads

    bool operator==(const VendingBank &) const;
    bool operator!=(const VendingBank &) const;
    VendingBank operator+(const VendingBank &) const;

    VendingBank();

    // since there is different type of coin, so we have to have it as Pennies dimes …

private:
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int halves;
    int id;
};
