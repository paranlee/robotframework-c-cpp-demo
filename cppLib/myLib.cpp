#include <string>
#define NR_USERS 2

using namespace std;

class User
{
 public:
    const string name;
    const string passwd;
};

const class User VALID_USERS[NR_USERS] = {
    "john", "long",
    "demo", "mode"
};

extern "C"
{

int validate_user(const char* name, const char* passwd)
{
    string nm(name), pw(passwd);

    for(const auto& user : VALID_USERS) {
        if( 0 == nm.compare(user.name) )
            if( 0 == pw.compare(user.passwd) )
                return 1;
    }

    return 0;
}

}
