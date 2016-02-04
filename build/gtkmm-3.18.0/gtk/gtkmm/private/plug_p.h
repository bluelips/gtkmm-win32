// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_PLUG_P_H
#define _GTKMM_PLUG_P_H


#include <gtkmm/private/window_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class Plug_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Plug CppObjectType;
  typedef GtkPlug BaseObjectType;
  typedef GtkPlugClass BaseClassType;
  typedef Gtk::Window_Class CppClassParent;
  typedef GtkWindowClass BaseClassParent;

  friend class Plug;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void embedded_callback(GtkPlug* self);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_PLUG_P_H */
