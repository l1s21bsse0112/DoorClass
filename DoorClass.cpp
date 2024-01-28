#include<iostream>
using namespace std;

class Door {
private:
    bool isOpen;
    bool isLocked;

public:
    Door();
	void openDoor() {
		cout << "door is opening ....." << endl;
	}

    void closeDoor();
    void lockDoor();
    void unlock();
    bool isDoorOpen() const;
    bool isDoorLocked() const;
};

int main() {
    return 0;
}
