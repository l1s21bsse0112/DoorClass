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

    void closeDoor() {
        cout << "Door is Closing.....\n\n";
    }

    void lockDoor();
    void unlock();
	
    bool isDoorOpen() const {
		return true;
	}
	
    bool isDoorLocked() const;
};

int main() {
    return 0;
}
