#include <iostream>
using namespace std;
class car{
    string companyName;
    string type;
    string color;
    string fuel;
    string mileage;

    public:
        void setinfo(string cn,string t,string c,string f,string m){
            companyName=cn;
            type=t;
            color=c;
            fuel=f;
            mileage=m;
        }
        void getinfo(){
            cout << "company and model: " << companyName << endl;
            cout << "type: " << type << endl;
            cout << "color: " << color << endl;
            cout << "fuel: " << fuel << endl;
            cout << "mileage: " << mileage << endl;
        }
};
int main(){
    car c1,c2;
    c1.setinfo("BMW X5","SUV","Carbon-Black","Petrol","11.3KM/L");
    c2.setinfo("Maserati Quattroporte","Sedan","Rebel Blue","Diesel","8.9KM/L");
    c1.getinfo();
    cout << endl;
    c2.getinfo();
    return 0;
}