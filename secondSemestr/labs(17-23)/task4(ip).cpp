#include <iostream>
#include <string>
using namespace std;
class IP_Address {
protected:
  string ip;

public:
  IP_Address(string ip) { this->ip = ip; }
  IP_Address(const IP_Address &other) { this->ip = other.ip; }
  virtual void print_ip() {}
};
class IP_Address_Checked : public IP_Address {
private:
  bool checked(string &ip) {
    int startPos = 0;
    int i = 0;
    int dotPos;
    int ipNums[4];
    int dotCount = 0;
    if (ip[0] == '0') {
      return false;
    }
    while (startPos < ip.length()) {
      dotPos = ip.find(".", startPos);
      if (dotPos != string::npos) {
        dotCount++;
      } else {
        dotPos = ip.length();
      }
      if (dotCount > 3) {
        return false;
      }

      ipNums[i] = stoi(ip.substr(startPos, dotPos - startPos));
      startPos = dotPos + 1;
      i++;
    }
    if (dotCount == 3) {
      for (int j = 0; j < 4; j++) {
        if (ipNums[j] <= 0 || ipNums[j] >= 255) {
          return false;
        }
      }
      return true;
    }
    return false;
  }

public:
  IP_Address_Checked(string ip) : IP_Address(ip) {}
  void print_ip() override {
    cout << "The IP address " << ip << " is "
         << (checked(ip) ? "correct." : "not correct.") << endl;
  }
};
int main() {
  int i = 0;
  while (i < 3) {
    string ip_add = "";
    cout << "Enter IP: ";
    getline(cin, ip_add);
    IP_Address_Checked ip_address1(ip_add);
    ip_address1.print_ip();
    i++;
  }
}
