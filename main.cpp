#include <QApplication>
#include <popper.h>

int main(int argc, char * argv[])
{
	QApplication app(argc, argv);
	Popper::pop("popper here!");
	
	return 0;
}
