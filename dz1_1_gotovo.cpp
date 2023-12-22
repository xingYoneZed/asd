
  //(Дз 1)


//#include <iostream>
//using namespace std;
//
//// Перечисление для месяцев
//enum Month {
//    ЯНВАРЬ = 1, ФЕВРАЛЬ, МАРТ, АПРЕЛЬ, МАЙ, ИЮНЬ, ИЮЛЬ, АВГУСТ, СЕНТЯБРЬ, ОКТЯБРЬ, НОЯБРЬ, ДЕКАБРЬ
//};
//
//int main() {
//
//    setlocale(LC_ALL, "Russian");
//    int userInput;
//
//    do {
//        // Запрос номера месяца
//        cout << "Введите номер месяца (1-12), 0 для выхода: ";
//        cin >> userInput;
//
//        // Проверка на корректность введенного номера месяца
//        if (userInput >= ЯНВАРЬ && userInput <= ДЕКАБРЬ) {
//            // Вывод названия месяца
//            switch (static_cast<Month>(userInput)) {
//            case ЯНВАРЬ: cout << "Январь"; break;
//            case ФЕВРАЛЬ: cout << "Февраль"; break;
//            case МАРТ: cout << "Март"; break;
//            case АПРЕЛЬ: cout << "Апрель"; break;
//            case МАЙ: cout << "Май"; break;
//            case ИЮНЬ: cout << "Июнь"; break;
//            case ИЮЛЬ: cout << "Июль"; break;
//            case АВГУСТ: cout << "Август"; break;
//            case СЕНТЯБРЬ: cout << "Сентябрь"; break;
//            case ОКТЯБРЬ: cout << "Октябрь"; break;
//            case НОЯБРЬ: cout << "Ноябрь"; break;
//            case ДЕКАБРЬ: cout << "Декабрь"; break;
//            }
//            cout << endl;
//        }
//        else if (userInput != 0) {
//            cout << "Некорректный номер месяца. Пожалуйста, введите число от 1 до 12." << endl;
//        }
//
//    } while (userInput != 0);
//
//    cout << "Программа завершена." << endl;
//
//    return 0;
//}

// (ДЗ 2)


//#include <iostream>
//#include <string>
//
//
//struct BankAccount {
//    int accountNumber;
//    std::string ownerName;
//    double balance;
//};
//
//void changeBalance(BankAccount& account, double newBalance) {
//    account.balance = newBalance;
//   
//}
//
//int main() {
//
//
//    BankAccount myAccount;
//    setlocale(LC_ALL, "Russian");
//  
//    std::cout << "Введите номер счета: ";
//    std::cin >> myAccount.accountNumber;
//
//    std::cout << "Введите имя владельца: ";
//    std::cin.ignore();
//    std::getline(std::cin, myAccount.ownerName);
//
//    std::cout << "Введите баланс: ";
//    std::cin >> myAccount.balance;
//
//  
//    double newBalance;
//    std::cout << "Введите новый баланс: ";
//    std::cin >> newBalance;
// 
//
//    changeBalance(myAccount, newBalance);
//    std::cout << "Ваш счет: " << myAccount.ownerName <<", " << myAccount.accountNumber << ", " << myAccount.balance;
//   
//
//    return 0;
//}



// (ДЗ 3)
//
//#include <iostream>
//#include <string>
//
//
//struct Address {
//    std::string city;
//    std::string street;
//    int houseNumber;
//    int apartmentNumber;
//    std::string postalCode;
//};
//
//void printAddress(const Address& addr) {
//    std::cout << "Город: " << addr.city << std::endl;
//    std::cout << "Улица: " << addr.street << std::endl;
//    std::cout << "Номер дома: " << addr.houseNumber << std::endl;
//    std::cout << "Номер квартиры: " << addr.apartmentNumber << std::endl;
//    std::cout << "Индекс: " << addr.postalCode << std::endl;
//    std::cout << "---------------------------" << std::endl;
//}
//
//int main() {
//
//    setlocale(LC_ALL, "Russian");
//    Address address1 = { "Москва", "Арбат", 12, 8, "123456" };
//    Address address2 = { "Ижевск", "Пушкина", 59, 143, "953769" };
//
//   
//    std::cout << "Address 1:" << std::endl;
//    printAddress(address1);
//
//    std::cout << "Address 2:" << std::endl;
//    printAddress(address2);
//
//    return 0;
//}



