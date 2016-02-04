// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/placessidebar.h>
#include <gtkmm/private/placessidebar_p.h>


/*
 * Copyright 2013 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtk/gtk.h>

namespace Gtk
{
} // namespace Gtk


namespace
{


static gint PlacesSidebar_signal_drag_action_requested_callback(GtkPlacesSidebar* self, GdkDragContext* p0,GFile* p1,GList* p2,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< int,const Glib::RefPtr<Gdk::DragContext>&,const Glib::RefPtr<Gio::File>&,const std::vector< Glib::RefPtr<Gio::File> >& > SlotType;

  auto obj = dynamic_cast<PlacesSidebar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, Glib::wrap(p1, true)
, Glib::ListHandler< Glib::RefPtr<Gio::File> >::list_to_vector(p2, Glib::OWNERSHIP_NONE)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  typedef gint RType;
  return RType();
}

static gint PlacesSidebar_signal_drag_action_requested_notify_callback(GtkPlacesSidebar* self, GdkDragContext* p0,GFile* p1,GList* p2, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::RefPtr<Gdk::DragContext>&,const Glib::RefPtr<Gio::File>&,const std::vector< Glib::RefPtr<Gio::File> >& > SlotType;

  auto obj = dynamic_cast<PlacesSidebar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, Glib::wrap(p1, true)
, Glib::ListHandler< Glib::RefPtr<Gio::File> >::list_to_vector(p2, Glib::OWNERSHIP_NONE)
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gint RType;
  return RType();
}

static const Glib::SignalProxyInfo PlacesSidebar_signal_drag_action_requested_info =
{
  "drag_action_requested",
  (GCallback) &PlacesSidebar_signal_drag_action_requested_callback,
  (GCallback) &PlacesSidebar_signal_drag_action_requested_notify_callback
};


static void PlacesSidebar_signal_drag_perform_drop_callback(GtkPlacesSidebar* self, GFile* p0,GList* p1,gint p2,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::RefPtr<Gio::File>&,const std::vector< Glib::RefPtr<Gio::File> >&,int > SlotType;

  auto obj = dynamic_cast<PlacesSidebar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, Glib::ListHandler< Glib::RefPtr<Gio::File> >::list_to_vector(p1, Glib::OWNERSHIP_NONE)
, p2
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo PlacesSidebar_signal_drag_perform_drop_info =
{
  "drag_perform_drop",
  (GCallback) &PlacesSidebar_signal_drag_perform_drop_callback,
  (GCallback) &PlacesSidebar_signal_drag_perform_drop_callback
};


static gint PlacesSidebar_signal_drag_action_ask_callback(GtkPlacesSidebar* self, gint p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< int,int > SlotType;

  auto obj = dynamic_cast<PlacesSidebar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return (*static_cast<SlotType*>(slot))(p0
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  typedef gint RType;
  return RType();
}

static gint PlacesSidebar_signal_drag_action_ask_notify_callback(GtkPlacesSidebar* self, gint p0, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,int > SlotType;

  auto obj = dynamic_cast<PlacesSidebar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gint RType;
  return RType();
}

static const Glib::SignalProxyInfo PlacesSidebar_signal_drag_action_ask_info =
{
  "drag_action_ask",
  (GCallback) &PlacesSidebar_signal_drag_action_ask_callback,
  (GCallback) &PlacesSidebar_signal_drag_action_ask_notify_callback
};


static void PlacesSidebar_signal_open_location_callback(GtkPlacesSidebar* self, GFile* p0,GtkPlacesOpenFlags p1,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::RefPtr<Gio::File>&,PlacesOpenFlags > SlotType;

  auto obj = dynamic_cast<PlacesSidebar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, ((PlacesOpenFlags)(p1))
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo PlacesSidebar_signal_open_location_info =
{
  "open_location",
  (GCallback) &PlacesSidebar_signal_open_location_callback,
  (GCallback) &PlacesSidebar_signal_open_location_callback
};


static void PlacesSidebar_signal_populate_popup_callback(GtkPlacesSidebar* self, GtkMenu* p0,GFile* p1,GVolume* p2,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,Menu*,const Glib::RefPtr<Gio::File>&,const Glib::RefPtr<Gio::Volume>& > SlotType;

  auto obj = dynamic_cast<PlacesSidebar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0)
, Glib::wrap(p1, true)
, Glib::wrap(p2, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo PlacesSidebar_signal_populate_popup_info =
{
  "populate_popup",
  (GCallback) &PlacesSidebar_signal_populate_popup_callback,
  (GCallback) &PlacesSidebar_signal_populate_popup_callback
};


#ifndef GTKMM_DISABLE_DEPRECATED


static const Glib::SignalProxyInfo PlacesSidebar_signal_show_connect_to_server_info =
{
  "show_connect_to_server",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};

#endif // GTKMM_DISABLE_DEPRECATED


static void PlacesSidebar_signal_show_error_message_callback(GtkPlacesSidebar* self, const gchar* p0,const gchar* p1,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::ustring&,const Glib::ustring& > SlotType;

  auto obj = dynamic_cast<PlacesSidebar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
, Glib::convert_const_gchar_ptr_to_ustring(p1)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo PlacesSidebar_signal_show_error_message_info =
{
  "show_error_message",
  (GCallback) &PlacesSidebar_signal_show_error_message_callback,
  (GCallback) &PlacesSidebar_signal_show_error_message_callback
};


static const Glib::SignalProxyInfo PlacesSidebar_signal_show_enter_location_info =
{
  "show_enter_location",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo PlacesSidebar_signal_show_other_locations_info =
{
  "show_other_locations",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::PlacesSidebar* wrap(GtkPlacesSidebar* object, bool take_copy)
{
  return dynamic_cast<Gtk::PlacesSidebar *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& PlacesSidebar_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &PlacesSidebar_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_places_sidebar_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void PlacesSidebar_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* PlacesSidebar_Class::wrap_new(GObject* o)
{
  return manage(new PlacesSidebar((GtkPlacesSidebar*)(o)));

}


/* The implementation: */

