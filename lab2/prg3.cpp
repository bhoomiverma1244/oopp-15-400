//reference 
#include <iostream>
using namespace std;
void updateSalary(float &salary) {
salary = salary + (salary * 10 / 100);
}
int main() {
float salary = 50000;
updateSalary(salary);
cout << "Updated salary: " << salary << endl;
 return 0;
}

//pointer
#include <iostream>
using namespace std;
void updateSalary(float *salary) {
*salary = *salary + (*salary * 10 / 100);
}
int main() {
float salary = 50000;
updateSalary(&salary);
cout << "Updated salary: " << salary << endl;
return 0;
}