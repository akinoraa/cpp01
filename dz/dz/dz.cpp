#include "all_libraries.h"

#include "Cat.h"
#include "Kid.h"
#include "Human.h"
#include "MobilePhone.h"
#include "Hat.h"
#include "Room.h"

int main()
{
	Human  human, h, h1, h2;
	MobilePhone ph;
	Hat hat;
	Kid k;
	Room r;
	Cat c;
	int a;
	double ad;
	string as;

	// h1.name = "Max";
	// h2.name = "Mark";

	// cout << "1) ";
	// ph.ringing(h);

	// cout << "\n2) ";
	// hat.protection(k);

	// cout << "\n3) ";
	// r.roomUsing(h1);

	// cout << "\n4) ";
	// k.game(c);

	// cout << "\n5) ";
	// r.roomPainting(h);

	//homework 12.09

	/*c.energyLevel = 100;
	c.nPows = 4;
	c.hungerLevel = 100;
	c.muteness = false;

	c.printCat();
	c.makeNoise();
	c.walk();
	c.eat();
	c.printCat();

	c.energyLevel = 10;
	c.nPows = 1;
	c.hungerLevel = 10;
	c.muteness = true;

	c.printCat();
	c.makeNoise();
	c.walk();
	c.eat();
	c.printCat();*/

	/*ad = 180;
	human.SetHeight(ad);

	as = "brown";
	human.SetEyes_color(as);

	as = "Max";
	human.SetName(as);

	as = "Smith";
	human.SetLastName(as);

	a = 100;
	human.SetEnergy(a);

	a = 1;
	human.SetSoreThroat(a);

	a = 100;
	human.SetCleanliness(a);

	a = 10;
	human.SetHunger(a);

	a = 100;
	human.SetMood(a);*/

	human.printHuman();
	human.speaking();
	human.eating();
	human.dancing();
	human.washing();
	human.resting();
	human.callSomeone();
	human.work();
	human.printHuman();

	Human human2(180, "Brown");

	human2.printHuman();
	human2.speaking();
	human2.eating();
	human2.dancing();
	human2.washing();
	human2.resting();
	human2.callSomeone();
	human2.work();
	human2.printHuman();

	r.printRoom();
	r.talking();
	r.roomCleaning();
	r.roomDecorating();
	r.printRoom();

	Room r2(2.3, "black");

	r2.printRoom();
	r2.talking();
	r2.roomCleaning();
	r2.roomDecorating();
	r2.printRoom();

	ph.printPhone();
	ph.ringing(h1);
	ph.charge();
	ph.music();
	ph.lags();
	ph.video();
	ph.printPhone();

	MobilePhone ph2("Android", 3);

	ph2.printPhone();
	ph2.ringing(h1);
	ph2.charge();
	ph2.music();
	ph2.lags();
	ph2.video();
	ph2.printPhone();

	k.printKid();
	k.fun();
	k.game(c);
	k.cry();
	k.run();
	k.learn();
	k.wear();
	k.printKid();

	Kid k2("Carl", 13);

	k2.printKid();
	k2.fun();
	k2.game(c);
	k2.cry();
	k2.run();
	k2.learn();
	k2.wear();
	k2.printKid();

	/*string color = "red";
	  double lenght = 15.5;
	  string material = "cotton";
	  bool winterHat;
	  bool summerHat;
	  bool waterHat;
	  int dirtness;
	  bool sewed;*/

	/*as = "red";
	hat.setColor(as);
	ad = 15.5;
	hat.setLenght(ad);
	as = "cotton";
	hat.setMaterial(as);
	a = 1;
	hat.setIswinterHat(a);
	hat.setIssummerHat(a);
	hat.setIswaterHat(a);
	a = 0;
	hat.setIssewed(a);
	a = 100;
	hat.setDirtness(a);*/

	Hat hat2(15.3, "blue");

	hat2.printHat();
	hat2.protection(k);
	hat2.cold();
	hat2.water();
	hat2.sew();
	hat2.washing();
	hat2.printHat();

	hat2.printHat();
	hat2.protection(k);
	hat2.cold();
	hat2.water();
	hat2.sew();
	hat2.washing();
	hat2.printHat();
}