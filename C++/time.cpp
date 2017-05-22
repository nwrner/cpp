#include <ctime>
#include <iostream>

const time_t ctt = time(0);

int main()
{
  std::cout << asctime(localtime(&ctt)) << std::endl;
  return 0;
}
