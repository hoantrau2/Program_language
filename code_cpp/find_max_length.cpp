#include <alloca.h>
#include <cmath>
#include <cstdlib>
#include <iostream>

class DayDiem {
public:
  int n;
  float *x, *y;
  float doDai(int i, int j) {
    return sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
  }

  void nhapSoDiem();
};

void DayDiem::nhapSoDiem() {
  std::cout << "\n So diem N = ";
  std::cin >> n;
  x = (float *)malloc((n + 1) * sizeof(float));
  y = (float *)malloc((n + 1) * sizeof(float));
  for (int i = 1; i <= n; i++) {
    std::cout << "\n nhap toa do x va y cua diem thu " << i << ": ";
    std::cin >> x[i] >> y[i];
  }
}

int main() {
  DayDiem p;
  p.nhapSoDiem();
  int n = p.n;
  int imax = 1, jmax = 2;
  float dmax = p.doDai(1, 2);

  for (int i = 1; i <= n - 1; ++i) {
    for (int j = i + 1; j <= n; ++j) {
      float d = p.doDai(i, j);
      if (d > dmax) {
        dmax = d;
        imax = i;
        jmax = j;
      }
    }
  }

  std::cout << "\n Length max is: " << dmax << std::endl;
  std::cout << "\n imax = " << imax << " va jmax = " << jmax << std::endl;

  return 0;
}