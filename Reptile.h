#ifndef REPTILE_H
#define REPTILE_H
 
 class reptile : public animal {
  private:
   bool isVenomous;
   public 
    reptile(bool isVenomous) : animal(string name, int age, bool isHungry);
};
#endif
