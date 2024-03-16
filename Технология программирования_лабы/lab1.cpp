// Артём Румянцев НБИбд-02-23 

#include <iostream> // Подключение библиотеки ввода-вывода для использования std::cout и std::cin
#include <string> // Подключение библиотеки строк для использования типа std::string
#include <functional> // Подключение библиотеки для использования std::function

struct Babochka { // Определение структуры Babochka для хранения информации о бабочке
    int id; // Поле для идентификатора бабочки
    std::string vid; // Поле для хранения названия вида бабочки
    int kolichestvo; // Поле для хранения количества бабочек данного вида
    Babochka* sleduyushchiy; // Указатель на следующий элемент в односвязном списке
};

// Функция для добавления элемента в начало списка
void DobavitVnachalo(Babochka*& golova, int id, const std::string& vid, int kolichestvo) {
    Babochka* novayaBabochka = new Babochka{id, vid, kolichestvo, golova}; // Создание нового элемента с заданными параметрами и указателем на текущую голову списка
    golova = novayaBabochka; // Обновление головы списка на новый элемент
}

// Функция для добавления элемента по индексу
void DobavitPoIndeksu(Babochka*& golova, int indeks, int id, const std::string& vid, int kolichestvo) {
    if (indeks == 0) { // Если индекс равен 0, добавить в начало списка
        DobavitVnachalo(golova, id, vid, kolichestvo);
        return;
    }
    Babochka* tmp = golova; // Временный указатель для прохода по списку
    for (int i = 0; i < indeks - 1 && tmp != nullptr; ++i) { // Цикл для нахождения элемента перед позицией добавления
        tmp = tmp->sleduyushchiy; // Перемещение по списку
    }
    if (tmp == nullptr) return; // Если достигнут конец списка до достижения нужного индекса, выйти из функции
    Babochka* novayaBabochka = new Babochka{id, vid, kolichestvo, tmp->sleduyushchiy}; // Создание нового элемента
    tmp->sleduyushchiy = novayaBabochka; // Вставка нового элемента в список
}

// Функция для добавления элемента в конец списка
void DobavitVkonec(Babochka*& golova, int id, const std::string& vid, int kolichestvo) {
    if (golova == nullptr) { // Если список пуст, добавить элемент в начало
        DobavitVnachalo(golova, id, vid, kolichestvo);
        return;
    }
    Babochka* tmp = golova; // Временный указатель для прохода по списку до конца
    while (tmp->sleduyushchiy != nullptr) { // Пока не будет достигнут последний элемент
        tmp = tmp->sleduyushchiy; // Перемещение по списку
    }
    tmp->sleduyushchiy = new Babochka{id, vid, kolichestvo, nullptr}; // Создание и добавление нового элемента в конец списка
}

