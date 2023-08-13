#include <iostream>


class Figure {
protected:
	int side_count = 0;
	std::string name = "Фигура: ";
	
public:
	int get_count_side() {
		return side_count;
	}
	std::string get_name() {
		return name;
	}

};
class Triangle : public Figure {
public:
	Triangle(){
		side_count = 3;
		name = "Треугольник: ";
	}
};

class Quadrangle : public Figure {
public:
	Quadrangle(){
		side_count = 4;
		name = "Четырехугольник: ";
	}
};

int main() {
	setlocale(LC_ALL, "RUS");
	std::cout << "Количество сторон:" << std::endl;
	Figure figure;
	std::cout << figure.get_name() << figure.get_count_side() << std::endl;
	Triangle triangle;
	std::cout << triangle.get_name() << triangle.get_count_side() << std::endl;
	Quadrangle quadrangle;
	std::cout << quadrangle.get_name() << quadrangle.get_count_side();
}