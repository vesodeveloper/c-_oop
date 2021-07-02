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
void showname(){
cout<<"Name is:"<<endl;
cout<<name<<endl;
}

};
int main(void){
person p1;
p1.setname("pesho");
p1.setage(18);
p1.setcity("Plovdiv");
p1.showname();
system("pause");
return 0;
}
