#include <iostream>



class Figure {
public:
	virtual void print_info() {

	}
};
class Triangle : public Figure{
protected:
	int a, b, c;
	int A, B, C;
	std::string name = "Треугольник";
public:

	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}
	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;

	}
	std::string get_name() {
		return name;
	}
	Triangle(){}
	void print_info() override {
		std::cout << name << std::endl;
		std::cout << "Стороны: " << "a = " << a  << ' ' << "b = " << b << ' ' << "c = " << c << std::endl;
		std::cout << "Углы: " << "A = " << A << ' ' << "B = " << B << ' ' << "C = " << C << std::endl;
	}
};
class Quadrangle : public Figure {
protected:
	int a, b, c, d;
	int A, B, C, D;
	std::string name = "Четырехуголник";
public:

	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_d() {
		return d;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}
	int get_D() {
		return D;
	}
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;

	}
	std::string get_name() {
		return name;
	}

	Quadrangle(){}
	void print_info() override {
		std::cout << name << std::endl;
		std::cout << "Стороны: " << "a = " << a << ' ' << "b = " << b  << ' ' << "c = " << c << ' ' << "d = " << d << std::endl;
		std::cout << "Углы: " << "A = " << A << ' ' << "B = " << B << ' ' << "C = " << C << ' ' << "D = " << D << std::endl;
	}
};
class Right_triangle : public Triangle {
public:

	Right_triangle(int a, int b, int c,int A, int B){
		this->a = a;
		this->b = b;
		this -> c = c;
		this->A = A;
		this->B = B;
		C = 90;
		name = "прямоугольный треугольник";
	}

};
class Isosceles_triangle : public Triangle {
public:

	Isosceles_triangle(int a, int b, int A, int B) {
			this->a = a;
			this->b = b;
			this->c = a;
			this->A = A;
			this->B = B;
			this->C = A;
			name = "равнобедренный треугольник";
	}

};
class Equilateral_triangle : public Triangle {
public:

	Equilateral_triangle(int a) {
		this->a = a;
		this->b = a;
		this->c = a;
		A = 60;
		B = 60;
		C = 60;
		name = "равносторонний треугольник";
	}

};
class Parallelogram : public Quadrangle {
public:

	Parallelogram(int a, int b, int A, int B) {
		this->a = a;
		this->c = a;
		this->b = b;
		this->d = b;
		this->A = A;
		this->C = A;
		this->B = B;
		this->D = B;
		name = "Параллелограмм";
	}
	Parallelogram() {}

};
class Rhombus : public Parallelogram {
public:

	Rhombus(int a, int A, int B) {
		this->a = a;
		this->c = a;
		this->b = a;
		this->d = a;
		this->A = A;
		this->C = A;
		this->B = B;
		this->D = B;
		name = "Ромб";
	}
	Rhombus(){}

};
class Rectangle : public Parallelogram {
public:

	Rectangle(int a, int b) {
		this->a = a;
		this->c = a;
		this->b = b;
		this->d = b;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
		name = "Прямоугольник";
	}

};
class Square : public Rhombus {
public:

	Square(int a) {
		this->a = a;
		this->c = a;
		this->b = a;
		this->d = a;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
		name = "Квадрат";
	}

};
void print(Figure* figure) {
	figure->print_info();
}

int main() {
	setlocale(LC_ALL, "RUS");
	Figure* ptr;
	Triangle triangle(10, 20, 30, 50, 60, 70);	
	print(&triangle);
	Right_triangle right_triangle(10,20,30,50,60);	
	print(&right_triangle);
	Isosceles_triangle isosceles_triangle(10, 20, 50, 60);	
	print(&isosceles_triangle);
	Equilateral_triangle equilateral_triangle(30);	
	print(&equilateral_triangle);
	Quadrangle quadrangle(10,20,30,40,50,60,70,80);	
	print(&quadrangle);
	Rectangle rectangle(10, 20);	
	print(&rectangle);
	Square square(20);
	print(&square);
	Parallelogram parallelogram(20, 30, 30, 40);
	print(&parallelogram);
	Rhombus rhombus(30, 30, 40);
	print(&rhombus);
}