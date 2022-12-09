#include <iostream>

using namespace std;

class cars{
    public:
        string model;
        int rel_yer;
        int speed;
        
    void introduce(){
        cout<<"სახელი: "<<model<<endl;
        cout<<"მანქანის გამოშვების წელი: "<<rel_yer<<endl;
        cout<<"მანქანის სიჩქარე: "<<speed<<endl;
    }
    
};

int main()
{
    cars desc;
    
    desc.model = "mikoyan miG-29K";
    desc.rel_yer = 1988;
    desc.speed = 2200;
    
    desc.introduce();
    
    cars desc2;
    
    desc2.model = "Lockheed SR-71 blackbird";
    desc2.rel_yer = 1966;
    desc2.speed = 3540;
    
    desc2.introduce();
    return 0;
}