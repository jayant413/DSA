#include <iostream>
using namespace std;

class Hero
{
private:
    int health;
public:
   static int timeToComplete;
   char *name;
   char level;

   Hero(){
    cout << "Consturctor called" << endl;
    }

    // ! Parameterised constructor
    Hero(int health){
        cout << "this ->" << this << endl;
        this -> health = health;
        name  = new char[100];
    }

    // ! Copy constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);

        this -> name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }



   int getHealth(){
    return health;
   };

   void setHealth(int health){
       this -> health = health;
      };

    // ! Static function
    static int random(){
        // only access statice variables
        cout << timeToComplete << endl;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    // ! Destructor
    ~Hero(){
            cout << "Destructor called" << endl;
        }
};



int Hero::timeToComplete = 10;

int main(){

    // ! Static variable
    cout << Hero::timeToComplete << endl;

    // ! Static function
    cout << Hero::random() << endl;


    // ! Deep Copy constructor


    
    // ! Shallow Copy constructor
    // Hero hero1;
    // char name[7] = "Jayant"
    // Hero hero2(hero1);
    // Hero hero2 = hero1;


    // ! object created statically
    Hero jayant(10);
    cout << "Address of jayant : " << &jayant << endl;

    // ! object created dynamically
    Hero *jayant1 = new Hero();
    // manually destructor called
    delete jayant1;
   

    // ! static allocation
/*   Hero a ;
    a.setHealth(10);
    a.level =  'A';
    cout << "health : " << a.getHealth() << endl;
    cout << "level : " <<a.level << endl;
*/

    // ! dynamic allocation
/*    Hero *b = new Hero;

    b->setHealth(20);
    b->level = 'B';

    cout << "health : " << b->getHealth() << endl;
    cout << "level : " <<  b->level << endl;

    (*b).setHealth(30);
    (*b).level = 'C';

    cout << "health : " << (*b).getHealth() << endl;
    cout << "level : " <<  (*b).level << endl;
*/

};