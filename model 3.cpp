#include<iostream>
using namespace std;

class FloydTriangle {
    private:
        int rows;
    public:
        FloydTriangle(int r) {
            rows = r;
            int num = 1;
            for(int i = 1; i <= rows; i++) {
                for(int j = 1; j <= i; j++) {
                    cout << num << " ";
                    num++;
                }
                cout << endl;
            }
        }
        
        ~FloydTriangle() {
            cout << "Floyd's Triangle " << endl;
        }
};

int main() {
    int rows;
    
    cout << "Enter the number of rows  ";
    cin >> rows;
    
    FloydTriangle triangle(rows); 
    
    return 0;
}
