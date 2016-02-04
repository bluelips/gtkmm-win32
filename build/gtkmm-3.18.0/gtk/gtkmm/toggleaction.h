// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKMM_TOGGLEACTION_H
#define _GTKMM_TOGGLEACTION_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2003 The gtkmm Development Team
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

//Deprecated: #include <gtkmm/stockid.h>
#include <gtkmm/action.h>


//TODO: Deprecate this when we are ready. It is already deprecated in GTK+.
//_IS_DEPRECATED // This whole file is deprecated.

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkToggleAction GtkToggleAction;
typedef struct _GtkToggleActionClass GtkToggleActionClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class ToggleAction_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** An action which can be toggled between two states.
 *
 * A Gtk::ToggleAction corresponds roughly to a Gtk::CheckMenuItem.
 * It has an "active" state specifying whether the action has been checked or not.
 *
 */

class ToggleAction : public Gtk::Action
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef ToggleAction CppObjectType;
  typedef ToggleAction_Class CppClassType;
  typedef GtkToggleAction BaseObjectType;
  typedef GtkToggleActionClass BaseClassType;

  // noncopyable
  ToggleAction(const ToggleAction&) = delete;
  ToggleAction& operator=(const ToggleAction&) = delete;

private:  friend class ToggleAction_Class;
  static CppClassType toggleaction_class_;

protected:
  explicit ToggleAction(const Glib::ConstructParams& construct_params);
  explicit ToggleAction(GtkToggleAction* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ToggleAction(ToggleAction&& src) noexcept;
  ToggleAction& operator=(ToggleAction&& src) noexcept;

  virtual ~ToggleAction() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkToggleAction*       gobj()       { return reinterpret_cast<GtkToggleAction*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkToggleAction* gobj() const { return reinterpret_cast<GtkToggleAction*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkToggleAction* gobj_copy();

private:


protected:
  /** Creates an empty toggle action. */
  ToggleAction();

#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a toggle action.
   *
   * @param name      A unique name for the action.
   * @param stock_id  The stock icon to display in widgets representing the
   *                  action.
   * @param label     The label displayed in menu items and on buttons.
   * @param tooltip   A tooltip for the action.
   * @param is_active The default checked state of the action.
   *
   * @deprecated Stock IDs are deprecated, so use another constructor.
   */
   explicit ToggleAction(const Glib::ustring& name, const StockID& stock_id = StockID(), const Glib::ustring& label = Glib::ustring(), const Glib::ustring& tooltip = Glib::ustring(), bool is_active = false);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Creates a toggle action with an icon name.
   * The toggle action's icon will reflect the specified icon name in the
   * user's icon theme.
   *
   * @param name      A unique name for the action.
   * @param icon_name An IconTheme icon name used for widgets representing the
   *                  action.
   * @param label     The label displayed in menu items and on buttons.
   * @param tooltip   A tooltip for the action.
   * @param is_active The default checked state of the action.
   */
   explicit ToggleAction(const Glib::ustring& name, const Glib::ustring& icon_name, const Glib::ustring& label = Glib::ustring(), const Glib::ustring& tooltip = Glib::ustring(), bool is_active = false);

public:
  //Note that gtk_toggle_action_new() does not allow name to be NULL, which suggests that we should not have a default constructor,
  //but it's OK to set the name later:
  
  static Glib::RefPtr<ToggleAction> create();


  /** Creates a toggle action.
   *
   * @param name      A unique name for the action.
   * @param label     The label displayed in menu items and on buttons.
   * @param tooltip   A tooltip for the action.
   * @param is_active The default checked state of the action.
   *
   * @return A new ToggleAction.
   */
   static Glib::RefPtr<ToggleAction> create(const Glib::ustring& name, const Glib::ustring& label = Glib::ustring(), const Glib::ustring& tooltip = Glib::ustring(), bool is_active = false);

#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a toggle action with a stock ID.
   * The tock ID is used to set a default icon, text and accelerator for
   * the toggle action.
   *
   * @param name      A unique name for the action.
   * @param stock_id  The stock icon to display in widgets representing the
   *                  action.
   * @param label     The label displayed in menu items and on buttons.
   * @param tooltip   A tooltip for the action.
   * @param is_active The default checked state of the action.
   *
   * @return A new ToggleAction.
   * @deprecated Stock IDs are deprecated, so use another create() method.
   */
   static Glib::RefPtr<ToggleAction> create(const Glib::ustring& name, const Gtk::StockID& stock_id, const Glib::ustring& label = Glib::ustring(), const Glib::ustring& tooltip = Glib::ustring(), bool is_active = false);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Creates a toggle action with an icon name.
   * The toggle action's icon will reflect the specified icon name in the
   * user's icon theme.
   *
   * @param name      A unique name for the action.
   * @param icon_name An IconTheme icon name used for widgets representing the
   *                  action.
   * @param label     The label displayed in menu items and on buttons.
   * @param tooltip   A tooltip for the action.
   * @param is_active The default checked state of the action.
   *
   * @return A new ToggleAction.
   */
   static Glib::RefPtr<ToggleAction> create_with_icon_name(const Glib::ustring& name, const Glib::ustring& icon_name, const Glib::ustring& label, const Glib::ustring& tooltip, bool is_active = false);

  
  /** Emits the “toggled” signal on the toggle action.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.10
   */
  void toggled();
  
  /** Sets the checked state on the toggle action.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.10
   * 
   * @param is_active Whether the action should be checked or not.
   */
  void set_active(bool is_active =  true);
  
  /** Returns the checked state of the toggle action.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.10
   * 
   * @return The checked state of the toggle action.
   */
  bool get_active() const;
  
  /** Sets whether the action should have proxies like a radio action.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.10
   * 
   * @param draw_as_radio Whether the action should have proxies like a radio 
   * action.
   */
  void set_draw_as_radio(bool draw_as_radio =  true);
  
  /** Returns whether the action should have proxies like a radio action.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.10
   * 
   * @return Whether the action should have proxies like a radio action.
   */
  bool get_draw_as_radio() const;

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%toggled()</tt>
   *
   * Should be connected if you wish to perform an action
   * whenever the Gtk::ToggleAction state is changed.
   * 
   * Deprecated: 3.10
   */

  Glib::SignalProxy0< void > signal_toggled();


  /** Whether the proxies for this action look like radio action proxies.
   * 
   * This is an appearance property and thus only applies if 
   * Gtk::Activatable::property_use_action_appearance() is <tt>true</tt>.
   * 
   * Deprecated: 3.10
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_draw_as_radio() ;

/** Whether the proxies for this action look like radio action proxies.
   * 
   * This is an appearance property and thus only applies if 
   * Gtk::Activatable::property_use_action_appearance() is <tt>true</tt>.
   * 
   * Deprecated: 3.10
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_draw_as_radio() const;

  /** Whether the toggle action should be active.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.10
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_active() ;

/** Whether the toggle action should be active.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.10
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_active() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_toggled().
  virtual void on_toggled();


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ToggleAction
   */
  Glib::RefPtr<Gtk::ToggleAction> wrap(GtkToggleAction* object, bool take_copy = false);
}


#endif /* _GTKMM_TOGGLEACTION_H */
