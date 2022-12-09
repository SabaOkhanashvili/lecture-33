#include <iostream>

using namespace std;

class rectangle{
    private:
    float l,b;
    public:
    float getarea(float l,float b){
        return l*b;
    }
};
int main()
{
    float l,b;
    rectangle r1;
    cout<<"შეიყვანეთ მართკუთხედის სიგრძე: ";
    cin>>l;
    cout<<"შეიყვანეთ მართკუთხედის სიგანე: ";
    cin>>b;
     cout <<"მართკუთხედის ფართობი არის: "<< r1.getarea(l,b)<<"კვადრატული ერთეული.";
}