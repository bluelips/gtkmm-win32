// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/messagedialog.h>
#include <gtkmm/private/messagedialog_p.h>

#include <gtk/gtk.h>

/*
 * Copyright 2002 The gtkmm Development Team
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

MessageDialog::MessageDialog(const Glib::ustring& message, bool use_markup,
                             MessageType type, ButtonsType buttons,
                             bool modal)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Dialog(Glib::ConstructParams(messagedialog_class_.init(), "message_type",(GtkMessageType)type,"buttons",(GtkButtonsType)buttons, static_cast<char*>(0)))
{
  set_modal(modal);
  set_message(message, use_markup);
}

MessageDialog::MessageDialog(Gtk::Window& parent, const Glib::ustring& message, bool use_markup,
                             MessageType type, ButtonsType buttons,
                             bool modal)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Dialog(Glib::ConstructParams(messagedialog_class_.init(), "message_type",(GtkMessageType)type,"buttons",(GtkButtonsType)buttons, static_cast<char*>(0)))
{
  set_modal(modal);
  set_transient_for(parent);
  set_message(message, use_markup);
}

void MessageDialog::set_message(const Glib::ustring& message, bool use_markup)
{
  if(use_markup)
    gtk_message_dialog_set_markup(gobj(), message.c_str());
  else
  {
    property_use_markup() = false;
    property_text() = message;
  }
}

void MessageDialog::set_secondary_text(const Glib::ustring& text, bool use_markup)
{
  if(use_markup)
    gtk_message_dialog_format_secondary_markup(gobj(), "%s", text.c_str());
  else
    gtk_message_dialog_format_secondary_text(gobj(), "%s", text.c_str());
}

} // namespace Gtk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::ButtonsType>::value_type()
{
  return gtk_buttons_type_get_type();
}


namespace Glib
{

Gtk::MessageDialog* wrap(GtkMessageDialog* object, bool take_copy)
{
  return dynamic_cast<Gtk::MessageDialog *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& MessageDialog_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MessageDialog_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_message_dialog_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void MessageDialog_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* MessageDialog_Class::wrap_new(GObject* o)
{
  return new MessageDialog((GtkMessageDialog*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

MessageDialog::MessageDialog(const Glib::ConstructParams& construct_params)
:
  Gtk::Dialog(construct_params)
{
  }

MessageDialog::MessageDialog(GtkMessageDialog* castitem)
:
  Gtk::Dialog((GtkDialog*)(castitem))
{
  }


MessageDialog::MessageDialog(MessageDialog&& src) noexcept
: Gtk::Dialog(std::move(src))
{}

MessageDialog& MessageDialog::operator=(MessageDialog&& src) noexcept
{
  Gtk::Dialog::operator=(std::move(src));
  return *this;
}

MessageDialog::~MessageDialog() noexcept
{
  destroy_();
}

MessageDialog::CppClassType MessageDialog::messagedialog_class_; // initialize static member

GType MessageDialog::get_type()
{
  return messagedialog_class_.init().get_type();
}


GType MessageDialog::get_base_type()
{
  return gtk_message_dialog_get_type();
}


#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void MessageDialog::set_image(Widget& image)
{
  gtk_message_dialog_set_image(gobj(), (image).gobj());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Widget* MessageDialog::get_image()
{
  return Glib::wrap(gtk_message_dialog_get_image(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

const Widget* MessageDialog::get_image() const
{
  return const_cast<MessageDialog*>(this)->get_image();
}

Box* MessageDialog::get_message_area()
{
  return Glib::wrap((GtkBox*)(gtk_message_dialog_get_message_area(gobj())));
}

const Box* MessageDialog::get_message_area() const
{
  return const_cast<MessageDialog*>(this)->get_message_area();
}


Glib::PropertyProxy< MessageType > MessageDialog::property_message_type() 
{
  return Glib::PropertyProxy< MessageType >(this, "message-type");
}

Glib::PropertyProxy_ReadOnly< MessageType > MessageDialog::property_message_type() const
{
  return Glib::PropertyProxy_ReadOnly< MessageType >(this, "message-type");
}

Glib::PropertyProxy< Glib::ustring > MessageDialog::property_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > MessageDialog::property_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "text");
}

Glib::PropertyProxy< bool > MessageDialog::property_use_markup() 
{
  return Glib::PropertyProxy< bool >(this, "use-markup");
}

Glib::PropertyProxy_ReadOnly< bool > MessageDialog::property_use_markup() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-markup");
}

Glib::PropertyProxy< Glib::ustring > MessageDialog::property_secondary_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "secondary-text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > MessageDialog::property_secondary_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "secondary-text");
}

Glib::PropertyProxy< bool > MessageDialog::property_secondary_use_markup() 
{
  return Glib::PropertyProxy< bool >(this, "secondary-use-markup");
}

Glib::PropertyProxy_ReadOnly< bool > MessageDialog::property_secondary_use_markup() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "secondary-use-markup");
}

#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy< Widget* > MessageDialog::property_image() 
{
  return Glib::PropertyProxy< Widget* >(this, "image");
}
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< Widget* > MessageDialog::property_image() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "image");
}
#endif // GTKMM_DISABLE_DEPRECATED


Glib::PropertyProxy_ReadOnly< Box* > MessageDialog::property_message_area() const
{
  return Glib::PropertyProxy_ReadOnly< Box* >(this, "message-area");
}


} // namespace Gtk

