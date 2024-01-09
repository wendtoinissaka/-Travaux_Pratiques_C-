#include <iostream>

using namespace std;

class Rectangle{
    private :
        int a;
        int b;
    public :
        int surface(){
            int surface = this->a * this->b;
            return surface;
        }
        Rectangle(int nombre1, int nombre2){
            this->a = nombre1;
            this->b = nombre2;
        }
        Rectangle(int nombre1){
            this->nombre1;
        }

};

int main()
{
    int nombre1;
    std::cout << "Entrer le nombre 1 : " ;
    std::cin >> nombre1;
//    std::cout << "Entrer le nombre 2 : " ;
//    std::cin >> nombre2;

//    Rectangle rectangle(nombre1,nombre2);
    Rectangle polymorphisme(nombre1);

//    Rectangle rectanlge1(8,9);

    std::cout << polymorphisme.surface() << std::endl;
//    std::cout << rectangle1.surface() << std::endl;
    return 0;
}




