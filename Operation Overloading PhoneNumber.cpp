#include <iostream>
using namespace std;

class PhoneNumber {
private:
    int areaCode;
    int exchange;
    int line;
public:
    PhoneNumber(int areaCode, int exchange , int line) {
        this->areaCode = areaCode;
        this->exchange = exchange;
        this->line = line;
    }
    void setPhoneNumber(int areaCode, int exchange , int line){
        this->areaCode = areaCode;
        this->exchange = exchange;
        this->line = line;
    }
    void getPhoneNumber(int &areaCode, int &exchange , int &line) {
        areaCode = this->areaCode;
        exchange = this->exchange;
        line = this->line ;
    }
    friend istream& operator >> (istream &in, PhoneNumber& p) {
        char c;
        in >> p.areaCode >> c >> p.exchange >> c >> p.line;
        return in;
    }
    friend ostream& operator << (ostream &out, PhoneNumber& p) {
        out << p.areaCode << " " << p.exchange << " " << p.line;
        return out;
    }
};
int main() {
    PhoneNumber p1 (123,456,7890);
    cout << "phone number1:"<< p1 << endl;
    p1.setPhoneNumber(123,456,7890);
    cout << "phone number1:"<< p1 << endl;
    int areaCode,exchange,line;
    p1.getPhoneNumber(areaCode,exchange,line);
    cout <<"areaCode:"<<areaCode<<" exchange:"<<exchange<<" line:"<<line<<endl;
    return 0;
}
