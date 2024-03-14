#include <bits/stdc++.h>
using namespace std;
class Bill{
    private:
        string billId;
        string date;
        string customerId;
        static int incrementId;
        friend istream& operator>>(istream& in,Bill &bill);
        friend ostream& operator<<(ostream& out,Bill bill);
    public:
        Bill();
        Bill(string billId,string date,string customerId);
        Bill(int i,string date,string customerId);
        string getBillId();
        void setBillId(string billId);
        string getDate();
        void setDate(string date);
        string getCustomerId();
        void setCustomerId(string customerId);
        void autoIncrementId();
};