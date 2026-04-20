#include <string>
#include <vector>
#include <cctype>

using namespace std;

class TodoList {
private:
    vector<string> tasks;
    vector<bool> done;
public:
    bool add( const string& task);
    bool complete( const string& task);
    void all()const;
    void complete() const;
    void incomplete() const;
    void clear();

};
