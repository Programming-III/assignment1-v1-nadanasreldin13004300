#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;



	  class animal::animal(string name, int age, bool isHungry) {
	  this.name=name;
	  this.age= age;
	  this.isHungry= isHungry;

 }
  void display() {
	  cout<<name<< endl;
	  cout<<age<< endl;
	  cout<<isHungry<<endl;
	  }
  void feed() {
	  if (isHungry == true) {
		  cout<<""animal is hungry"<< endl;
	  else 
	      cout<<"animal is not hungry"<<endl;
	  }
	  class mammal :: mammal(string furColor)
	   : animal(string name, int age, bool isHungry){
	    this.furColor = furColor;}
	 class bird :: bird(float wingSpan)
		 : animal(string name, int age, bool isHungry){ 
		 this.wingSpan = wingSpan;}
	 class reptile :: reptile(bool isVenomous)
		 : animal(string name, int age, bool isHungry){ 
		 this.isVenomous= isVenomous; 
		 }
		
	 class enclosure::enclosure(int capacity, int currentCount, animal* Animalarr) {
		 this.capacity=capacity;
		 this.currentCount=currentCount;
		 this.Animalarr=Animalarr;

	 }
   void addAnimal(animal* a){
  animal* newarr = new animal(Animalarr[] + 1);
	 void displayAnimals() {
for(i=0 ; i < Animalarr[] ; i++)
     cout<<Animalarr[i]<<endl;
	 }


int main() {
    
    
    return 0;
}
