#include"BSt.h"
#include<cassert>
int main()
{
	BST<int>x;
	x.insert(1);
	x.insert(12);
	x.insert(0);
	x.insert(2);
	cout << "search= " << x.search(1) << endl;
	cout << "search= " << x.search(12) << endl;
	cout << "search= " << x.search(0) << endl;

	cout << endl;
	cout << "uxix shrjamncum\n "; x.Preorder();
	cout << "\n \n\n simetrik  shrjamncum \n"; x.inorder();
	cout << "\n\n\n  hakadardz shrjamncum \n"; x.postorder();


	system("pause");
}
