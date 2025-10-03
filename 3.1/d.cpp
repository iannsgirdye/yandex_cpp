#include <iostream>
#include <list>
#include <string>


void getLines(std::list<std::string> &file) {
  std::string line;
  while (std::getline(std::cin, line)) {
    file.push_back(line);
    if (line.empty()) {
      break;
    }
  }
}


void completeCommands(std::list<std::string> &file) {
  std::string buffer;
  std::string command;
  auto pointer = file.begin();
  while (std::cin >> command) {
    if (command == "Up" && pointer != file.begin()) {
      pointer--;
    } else if (command == "Down") {
      pointer++;
      if (pointer == file.end()) {
        pointer--;
      }
    } else if (command == "Ctrl+X" && !(*pointer).empty()) {
      buffer = *pointer;
      pointer = file.erase(pointer);
    } else if (command == "Ctrl+V" && !buffer.empty()){
      file.insert(pointer, buffer);
    }
  }
}


void printLines(std::list<std::string> &file) {
  for (auto line = file.begin(); line != file.end(); ++line) {
    std::cout << *line << std::endl;
  }
}


int main() {
  std::list<std::string> file;
  getLines(file);
  completeCommands(file);
  printLines(file);
  
  return 0;
}
