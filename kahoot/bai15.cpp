#include <iostream>
#include <string>
using namespace std;
class Game{
    private:
    int power;
    int level=0;
    public:
    Game(int power){
        this->power=power;
    }
    void levelUp(int levelUp){
        this->level+=levelUp;
    }
    Game(const Game&obj){
        this->power=obj.power;
        this->level=1;
    }
    void describe(){
        cout<<this->power<<" "<<this->level;
    }
};
int main(){
    Game sol1(20);
    sol1.levelUp(2);
    Game sol2=sol1;
    //using the copy constructor
    //sol2 inherits "power" from sol1 and set "level" to 1
    sol2.describe();
}