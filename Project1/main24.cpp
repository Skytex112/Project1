//#include "Reservoir.h"
//#include <iostream>
//
//using std::cout;
//using std::endl;
//
//int main() {
//    Reservoir r1("Black Sea", "Sea", 1000, 2000, 2210);
//    Reservoir r2("Lake Synevyr", "Lake", 500, 600, 22);
//    Reservoir r3("Basin", "Basin", 25, 50, 2);
//
//    r1.printInfo();
//    r2.printInfo();
//    r3.printInfo();
//
//    if (r1.isSameType(r2)) {
//        if (r1.hasLargerSurfaceAreaThan(r2)) {
//            cout << r1.getName() << " has a greater surface area than " << r2.getName() << "." << endl;
//        }
//        else {
//            cout << r2.getName() << " has a greater surface area than " << r1.getName() << "." << endl;
//        }
//    }
//    else {
//        cout << "Reservoirs belong to different types and cannot be compared." << endl;
//    }
//
//    r3.setName("New pool");
//    r3.setType("Artificial");
//    r3.setDimensions(30, 60, 3);
//    cout << "\nUpdated information about the reservoir:" << endl;
//    r3.printInfo();
//
//    return 0;
//}