PlacesSidebar::PlacesSidebar(const Glib::ConstructParams& construct_params)
:
  Gtk::ScrolledWindow(construct_params)
{
  }

PlacesSidebar::PlacesSidebar(GtkPlacesSidebar* castitem)
:
  Gtk::ScrolledWindow((GtkScrolledWindow*)(castitem))
{
  }


PlacesSidebar::PlacesSidebar(PlacesSidebar&& src) noexcept
: Gtk::ScrolledWindow(std::move(src))
{}

PlacesSidebar& PlacesSidebar::operator=(PlacesSidebar&& src) noexcept
{
  Gtk::ScrolledWindow::operator=(std::move(src));
  return *this;
}

PlacesSidebar::~PlacesSidebar() noexcept
{
  destroy_();
}

PlacesSidebar::CppClassType PlacesSidebar::placessidebar_class_; // initialize static member

GType PlacesSidebar::get_type()
{
  return placessidebar_class_.init().get_type();
}


GType PlacesSidebar::get_base_type()
{
  return gtk_places_sidebar_get_type();
}


PlacesSidebar::PlacesSidebar()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::ScrolledWindow(Glib::ConstructParams(placessidebar_class_.init()))
{
  

}

void PlacesSidebar::set_open_flags(PlacesOpenFlags flags)
{
  gtk_places_sidebar_set_open_flags(gobj(), ((GtkPlacesOpenFlags)(flags)));
}

PlacesOpenFlags PlacesSidebar::get_open_flags() const
{
  return ((PlacesOpenFlags)(gtk_places_sidebar_get_open_flags(const_cast<GtkPlacesSidebar*>(gobj()))));
}

void PlacesSidebar::set_location(const Glib::RefPtr<const Gio::File>& location)
{
  gtk_places_sidebar_set_location(gobj(), const_cast<GFile*>(Glib::unwrap<Gio::File>(location)));
}

Glib::RefPtr<Gio::File> PlacesSidebar::get_location() const
{
  return Glib::wrap(gtk_places_sidebar_get_location(const_cast<GtkPlacesSidebar*>(gobj())));
}

void PlacesSidebar::set_show_desktop(bool show_desktop)
{
  gtk_places_sidebar_set_show_desktop(gobj(), static_cast<int>(show_desktop));
}

bool PlacesSidebar::get_show_desktop() const
{
  return gtk_places_sidebar_get_show_desktop(const_cast<GtkPlacesSidebar*>(gobj()));
}

void PlacesSidebar::add_shortcut(const Glib::RefPtr<Gio::File>& location)
{
  gtk_places_sidebar_add_shortcut(gobj(), const_cast<GFile*>(Glib::unwrap<Gio::File>(location)));
}

void PlacesSidebar::remove_shortcut(const Glib::RefPtr<Gio::File>& location)
{
  gtk_places_sidebar_remove_shortcut(gobj(), const_cast<GFile*>(Glib::unwrap<Gio::File>(location)));
}

