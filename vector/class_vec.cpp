#include <iostream>
#include <string>
#include <vector>
using namespace std;
class User{
    public:
    string name;
    string email;
    int age;
};
int main(){
    vector<User>users;
    User user1;
    user1.name="ali";
    user1.age=30;
    user1.email="@gmail.com";
    users.push_back(user1);
    User user2;
    user2.name="minh tri";
    user2.age=12;
    user2.email="minhtri@gmail.com";
    users.push_back(user2);
    for(int i=0;i<users.size();i++){
        cout<<"Name:"<<users[i].name<<endl;
        cout<<"Age:"<<users[i].age<<endl;
        cout<<"Email:"<<users[i].email<<endl;
    }
}