#ifndef ENCLOSURE_H
#define ENCLOSURE_H 
 
 class enclosure {
	 private:
	  int capacity;
	  int currentCount;
	  animal* Animalarr;
	 public:
	  enclosure(int capacity,int currentCount,animal* Animalarr);
	void addAnimal(animal* a);
	void displayAnimal();
 };
#endif
