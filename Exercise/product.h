#include<bits/stdc++.h>
using namespace std;
class Product{
    private:
        string productId;
        string productName;
        int weight;
        string wayPacking;
        static int incrementProductId;
        friend istream& operator>>(istream& in,Product &product);
        friend ostream& operator<<(ostream& out,Product product);
    public:
        Product();
        Product(string productId,string productName,int weight,string wayPacking);
        Product(int i,string productName,int weight,string wayPacking);
        string getProductId();
        void setProductId(string productId);
        string getProductName();
        void setProductName(string productName);
        int getWeight();
        void setWeight(int weight);
        string getWayPacking();
        void setWayPacking(string wayPacking);
        // void autoIncrementProductId();
};