// Функция для удаления первого элемента списка
void UdalitPerviy(Babochka*& golova) {
    if (golova == nullptr) return; // Если список пуст, ничего не делать
    Babochka* tmp = golova; // Временный указатель на текущую голову списка
    golova = golova->sleduyushchiy; // Сдвиг головы списка на следующий элемент
    delete tmp; // Удаление старойголовы списка

// Функция для удаления последнего элемента списка
void UdalitPosledniy(Babochka*& golova) {
    if (golova == nullptr) return; // Если список пуст, ничего не делать
    if (golova->sleduyushchiy == nullptr) { // Если в списке только один элемент
        delete golova; // Удалить этот элемент
        golova = nullptr; // Установить голову списка в nullptr
        return;
    }
    Babochka* tmp = golova; // Временный указатель для прохода по списку
    while (tmp->sleduyushchiy->sleduyushchiy != nullptr) { // Пока следующий за следующим элемент не станет nullptr
        tmp = tmp->sleduyushchiy; // Перемещение по списку
    }
    delete tmp->sleduyushchiy; // Удаление последнего элемента
    tmp->sleduyushchiy = nullptr; // Установка указателя на следующий элемент в nullptr
}

// Функция для удаления элемента по индексу
void UdalitPoIndeksu(Babochka*& golova, int indeks) {
    if (golova == nullptr || indeks < 0) return; // Если список пуст или индекс невалидный, ничего не делать
    if (indeks == 0) { // Если нужно удалить первый элемент
        UdalitPerviy(golova); // Вызвать функцию удаления первого элемента
        return;
    }
    Babochka* tmp = golova; // Временный указатель для прохода по списку
    for (int i = 0; i < indeks - 1 && tmp->sleduyushchiy != nullptr; ++i) { // Найти элемент перед удаляемым
        tmp = tmp->sleduyushchiy; // Перемещение по списку
    }
    if (tmp->sleduyushchiy == nullptr) return; // Если индекс за пределами списка, выйти из функции
    Babochka* udalit = tmp->sleduyushchiy; // Временный указатель на удаляемый элемент
    tmp->sleduyushchiy = tmp->sleduyushchiy->sleduyushchiy; // Сдвиг ссылки за удаляемый элемент
    delete udalit; // Удаление элемента
}

// Функция для обновления элемента по индексу
void ObnovitPoIndeksu(Babochka* golova, int indeks, int novyiId, const std::string& novyiVid, int novoeKolichestvo) {
    Babochka* tmp = golova; // Временный указатель для прохода по списку
    for (int i = 0; i < indeks && tmp != nullptr; ++i) { // Найти элемент по индексу
        tmp = tmp->sleduyushchiy; // Перемещение по списку
    }
    if (tmp == nullptr) return; // Если индекс за пределами списка, выйти из функции
    tmp->id = novyiId; // Обновление идентификатора элемента
    tmp->vid = novyiVid; // Обновление вида бабочки
    tmp->kolichestvo = novoeKolichestvo; // Обновление количества бабочек
}

// Функция для поиска элемента по индексу
Babochka* NaytiPoIndeksu(Babochka* golova, int indeks) {
    Babochka* tmp = golova; // Временный указатель для прохода по списку
    for (int i = 0; i < indeks && tmp != nullptr; ++i) { // Найти элемент по индексу
        tmp = tmp->sleduyushchiy; // Перемещение по списку
    }
    return tmp; // Вернуть указатель на найденный элемент или nullptr, если элемент не найден
}

// Функция для поиска элемента по фильтру
Babochka* NaytiPoFiltru(Babochka* golova,const std::function<bool(const Babochka*)>& filtr) {
    Babochka* tmp = golova; // Временный указатель для прохода по списку
    while (tmp != nullptr) { // Перебор всех элементов списка
        if (filtr(tmp)) { // Если текущий элемент удовлетворяет условию фильтра
            return tmp; // Вернуть указатель на текущий элемент
        }
        tmp = tmp->sleduyushchiy; // Переход к следующему элементу списка
    }
    return nullptr; // Возвращаем nullptr, если элемент, удовлетворяющий условиям фильтра, не найден
}

int main() {
    Babochka* golova = nullptr; // Инициализация указателя на голову списка как nullptr, означающего пустой список

    // Добавление элементов в список
    DobavitVnachalo(golova, 1, "Monarh", 10); // Добавление в начало списка
    DobavitVkonec(golova, 2, "Lastochkin hvost", 5); // Добавление в конец списка
    DobavitPoIndeksu(golova, 1, 3, "Goluboy", 7); // Добавление по индексу (в середину списка)

    std::cout << "Spisok posle dobavleniya elementov:" << std::endl;
    for (Babochka* iter = golova; iter != nullptr; iter = iter->sleduyushchiy) {
        std::cout << iter->id << " - " << iter->vid << " - " << iter->kolichestvo << std::endl;
    }

    // Обновление элемента по индексу
    ObnovitPoIndeksu(golova, 1, 3, "Goluboy Obnovlennyi", 8);
    std::cout << "Spisok posle obnovleniya elementa:" << std::endl;
    for (Babochka* iter = golova; iter != nullptr; iter = iter->sleduyushchiy) {
        std::cout << iter->id << " - " << iter->vid << " - " << iter->kolichestvo << std::endl;
    }

    // Поиск элемента по индексу
    Babochka* naydeno = NaytiPoIndeksu(golova, 1);
    if (naydeno != nullptr) {
        std::cout << "Element nayden po indeksu 1: " << naydeno->id << " - " << naydeno->vid << " - " << naydeno->kolichestvo << std::endl;
    }

    // Удаление элементов из списка
    UdalitPerviy(golova); // Удаление первого элемента
    UdalitPosledniy(golova); // Удаление последнего элемента
    std::cout << "Spisok posle udaleniya pervogo i poslednego elementov:" << std::endl;
    for (Babochka* iter = golova; iter != nullptr; iter = iter->sleduyushchiy) {
        std::cout << iter->id << " - " << iter->vid << " - " << iter->kolichestvo << std::endl;
    }

    // Очистка списка перед завершением программы
    while (golova != nullptr) {
        UdalitPerviy(golova);
    }

    return 0; // Возвращаем 0, что означает успешное завершение программы
}

 

