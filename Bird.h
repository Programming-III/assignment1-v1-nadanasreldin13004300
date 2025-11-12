#ifndef BIRD_H
#define BIRD_H
 
 class bird : public animal {
	 private:
	  float wingSpan; 
	 public:
	  bird(float wingSpan) : animal(string name, int age, bool isHungry);
	}
#endif 