std::vector< Glib::RefPtr<Gio::File> > PlacesSidebar::list_shortcuts() const
{
  return Glib::SListHandler< Glib::RefPtr<Gio::File> >::slist_to_vector(gtk_places_sidebar_list_shortcuts(const_cast<GtkPlacesSidebar*>(gobj())), Glib::OWNERSHIP_DEEP);
}

Glib::RefPtr<Gio::File> PlacesSidebar::get_nth_bookmark(int n) const
{
  return Glib::wrap(gtk_places_sidebar_get_nth_bookmark(const_cast<GtkPlacesSidebar*>(gobj()), n));
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void PlacesSidebar::set_show_connect_to_server(bool show_connect_to_server)
{
  gtk_places_sidebar_set_show_connect_to_server(gobj(), static_cast<int>(show_connect_to_server));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool PlacesSidebar::get_show_connect_to_server() const
{
  return gtk_places_sidebar_get_show_connect_to_server(const_cast<GtkPlacesSidebar*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

void PlacesSidebar::set_local_only(bool local_only)
{
  gtk_places_sidebar_set_local_only(gobj(), static_cast<int>(local_only));
}

bool PlacesSidebar::get_local_only() const
{
  return gtk_places_sidebar_get_local_only(const_cast<GtkPlacesSidebar*>(gobj()));
}

void PlacesSidebar::set_show_enter_location(bool show_enter_location)
{
  gtk_places_sidebar_set_show_enter_location(gobj(), static_cast<int>(show_enter_location));
}

bool PlacesSidebar::get_show_enter_location() const
{
  return gtk_places_sidebar_get_show_enter_location(const_cast<GtkPlacesSidebar*>(gobj()));
}

void PlacesSidebar::set_show_recent(bool show_recent)
{
  gtk_places_sidebar_set_show_recent(gobj(), static_cast<int>(show_recent));
}

bool PlacesSidebar::get_show_recent() const
{
  return gtk_places_sidebar_get_show_recent(const_cast<GtkPlacesSidebar*>(gobj()));
}

void PlacesSidebar::set_show_trash(bool show_trash)
{
  gtk_places_sidebar_set_show_trash(gobj(), static_cast<int>(show_trash));
}

bool PlacesSidebar::get_show_trash() const
{
  return gtk_places_sidebar_get_show_trash(const_cast<GtkPlacesSidebar*>(gobj()));
}

void PlacesSidebar::set_show_other_locations(bool show_other_locations)
{
  gtk_places_sidebar_set_show_other_locations(gobj(), static_cast<int>(show_other_locations));
}

bool PlacesSidebar::get_show_other_locations() const
{
  return gtk_places_sidebar_get_show_other_locations(const_cast<GtkPlacesSidebar*>(gobj()));
}

void PlacesSidebar::set_drop_targets_visible(bool visible, const Glib::RefPtr<Gdk::DragContext>& context)
{
  gtk_places_sidebar_set_drop_targets_visible(gobj(), static_cast<int>(visible), Glib::unwrap(context));
}


Glib::SignalProxy3< int,const Glib::RefPtr<Gdk::DragContext>&,const Glib::RefPtr<Gio::File>&,const std::vector< Glib::RefPtr<Gio::File> >& > PlacesSidebar::signal_drag_action_requested()
{
  return Glib::SignalProxy3< int,const Glib::RefPtr<Gdk::DragContext>&,const Glib::RefPtr<Gio::File>&,const std::vector< Glib::RefPtr<Gio::File> >& >(this, &PlacesSidebar_signal_drag_action_requested_info);
}


Glib::SignalProxy3< void,const Glib::RefPtr<Gio::File>&,const std::vector< Glib::RefPtr<Gio::File> >&,int > PlacesSidebar::signal_drag_perform_drop()
{
  return Glib::SignalProxy3< void,const Glib::RefPtr<Gio::File>&,const std::vector< Glib::RefPtr<Gio::File> >&,int >(this, &PlacesSidebar_signal_drag_perform_drop_info);
}


Glib::SignalProxy1< int,int > PlacesSidebar::signal_drag_action_ask()
{
  return Glib::SignalProxy1< int,int >(this, &PlacesSidebar_signal_drag_action_ask_info);
}


Glib::SignalProxy2< void,const Glib::RefPtr<Gio::File>&,PlacesOpenFlags > PlacesSidebar::signal_open_location()
{
  return Glib::SignalProxy2< void,const Glib::RefPtr<Gio::File>&,PlacesOpenFlags >(this, &PlacesSidebar_signal_open_location_info);
}


Glib::SignalProxy3< void,Menu*,const Glib::RefPtr<Gio::File>&,const Glib::RefPtr<Gio::Volume>& > PlacesSidebar::signal_populate_popup()
{
  return Glib::SignalProxy3< void,Menu*,const Glib::RefPtr<Gio::File>&,const Glib::RefPtr<Gio::Volume>& >(this, &PlacesSidebar_signal_populate_popup_info);
}


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::SignalProxy0< void > PlacesSidebar::signal_show_connect_to_server()
{
  return Glib::SignalProxy0< void >(this, &PlacesSidebar_signal_show_connect_to_server_info);
}
#endif // GTKMM_DISABLE_DEPRECATED


Glib::SignalProxy2< void,const Glib::ustring&,const Glib::ustring& > PlacesSidebar::signal_show_error_message()
{
  return Glib::SignalProxy2< void,const Glib::ustring&,const Glib::ustring& >(this, &PlacesSidebar_signal_show_error_message_info);
}


Glib::SignalProxy0< void > PlacesSidebar::signal_show_enter_location()
{
  return Glib::SignalProxy0< void >(this, &PlacesSidebar_signal_show_enter_location_info);
}


Glib::SignalProxy0< void > PlacesSidebar::signal_show_other_locations()
{
  return Glib::SignalProxy0< void >(this, &PlacesSidebar_signal_show_other_locations_info);
}


Glib::PropertyProxy< bool > PlacesSidebar::property_local_only() 
{
  return Glib::PropertyProxy< bool >(this, "local-only");
}

Glib::PropertyProxy_ReadOnly< bool > PlacesSidebar::property_local_only() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "local-only");
}

Glib::PropertyProxy< Glib::RefPtr<Gio::File> > PlacesSidebar::property_location() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::File> >(this, "location");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::File> > PlacesSidebar::property_location() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::File> >(this, "location");
}

Glib::PropertyProxy< PlacesOpenFlags > PlacesSidebar::property_open_flags() 
{
  return Glib::PropertyProxy< PlacesOpenFlags >(this, "open-flags");
}

Glib::PropertyProxy_ReadOnly< PlacesOpenFlags > PlacesSidebar::property_open_flags() const
{
  return Glib::PropertyProxy_ReadOnly< PlacesOpenFlags >(this, "open-flags");
}

#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< bool > PlacesSidebar::property_show_connect_to_server() 
{
  return Glib::PropertyProxy< bool >(this, "show-connect-to-server");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > PlacesSidebar::property_show_connect_to_server() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-connect-to-server");
}
#endif // GTKMM_DISABLE_DEPRECATED


Glib::PropertyProxy< bool > PlacesSidebar::property_show_desktop() 
{
  return Glib::PropertyProxy< bool >(this, "show-desktop");
}

Glib::PropertyProxy_ReadOnly< bool > PlacesSidebar::property_show_desktop() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-desktop");
}

