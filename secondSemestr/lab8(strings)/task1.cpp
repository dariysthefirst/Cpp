#include <iostream>
#include <string>

using namespace std;

int main() {
  string values;
  string templates;
  string finalString;
  cout << "Enter values please: ";
  getline(cin, values);
  cout << "Enter template: ";
  getline(cin, templates);
  int posTempl = 0;
  while (posTempl < templates.length()) {
    int openBracket = templates.find("[", posTempl);
    if (openBracket == string ::npos) {
      finalString += templates.substr(posTempl);
      break;
    }
    int closedBracket = templates.find("]", openBracket);
    if (closedBracket == string ::npos) {
      finalString += templates.substr(posTempl);
      break;
    }
    finalString += templates.substr(posTempl, openBracket - posTempl);
    string key =
        templates.substr(openBracket + 1, closedBracket - openBracket - 1);
    int startPosVal = values.find(key);
    int endPosVal = values.find(",", startPosVal);
    if (endPosVal == string ::npos) {
      endPosVal = values.length();
    }
    finalString += values.substr(startPosVal + key.length() + 1, endPosVal - (startPosVal+key.length() + 1));
    posTempl = closedBracket + 1;
  }
  cout << finalString;
}