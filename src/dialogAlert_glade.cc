// generated 2007/3/31 15:01:52 MDT by barcjr@Sirius.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/barcjr/BLProot/blp.glade
// for gtk 2.8.20 and gtkmm 2.8.8
//
// Please modify the corresponding derived classes in ./src/dialogAlert.cc


#if defined __GNUC__ && __GNUC__ < 3
#error This program will crash if compiled with g++ 2.x
// see the dynamic_cast bug in the gtkmm FAQ
#endif //
#include "config.h"
/*
 * Standard gettext macros.
 */
#ifdef ENABLE_NLS
#  include <libintl.h>
#  undef _
#  define _(String) dgettext (GETTEXT_PACKAGE, String)
#  ifdef gettext_noop
#    define N_(String) gettext_noop (String)
#  else
#    define N_(String) (String)
#  endif
#else
#  define textdomain(String) (String)
#  define gettext(String) (String)
#  define dgettext(Domain,Message) (Message)
#  define dcgettext(Domain,Message,Type) (Message)
#  define bindtextdomain(Domain,Directory) (Domain)
#  define _(String) (String)
#  define N_(String) (String)
#endif
#include <gtkmmconfig.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
#include <sigc++/compatibility.h>
#define GMM_GTKMM_22_24(a,b) b
#else //gtkmm 2.2
#define GMM_GTKMM_22_24(a,b) a
#endif //
#include "dialogAlert_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/image.h>
#include <gtkmm/label.h>
#include <gtkmm/box.h>

dialogAlert_glade::dialogAlert_glade(
)
{  dialogAlert = this;
   gmm_data = new GlademmData(get_accel_group());
   okbutton1 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-ok")));
   
   Gtk::Image *image48 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-dialog-error"), Gtk::IconSize(6)));
   Gtk::Label *labelAlert = Gtk::manage(new class Gtk::Label(_("The following must be corrected \n"
		"before you can continue")));
   Gtk::HBox *hbox6 = Gtk::manage(new class Gtk::HBox(false, 0));
   labelAlertText = Gtk::manage(new class Gtk::Label(_("PLace your text here")));
   
   Gtk::VBox *vbox5 = Gtk::manage(new class Gtk::VBox(false, 0));
   okbutton1->set_flags(Gtk::CAN_FOCUS);
   okbutton1->set_flags(Gtk::CAN_DEFAULT);
   okbutton1->set_relief(Gtk::RELIEF_NORMAL);
   dialogAlert->get_action_area()->property_layout_style().set_value(Gtk::BUTTONBOX_END);
   image48->set_alignment(0.5,0.5);
   image48->set_padding(0,0);
   labelAlert->set_alignment(0.5,0.5);
   labelAlert->set_padding(0,0);
   labelAlert->set_justify(Gtk::JUSTIFY_FILL);
   labelAlert->set_line_wrap(false);
   labelAlert->set_use_markup(false);
   labelAlert->set_selectable(false);
   hbox6->pack_start(*image48);
   hbox6->pack_start(*labelAlert, Gtk::PACK_SHRINK, 0);
   labelAlertText->set_alignment(0.5,0.5);
   labelAlertText->set_padding(0,0);
   labelAlertText->set_justify(Gtk::JUSTIFY_LEFT);
   labelAlertText->set_line_wrap(false);
   labelAlertText->set_use_markup(false);
   labelAlertText->set_selectable(false);
   vbox5->pack_start(*hbox6);
   vbox5->pack_start(*labelAlertText, Gtk::PACK_SHRINK, 0);
   dialogAlert->get_vbox()->set_homogeneous(false);
   dialogAlert->get_vbox()->set_spacing(0);
   dialogAlert->get_vbox()->pack_start(*vbox5);
   dialogAlert->set_title(_("Attention Required"));
   dialogAlert->set_modal(false);
   dialogAlert->property_window_position().set_value(Gtk::WIN_POS_NONE);
   dialogAlert->set_resizable(true);
   dialogAlert->property_destroy_with_parent().set_value(false);
   dialogAlert->set_has_separator(true);
   dialogAlert->add_action_widget(*okbutton1, -5);
   okbutton1->show();
   image48->show();
   labelAlert->show();
   hbox6->show();
   labelAlertText->show();
   vbox5->show();
   dialogAlert->show();
}

dialogAlert_glade::~dialogAlert_glade()
{  delete gmm_data;
}
