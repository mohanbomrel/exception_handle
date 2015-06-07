#include <stdexcept>

using namespace std;

class ValueOutofRangeException: public runtime_error
{
public:
    ValueOutofRangeException():runtime_error("Value Out Of Range") {
    }
};
