#include <iostream>

#include "src/hello.hpp"
using namespace std;
int main() {
  TodoList list;

  list.add("Buy milk");
  list.add("Buy eggs");
  list.add("Prepare a lesson for CSC 122");
  list.add("Sow beet seeds");

  list.complete("Buy eggs");

   list.all();


  list.complete();

  list.incomplete();


  list.clear();


  list.all();
}