Glib::PropertyProxy< bool > PlacesSidebar::property_show_enter_location() 
{
  return Glib::PropertyProxy< bool >(this, "show-enter-location");
}

Glib::PropertyProxy_ReadOnly< bool > PlacesSidebar::property_show_enter_location() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-enter-location");
}

Glib::PropertyProxy< bool > PlacesSidebar::property_show_recent() 
{
  return Glib::PropertyProxy< bool >(this, "show-recent");
}

Glib::PropertyProxy_ReadOnly< bool > PlacesSidebar::property_show_recent() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-recent");
}

Glib::PropertyProxy< bool > PlacesSidebar::property_show_trash() 
{
  return Glib::PropertyProxy< bool >(this, "show-trash");
}

Glib::PropertyProxy_ReadOnly< bool > PlacesSidebar::property_show_trash() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-trash");
}

Glib::PropertyProxy< bool > PlacesSidebar::property_show_other_locations() 
{
  return Glib::PropertyProxy< bool >(this, "show-other-locations");
}

Glib::PropertyProxy_ReadOnly< bool > PlacesSidebar::property_show_other_locations() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-other-locations");
}

Glib::PropertyProxy< bool > PlacesSidebar::property_populate_all() 
{
  return Glib::PropertyProxy< bool >(this, "populate-all");
}

Glib::PropertyProxy_ReadOnly< bool > PlacesSidebar::property_populate_all() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "populate-all");
}


} // namespace Gtk

