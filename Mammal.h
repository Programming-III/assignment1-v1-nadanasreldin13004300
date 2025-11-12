#ifndef MAMMAL_H 
#define MAMMAL_H

 class mammal : public animal{
	 private: 
	  string furColor ;
	 public: 
	  mammal(string furColor): animal(string name, int age, bool isHungry);
}
#endif 
