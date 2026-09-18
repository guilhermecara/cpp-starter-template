#include <cassert>
#include <iostream>
#include <project/App.hpp>

int main()
{
  std::cout << "[TEST] Running unit tests...\n";

  project::App app("TestApp");
  assert(app.getName() == "TestApp");

  std::cout << "[TEST] App::getName() asserted successfully.\n";
  std::cout << "[TEST] All tests passed!\n";
  return 0;
}
