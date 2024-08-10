#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Character{
    int x;
    int y;
    void move(int _x,int _y){
        x=_x;
        y=_y;
    }
    string name;
    Character(string _name):name(_name){}

};

class Command{
    public:
    virtual ~Command(){}
    virtual void execute(Character&c) =0;
    virtual void undo(Character&c) =0;
};
class Move:public Command{
    
    public:
    void execute(Character&c){
        int randomx=rand()%4;
        int randomy=rand()%4;

        c.move(randomx,randomy);
        x=randomx;
        y=randomy;
        cout<<c.name<<"moved"<<x <<","<<y<<endl;

    }
    void undo(Character&c){
        c.move(-x,-y);
        cout<<c.name<<"moved"<<x <<","<<y<<endl;
    }
    private:
    int x;
    int y;

};
int main(){
    srand(time(NULL));
    Character tri("mike ");
    vector<Command*> command_queue;

    Move *m1=new Move;
    command_queue.push_back(m1);
    Move *m2=new Move;
    command_queue.push_back(m2);
    Move *m3=new Move;
    command_queue.push_back(m3);

    Move *m4=new Move;
    command_queue.push_back(m4);

    Move* m5=new Move;
    command_queue.push_back(m5);

    for(int i=0;i<command_queue.size();i++){
        command_queue[i]->execute(tri);
    }
    for(int i=command_queue.size()-1;i>-1;i--){
        command_queue[i]->undo(tri);
    }
    
}