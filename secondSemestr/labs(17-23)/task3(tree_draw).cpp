#include <iostream>
using namespace std;

class tree {
public:
  virtual void draw() = 0;
};
class oak : public tree {
public:
  void draw() override {
    cout << "    @@@ " << endl
         << "   @@@@@  " << endl
         << " @@@@@@@@@ " << endl
         << "@@@@@||@@@@@" << endl
         << "     ||     " << endl;
  }
};
class pine : public tree {
public:
  void draw() override { cout << "   /\\\n <<||>>\n<<<||>>>\n"; }
};
class cherry : public tree {
public:
  void draw() override {
    cout << "  ** " << endl << "*\\||/*" << endl << "**||**" << endl;
  }
};
class drawer {
public:
  void draw(tree *tree) { tree->draw(); }
};
int main() {
  oak tree1;
  pine tree2;
  cherry tree3;
  drawer drawer;
  drawer.draw(&tree1);
  cout << endl;
  drawer.draw(&tree2);
  cout << endl;
  drawer.draw(&tree3);
  cout << endl;
}