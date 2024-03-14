#include <bits/stdc++.h>
#ifndef Loki
#define Loki
#include "product.h"
#endif
using namespace std;
Product::Product(){}
Product::Product(string productId,string productName,int weight,string wayPacking){
    this->productId = productId;
    this->productName = productName;
    this->weight = weight;
    this->wayPacking = wayPacking;
}
Product::Product(int i,string productName,int weight,string wayPacking){
    string productId = "KD";
    string tmp = to_string(i+1);
    while(tmp.size()<3){
        tmp = "0"+tmp;
    }
    productId+=tmp;
    this->productId = productId;
    this->productName = productName;
    this->weight = weight;
    this->wayPacking = wayPacking;
}
string Product::getProductId(){
    return this->productId;
}
string Product::getProductName(){
    return this->productName;
}
void Product::setProductName(string productName){
    this->productName = productName;
}
int Product::getWeight(){
    return this->weight;
}
void Product::setWeight(int weight){
    this->weight = weight;
}
// void Product::autoIncrementProductId(){
//     this->incrementProductId++;
// }
void Product::setWayPacking(string wayPacking){
    this->wayPacking = wayPacking;
}
string Product::getWayPacking(){
    return this->wayPacking;
}
istream& operator>>(istream& in,Product &product){
    getline(in,product.productName);
    cin>>product.weight;
    cin>>product.wayPacking;
    return in;
}
ostream& operator<<(ostream& out,Product product){
    out<<product.getProductId()<<" "<<product.getProductName()<<" "<<product.getWeight()<<" "<<product.getWayPacking()<<endl;
    return out;
}