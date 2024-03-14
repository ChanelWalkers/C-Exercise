#include <bits/stdc++.h>
#ifndef Loki
#define Loki
#include "bill.h"
#endif
#define endl '\n'
using namespace std;
Bill::Bill(){}
Bill::Bill(string billId,string date,string customerId){
    this->billId = billId;
    this->date = date;
    this->customerId = customerId;
}
Bill::Bill(int i,string date,string customerId){
    string billId = "HD";
    string s = to_string(i+1);
    while(s.size()<3)
        s="0"+s;
    billId+=s;
    this->billId = billId;
    this->date = date;
    this->customerId = customerId;
}
string Bill::getBillId(){
    return this->billId;
}
void Bill::setBillId(string billId){
    this->billId = billId;
}
string Bill::getCustomerId(){
    return this->customerId;
}
void Bill::setCustomerId(string customerId){
    this->customerId = customerId;
}
string Bill::getDate(){
    return this->date;
}
void Bill::setDate(string date){
    this->date = date;
}
// void Bill::autoIncrementId(){
//     this->incrementId++;
// }
istream& operator>>(istream& in,Bill &bill){
    // in>>bill.billId;
    in>>bill.date;
    in>>bill.customerId;
    return in;
}
ostream& operator<<(ostream& out,Bill bill){
    out<<bill.getBillId()<<" "<<bill.getDate()<<" "<<bill.getCustomerId()<<endl;
    return out;
}

