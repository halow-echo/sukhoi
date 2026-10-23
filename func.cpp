#include "header.h"

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void time_sleep(int n)
{
  std::this_thread::sleep_for(std::chrono::milliseconds(n));
}

void animate(std::string text)
{
  for (char t : text)
  {
    std::cout << t;
    time_sleep(100);
  }
  std::cout << "\n";
}
