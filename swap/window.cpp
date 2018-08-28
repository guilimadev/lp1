#include <iostream>
#include <gtkmm.h>
#include <gtkmm/button.h>



int main(int argc, char *argv[]){

	auto app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

	Gtk::Window window;
	Gtk::Button Button1("Hello"); 
	Gtk::Box box1(ORIENTATION_HORIZONTAL);

	
	Button1.show();
	Button1.set_border_width(20);
	box1.add(Button1);
	box1.show();

	window.add(box1);

	window.set_default_size(640,480);
	window.set_position(Gtk::WIN_POS_CENTER);
	window.set_title("Aprendendo Gtkmm with C++");

	return app->run(window);

}