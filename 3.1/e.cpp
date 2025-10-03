#include <iostream>
#include <list>
#include <string>
#include <iterator>


void getLines(std::list<std::string>& file) {
  std::string line;
  while (std::getline(std::cin, line)) {
    if (line.empty()) {
      break;
    }

    file.push_back(line);
  }
}


void completeCommands(std::list<std::string>& file) {
  std::list<std::string> buffer;
  std::string command;
  
  auto pointer = file.begin();
  
  bool activeShift = false;
  auto startShift = file.begin();
  int selectedShift = 0;

  while (std::cin >> command) {
    if (command == "Shift") {
      activeShift = true;
      startShift = pointer;
      selectedShift = 0;
    } else if (command == "Up" && pointer != file.begin()) {
      pointer--;
      if (activeShift) {
        selectedShift--;
      }
    } else if (command == "Down" && pointer != file.end()) {
      pointer++;
      if (activeShift) {
        selectedShift++;
      }
    } else if (command == "Ctrl+X") {      
      if (selectedShift == 0 && pointer != file.end()) {
        buffer.push_back(*pointer);
        pointer = file.erase(pointer);
      } else if (selectedShift > 0) {
        buffer.splice(buffer.begin(), file, startShift, pointer);
      } else {
        buffer.splice(buffer.begin(), file, pointer, startShift);
      }
      
      activeShift = false;
    } else if (command == "Ctrl+V" && !buffer.empty()) {
      if (selectedShift > 0) {
        pointer = file.erase(startShift, pointer);
      } else if (selectedShift < 0) {
        pointer = file.erase(pointer, startShift);
      }

      file.splice(pointer, buffer, buffer.begin(), buffer.end());

      activeShift = false;
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
