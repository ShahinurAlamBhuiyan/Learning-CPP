//#include <iostream>
//using namespace std;
//int main (){
//    int x = 10;
//    double y = 5;
//    /*
//        std::cout << "x = " << x << std::endl
//         << "y = " << y;
//    */
//
//    cout << "x = " << x << endl
//         << "y = " << y;
//
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int main (){
//    double sales  = 95000;
//    const double stateTaxRate = 0.4;
//    double stateTax = (sales * stateTaxRate);
//
//    double countyTaxRate = 0.2;
//    const double countyTax = sales/countyTaxRate;
//
//    double totalTax = stateTax + countyTax;
//    cout << "Sales = " << sales <<endl
//         << "State Tax = " << stateTax <<endl
//         << "County Tax = " << countyTax <<endl
//         << "Total Tax = " << totalTax << endl
//         << "Total Sales = " <<sales-totalTax;
//
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//    double x, y;
//    cout << "Enter values for x and y:";
//    cin >> x >> y;
//    cout << "Total: " << x+y;
//
//    return 0;
//}



//#include <iostream>
//#include <cmath>
//using namespace std;
//int main () {
//    double  x = ceil(5.4);
//    double z = floor(5.4);
//    cout <<x << endl
//          << z << endl;
//
//    double y = pow(2, 3);
//    cout << y << endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main(){
//    int number{}; // curle bracket intializer
//    string character{};
//    auto dc = 5.4;
//    cout << character << endl;
//    cout << number;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main(){
//
//    int binary255 = 0b11111111; // binary
//    cout << binary255 << endl;
//    int hexa255 = 0xff; // Hexa-decimal ...0xFF
//    cout << hexa255;
//    return 0;
//}


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    const short minValue = 1, maxValue = 6;
    srand(time(0));
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << first << ", " << second;
    return 0;
}