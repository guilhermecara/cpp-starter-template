#include <iostream>
#include <project/App.hpp>

namespace project
{

  App::App(std::string name) : m_name(std::move(name))
  {
  }

  int App::run()
  {
    std::cout << "Hello from " << m_name << "!\n";
    std::cout << "Project template is working successfully.\n";
    return 0;
  }

  const std::string& App::getName() const
  {
    return m_name;
  }

}  // namespace project
