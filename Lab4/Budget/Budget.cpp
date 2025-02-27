#include "Budget.h"

Budget::Budget(int exp, std::string name, std::string source, int cash) : Owner (exp, name) {
    this->source = source;
    this->cash = cash;
}
int Budget::SumMoney() {
    int sum =  this->cash*experience;
    if (sum != 0) {
       std::cout<<"� ������� ��������� ������ �� ����� : ";
    }
    return sum;
}
void Budget::ShowInfo() const {
    std::cout << " �� �������  " << source << " ������ ���� ��������� " << cash << " ������" << std::endl;

}

