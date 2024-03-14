#include <bits/stdc++.h>
#ifndef Loki
#define Loki
#include "product.h"
#include "bill.h"
#endif
using namespace std;
class BillDetail{
    private:
        vector<Bill> billList;
        vector<Product> productList;
        int quantity;
        int price;
    public:
        BillDetail();
        BillDetail(vector<Bill> billList,vector<Product> productList,int quantity,int price);
        vector<Bill> getBillList();
        void setBillList(vector<Bill> billList);
        vector<Product> getProductList();
        void setProductList();
        int getQuantity();
        void setQuantity(int quantity);
        int getPrice();
        void setPrice(int price);
        // vector
};