#include <iostream>
#include <string>
using namespace std;

struct Container {
    int index; // 貨櫃編號
    int weight; // 貨櫃重量
    Container *next; 
};

Container* insert(Container* head, int index, int weight)
{
	Container *now = new Container;
	now->index = index;
	now->weight = weight;
	
	if(head != nullptr)
	{
		Container *cur = head, *prev = 0;
		while(cur->index < index)
		{
			prev = cur;
			cur = cur->next;
		}
		if(cur == nullptr)
			head->next = now;
		else if(cur == head){
			now->next = head;
			head = now;
		}
		else{
			prev->next = now;
			now->next = cur;
			head = prev;
		}
	}
	else
	{
			now->next = head;
	}
	
}
Container* remove(Container* head, int max_weight)
{
	Container *cur = head, *prev = 0;

    while(cur != 0 && cur->weight != max_weight)
    {
    	prev = cur;
    	cur = cur->next;
	}
	if(cur == nullptr)
		return head;
	else if(cur->index == head->index)
	{
		head = cur->next;
		delete cur;
		cur = 0;
	}
	else if(cur->next == nullptr)
	{
		head = prev;
		delete cur;
		cur = 0;
	}
	else 
	{
		prev->next = cur->next;
        delete cur;
        cur = 0;
        head = prev;
	}
	return head;
}


int main() {

    Container *head = nullptr;
    int N;
    cin>>N;
    while (N--) {
        string cmd;
        cin >> cmd;
        if (cmd == "insert") {
            int index, weight;
            cin >> index >> weight;
            head = insert(head, index, weight);
        } else if (cmd == "remove") {
            int max_weight;
            cin >> max_weight;
            head = remove(head, max_weight);
        }
    }

    // list all
    Container *cur = head;
    while (cur!=nullptr) {
        cout << cur->index << " " << cur->weight << endl;
        cur = cur->next; 
    }

}
