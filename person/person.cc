#include <iostream>
#include <string>
using namespace std;
class person

{
    private:
    string   name ;
        int age;
        string  city ;
    public:
        void setname(string  name1){
        name=name1;
        
        }
        void setage(int age1){
      age=age1;  
        }
        void setcity(string  city1){
        city=city1;
        
        }
string  getname(){
cout<<"Name is:\n";
return name;
}
int getage(){
cout<<"Age is:\n";
return age;
}
string getcity(){
 cout<<"City is:\n";
 return city;
}
};
int main(void){
person p1;
p1.setname("pesho");
p1.setage(18);
p1.setcity("Plovdiv");
p1.getname();
p1.getage();
p1.getcity();
system("pause");
return 0;
}
