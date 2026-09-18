#pragma once

#include <string>

namespace project
{

  class App
  {
   public:
    explicit App(std::string name = "project");
    ~App() = default;

    int run();
    [[nodiscard]] const std::string& getName() const;

   private:
    std::string m_name;
  };

}  // namespace project
