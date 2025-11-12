 #ifndef ANIMAL_H
 #define ANIMAL_H

 #include <iostream>
 using namespace std;

 class animal{
  private: 
   string name;
   int age;
   bool  isHungry;

  public:
	  animal(string name, int age, bool isHungry) {} 

	  void display();
	  void feed();
}
#endif 
