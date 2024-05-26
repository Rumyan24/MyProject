#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

struct Car {
    std::string make;
    std::string model;
    int year;
    std::string color;
    double price;
};

class CarRegistry {
public:
    CarRegistry(const std::string& filename) : filename(filename) {
        load();
    }

    void load() {
        std::ifstream file(filename);
        if (!file.is_open()) {
            return;
        }
        cars.clear();
        std::string line;
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            Car car;
            ss >> car.make >> car.model >> car.year >> car.color >> car.price;
            cars.push_back(car);
        }
        file.close();
    }

    void save() const {
        std::ofstream file(filename);
        for (const auto& car : cars) {
            file << car.make << " " << car.model << " " << car.year << " " << car.color << " " << car.price << "\n";
        }
        file.close();
    }

    void addCar(const Car& car) {
        cars.push_back(car);
        save();
    }

    void editCar(size_t index, const Car& updatedCar) {
        if (index < cars.size()) {
            cars[index] = updatedCar;
            save();
        }
    }

    void deleteCar(size_t index) {
        if (index < cars.size()) {
            cars.erase(cars.begin() + index);
            save();
        }
    }

    std::vector<Car> findCar(const std::string& query) const {
        std::vector<Car> results;
        for (const auto& car : cars) {
            if (car.make == query || car.model == query || car.color == query || std::to_string(car.year) == query || std::to_string(car.price) == query) {
                results.push_back(car);
            }
        }
        return results;
    }

    void displayCars() const {
        for (size_t i = 0; i < cars.size(); ++i) {
            const auto& car = cars[i];
            std::cout << i << ": " << car.make << " " << car.model << " " << car.year << " " << car.color << " " << car.price << "\n";
        }
    }

private:
    std::string filename;
    std::vector<Car> cars;
};

void printMenu() {
    std::cout << "\nРеестр автомобилей\n";
    std::cout << "1. Показать все автомобили\n";
    std::cout << "2. Добавить новый автомобиль\n";
    std::cout << "3. Редактировать автомобиль\n";
    std::cout << "4. Удалить автомобиль\n";
    std::cout << "5. Найти автомобиль\n";
    std::cout << "6. Выйти\n";
    std::cout << "Выберите опцию с помощью цифр (Например 1): ";
}

int main() {
    CarRegistry registry("cars.txt");

    while (true) {
        printMenu();
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            registry.displayCars();
        } else if (choice == 2) {
            Car car;
            std::cout << "Введите марку : ";
            std::cin >> car.make;
            std::cout << "Введите модель: ";
            std::cin >> car.model;
            std::cout << "Введите год: ";
            std::cin >> car.year;
            std::cout << "Введите цвет: ";
            std::cin >> car.color;
            std::cout << "Введите цену: ";
            std::cin >> car.price;
            registry.addCar(car);
        } else if (choice == 3) {
            size_t index;
            std::cout << "Введите номер автомобиля который нужно редактировать: ";
            std::cin >> index;
            Car updatedCar;
            std::cout << "Введите новую марку: ";
            std::cin >> updatedCar.make;
            std::cout << "Введите новую модель: ";
            std::cin >> updatedCar.model;
            std::cout << "Введите новый год: ";
            std::cin >> updatedCar.year;
            std::cout << "Введите новый цвет: ";
            std::cin >> updatedCar.color;
            std::cout << "Введите новую цену: ";
            std::cin >> updatedCar.price;
            registry.editCar(index, updatedCar);
        } else if (choice == 4) {
            size_t index;
            std::cout << "Введите номер автомобиля который нужно удалить: ";
            std::cin >> index;
            registry.deleteCar(index);
        } else if (choice == 5) {
            std::string query;
            std::cout << "Введите поисковый запрос (имя автомобиля или модель или год и т.д): ";
            std::cin >> query;
            std::vector<Car> results = registry.findCar(query);
            for (const auto& car : results) {
                std::cout << car.make << " " << car.model << " " << car.year << " " << car.color << " " << car.price << "\n";
            }
        } else if (choice == 6) {
            break;
        } else {
            std::cout << "Неверный ввод,  попробуйте ещё раз\n";
            break;
        }
    }

    return 0;
}
