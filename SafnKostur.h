#include <String>
using namespace std;
class SafnKostur {
private:
	int id;
	string titill;
public:
	SafnKostur();
	SafnKostur(int id, string titill);
	int get_id(int id);
	void set_id();
	string get_titill();
	void set_titill(string titill);
};