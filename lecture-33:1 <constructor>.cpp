#include <iostream>
using namespace std;


class cars
{
public:
  string Model;
  int Year;
  int Speed;
  string Gear;
    cars (string model, int year, int speed, string gear)
  {
    Model = model;
    Year = year;
    Speed = speed;
    Gear = gear;

  }

  void introduce ()
  {
    cout << "Model: " << Model << endl;
    cout << "Year: " << Year << endl;
    cout << "Speed: " << Speed << endl;
    cout << "Gear: " << Gear << endl;
  }
};

int
main ()
{
  cars desc ("Boeing 777X", 2020, 905, "Manual");

  desc.introduce ();

  cars desc1 ("mikoyan miG-29K", 1988, 2200, "Auto");

  desc1.introduce ();

  cars desc2 ("Lockheed C-130 Hercules", 2015, 200, "Manual");

  desc2.introduce ();

  cars desc3 ("Lockheed SR-71 blackbird", 1966, 3540, "manual");

  desc3.introduce ();
  return 0;
}
