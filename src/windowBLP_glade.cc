// generated 2007/3/31 15:15:50 MDT by barcjr@Sirius.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/barcjr/BLProot/blp.glade
// for gtk 2.8.20 and gtkmm 2.8.8
//
// Please modify the corresponding derived classes in ./src/windowBLP.cc


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
#include "windowBLP_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>
#include <gtkmm/image.h>
#include <gtkmm/imagemenuitem.h>
#include <gtk/gtkimagemenuitem.h>
#include <gtkmm/menuitem.h>
#include <gtkmm/menu.h>
#include <gtkmm/menubar.h>
#include <gtkmm/label.h>
#include <gtkmm/table.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/box.h>
#include <gtkmm/alignment.h>
#include <gtkmm/button.h>
#include <gtkmm/buttonbox.h>

windowBLP_glade::windowBLP_glade(
) : Gtk::Window(Gtk::WINDOW_TOPLEVEL)
{  
   
   Gtk::Window *windowBLP = this;
   gmm_data = new GlademmData(get_accel_group());
   
   Gtk::Image *image91 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-new"), Gtk::IconSize(1)));
   Gtk::ImageMenuItem *new_operator = NULL;
   Gtk::MenuItem *separatormenuitem2 = NULL;
   Gtk::ImageMenuItem *imagemenuitemQuit = NULL;
   Gtk::Menu *menuitemAdmin_menu = Gtk::manage(new class Gtk::Menu());
   Gtk::MenuItem *menuitemAdmin = NULL;
   Gtk::Image *image92 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-dialog-warning"), Gtk::IconSize(1)));
   Gtk::ImageMenuItem *qso = NULL;
   Gtk::Image *image93 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-edit"), Gtk::IconSize(1)));
   Gtk::ImageMenuItem *operator_name = NULL;
   Gtk::Image *image94 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-justify-fill"), Gtk::IconSize(1)));
   Gtk::ImageMenuItem *station = NULL;
   Gtk::Menu *menuitem12_menu = Gtk::manage(new class Gtk::Menu());
   Gtk::MenuItem *menuitem12 = NULL;
   Gtk::Image *image95 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-go-back"), Gtk::IconSize(1)));
   Gtk::ImageMenuItem *history = NULL;
   Gtk::Image *image96 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-dnd"), Gtk::IconSize(1)));
   Gtk::ImageMenuItem *score = NULL;
   Gtk::Image *image97 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-justify-right"), Gtk::IconSize(1)));
   Gtk::ImageMenuItem *reports = NULL;
   Gtk::Menu *menuitem13_menu = Gtk::manage(new class Gtk::Menu());
   Gtk::MenuItem *menuitem13 = NULL;
   Gtk::ImageMenuItem *help = NULL;
   Gtk::ImageMenuItem *menuitemAbout = NULL;
   Gtk::Menu *menuitem14_menu = Gtk::manage(new class Gtk::Menu());
   Gtk::MenuItem *menuitem14 = NULL;
   Gtk::MenuBar *menubar2BLP = Gtk::manage(new class Gtk::MenuBar());
   Gtk::Label *label2 = Gtk::manage(new class Gtk::Label(_("Rado Operator")));
   Gtk::Label *label3 = Gtk::manage(new class Gtk::Label(_("Logging Operator")));
   Gtk::Label *label4 = Gtk::manage(new class Gtk::Label(_("Band and Mode")));
   comboboxLogger = Gtk::manage(new class Gtk::ComboBox());
   comboboxBandMode = Gtk::manage(new class Gtk::ComboBox());
   comboboxOperator = Gtk::manage(new class Gtk::ComboBox());
   
   Gtk::Table *table2 = Gtk::manage(new class Gtk::Table(2, 2, false));
   Gtk::Label *label5 = Gtk::manage(new class Gtk::Label(_("His Call Sign")));
   Gtk::Label *label6 = Gtk::manage(new class Gtk::Label(_("Class")));
   Gtk::Label *label7 = Gtk::manage(new class Gtk::Label(_("Section")));
   entryCall = Gtk::manage(new class Gtk::Entry());
   entryConClass = Gtk::manage(new class Gtk::Entry());
   entrySection = Gtk::manage(new class Gtk::Entry());
   treeviewCalls = Gtk::manage(new class Gtk::TreeView());
   
   Gtk::ScrolledWindow *scrolledwindowCalls = Gtk::manage(new class Gtk::ScrolledWindow());
   treeviewSections = Gtk::manage(new class Gtk::TreeView());
   
   Gtk::ScrolledWindow *scrolledwindowSections = Gtk::manage(new class Gtk::ScrolledWindow());
   Gtk::Table *table3 = Gtk::manage(new class Gtk::Table(2, 2, false));
   Gtk::Image *image2 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-cancel"), Gtk::IconSize(4)));
   Gtk::Label *label9 = Gtk::manage(new class Gtk::Label(_("Clear QSO")));
   Gtk::HBox *hbox3 = Gtk::manage(new class Gtk::HBox(false, 2));
   Gtk::Alignment *alignment2 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 0, 0));
   Gtk::Button *button1 = Gtk::manage(new class Gtk::Button());
   Gtk::Image *image3 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-add"), Gtk::IconSize(4)));
   Gtk::Label *label10 = Gtk::manage(new class Gtk::Label(_("Save QSO")));
   Gtk::HBox *hbox4 = Gtk::manage(new class Gtk::HBox(false, 2));
   Gtk::Alignment *alignment3 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 0, 0));
   Gtk::Button *buttonSaveQSO = Gtk::manage(new class Gtk::Button());
   Gtk::Image *image4 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-copy"), Gtk::IconSize(4)));
   Gtk::Label *label11 = Gtk::manage(new class Gtk::Label(_("Keep Info")));
   Gtk::HBox *hbox5 = Gtk::manage(new class Gtk::HBox(false, 2));
   Gtk::Alignment *alignment4 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 0, 0));
   Gtk::Button *button3 = Gtk::manage(new class Gtk::Button());
   Gtk::HButtonBox *hbuttonbox1 = Gtk::manage(new class Gtk::HButtonBox(Gtk::BUTTONBOX_DEFAULT_STYLE, 50));
   statusbarBLP = Gtk::manage(new class Gtk::Statusbar());
   
   Gtk::VBox *vbox2 = Gtk::manage(new class Gtk::VBox(false, 0));
   
   menuitemAdmin_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem(_("New _Operator"), *image91));
   new_operator = (Gtk::ImageMenuItem *)&menuitemAdmin_menu->items().back();
   
   menuitemAdmin_menu->items().push_back(Gtk::Menu_Helpers::SeparatorElem());
   separatormenuitem2 = (Gtk::MenuItem *)&menuitemAdmin_menu->items().back();
   
   menuitemAdmin_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-quit")));
   imagemenuitemQuit = (Gtk::ImageMenuItem *)&menuitemAdmin_menu->items().back();
   
   menuitem12_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem(_("_QSO"), *image92));
   qso = (Gtk::ImageMenuItem *)&menuitem12_menu->items().back();
   
   menuitem12_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem(_("O_perator Name"), *image93));
   operator_name = (Gtk::ImageMenuItem *)&menuitem12_menu->items().back();
   
   menuitem12_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem(_("_Station"), *image94));
   station = (Gtk::ImageMenuItem *)&menuitem12_menu->items().back();
   
   menuitem13_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem(_("_History"), *image95));
   history = (Gtk::ImageMenuItem *)&menuitem13_menu->items().back();
   
   menuitem13_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem(_("S_core"), *image96));
   score = (Gtk::ImageMenuItem *)&menuitem13_menu->items().back();
   
   menuitem13_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem(_("_Reports"), *image97));
   reports = (Gtk::ImageMenuItem *)&menuitem13_menu->items().back();
   
   menuitem14_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-help")));
   help = (Gtk::ImageMenuItem *)&menuitem14_menu->items().back();
   
   menuitem14_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-about")));
   menuitemAbout = (Gtk::ImageMenuItem *)&menuitem14_menu->items().back();
   
   menubar2BLP->items().push_back(Gtk::Menu_Helpers::MenuElem(_("_Administration"), *menuitemAdmin_menu));
   menuitemAdmin = (Gtk::MenuItem *)&menubar2BLP->items().back();
   
   menubar2BLP->items().push_back(Gtk::Menu_Helpers::MenuElem(_("_Edit"), *menuitem12_menu));
   menuitem12 = (Gtk::MenuItem *)&menubar2BLP->items().back();
   
   menubar2BLP->items().push_back(Gtk::Menu_Helpers::MenuElem(_("_View"), *menuitem13_menu));
   menuitem13 = (Gtk::MenuItem *)&menubar2BLP->items().back();
   
   menubar2BLP->items().push_back(Gtk::Menu_Helpers::MenuElem(_("_Help"), *menuitem14_menu));
   menuitem14 = (Gtk::MenuItem *)&menubar2BLP->items().back();
   image91->set_alignment(0.5,0.5);
   image91->set_padding(0,0);
   image92->set_alignment(0.5,0.5);
   image92->set_padding(0,0);
   image93->set_alignment(0.5,0.5);
   image93->set_padding(0,0);
   image94->set_alignment(0.5,0.5);
   image94->set_padding(0,0);
   image95->set_alignment(0.5,0.5);
   image95->set_padding(0,0);
   image96->set_alignment(0.5,0.5);
   image96->set_padding(0,0);
   image97->set_alignment(0.5,0.5);
   image97->set_padding(0,0);
   label2->set_alignment(0,0.5);
   label2->set_padding(0,0);
   label2->set_justify(Gtk::JUSTIFY_LEFT);
   label2->set_line_wrap(false);
   label2->set_use_markup(false);
   label2->set_selectable(false);
   label3->set_alignment(0,0.5);
   label3->set_padding(0,0);
   label3->set_justify(Gtk::JUSTIFY_LEFT);
   label3->set_line_wrap(false);
   label3->set_use_markup(false);
   label3->set_selectable(false);
   label4->set_alignment(0,0.5);
   label4->set_padding(0,0);
   label4->set_justify(Gtk::JUSTIFY_LEFT);
   label4->set_line_wrap(false);
   label4->set_use_markup(false);
   label4->set_selectable(false);
   table2->set_border_width(4);
   table2->set_row_spacings(4);
   table2->set_col_spacings(4);
   table2->attach(*label2, 0, 1, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table2->attach(*label3, 0, 1, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table2->attach(*label4, 0, 1, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table2->attach(*comboboxLogger, 1, 2, 1, 2, Gtk::FILL, Gtk::FILL, 0, 0);
   table2->attach(*comboboxBandMode, 1, 2, 2, 3, Gtk::FILL, Gtk::FILL, 0, 0);
   table2->attach(*comboboxOperator, 1, 2, 0, 1, Gtk::FILL, Gtk::FILL, 0, 0);
   label5->set_alignment(0,0.5);
   label5->set_padding(0,0);
   label5->set_justify(Gtk::JUSTIFY_CENTER);
   label5->set_line_wrap(false);
   label5->set_use_markup(false);
   label5->set_selectable(false);
   label6->set_alignment(0,0.5);
   label6->set_padding(0,0);
   label6->set_justify(Gtk::JUSTIFY_LEFT);
   label6->set_line_wrap(false);
   label6->set_use_markup(false);
   label6->set_selectable(false);
   label7->set_alignment(0,0.5);
   label7->set_padding(0,0);
   label7->set_justify(Gtk::JUSTIFY_LEFT);
   label7->set_line_wrap(false);
   label7->set_use_markup(false);
   label7->set_selectable(false);
   entryCall->set_flags(Gtk::CAN_FOCUS);
   entryCall->set_visibility(true);
   entryCall->set_editable(true);
   entryCall->set_max_length(0);
   entryCall->set_text(_(""));
   entryCall->set_has_frame(true);
   entryCall->set_activates_default(true);
   entryConClass->set_flags(Gtk::CAN_FOCUS);
   entryConClass->set_visibility(true);
   entryConClass->set_editable(true);
   entryConClass->set_max_length(0);
   entryConClass->set_text(_(""));
   entryConClass->set_has_frame(true);
   entryConClass->set_activates_default(true);
   entrySection->set_flags(Gtk::CAN_FOCUS);
   entrySection->set_visibility(true);
   entrySection->set_editable(true);
   entrySection->set_max_length(0);
   entrySection->set_text(_(""));
   entrySection->set_has_frame(true);
   entrySection->set_activates_default(true);
   treeviewCalls->set_flags(Gtk::CAN_FOCUS);
   treeviewCalls->set_headers_visible(false);
   treeviewCalls->set_rules_hint(false);
   treeviewCalls->set_reorderable(false);
   treeviewCalls->set_enable_search(false);
   scrolledwindowCalls->set_flags(Gtk::CAN_FOCUS);
   scrolledwindowCalls->set_shadow_type(Gtk::SHADOW_IN);
   scrolledwindowCalls->set_policy(Gtk::POLICY_NEVER, Gtk::POLICY_AUTOMATIC);
   scrolledwindowCalls->property_window_placement().set_value(Gtk::CORNER_TOP_LEFT);
   scrolledwindowCalls->add(*treeviewCalls);
   treeviewSections->set_flags(Gtk::CAN_FOCUS);
   treeviewSections->set_headers_visible(false);
   treeviewSections->set_rules_hint(false);
   treeviewSections->set_reorderable(false);
   treeviewSections->set_enable_search(false);
   scrolledwindowSections->set_flags(Gtk::CAN_FOCUS);
   scrolledwindowSections->set_shadow_type(Gtk::SHADOW_IN);
   scrolledwindowSections->set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
   scrolledwindowSections->property_window_placement().set_value(Gtk::CORNER_TOP_LEFT);
   scrolledwindowSections->add(*treeviewSections);
   table3->set_border_width(4);
   table3->set_row_spacings(4);
   table3->set_col_spacings(4);
   table3->attach(*label5, 0, 1, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*label6, 1, 2, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*label7, 2, 3, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*entryCall, 0, 1, 1, 2, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*entryConClass, 1, 2, 1, 2, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*entrySection, 2, 3, 1, 2, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*scrolledwindowCalls, 0, 1, 2, 3, Gtk::FILL, Gtk::EXPAND|Gtk::FILL, 0, 0);
   table3->attach(*scrolledwindowSections, 2, 3, 2, 3, Gtk::FILL, Gtk::FILL, 0, 0);
   image2->set_alignment(0.5,0.5);
   image2->set_padding(0,0);
   label9->set_alignment(0.5,0.5);
   label9->set_padding(0,0);
   label9->set_justify(Gtk::JUSTIFY_LEFT);
   label9->set_line_wrap(false);
   label9->set_use_markup(false);
   label9->set_selectable(false);
   hbox3->pack_start(*image2, Gtk::PACK_SHRINK, 0);
   hbox3->pack_start(*label9, Gtk::PACK_SHRINK, 0);
   alignment2->add(*hbox3);
   button1->set_flags(Gtk::CAN_FOCUS);
   button1->set_flags(Gtk::CAN_DEFAULT);
   button1->add_accelerator("clicked", gmm_data->getAccelGroup(), GDK_Escape, Gdk::ModifierType(0), Gtk::ACCEL_VISIBLE);
   button1->set_relief(Gtk::RELIEF_NORMAL);
   button1->add(*alignment2);
   image3->set_alignment(0.5,0.5);
   image3->set_padding(0,0);
   label10->set_alignment(0.5,0.5);
   label10->set_padding(0,0);
   label10->set_justify(Gtk::JUSTIFY_LEFT);
   label10->set_line_wrap(false);
   label10->set_use_markup(false);
   label10->set_selectable(false);
   hbox4->pack_start(*image3, Gtk::PACK_SHRINK, 0);
   hbox4->pack_start(*label10, Gtk::PACK_SHRINK, 0);
   alignment3->add(*hbox4);
   buttonSaveQSO->set_size_request(-1,45);
   buttonSaveQSO->set_flags(Gtk::CAN_FOCUS);
   buttonSaveQSO->set_flags(Gtk::CAN_DEFAULT);
   buttonSaveQSO->add_accelerator("clicked", gmm_data->getAccelGroup(), GDK_Return, Gdk::ModifierType(0), Gtk::ACCEL_VISIBLE);
   buttonSaveQSO->set_relief(Gtk::RELIEF_NORMAL);
   buttonSaveQSO->add(*alignment3);
   image4->set_alignment(0.5,0.5);
   image4->set_padding(0,0);
   label11->set_alignment(0.5,0.5);
   label11->set_padding(0,0);
   label11->set_justify(Gtk::JUSTIFY_LEFT);
   label11->set_line_wrap(false);
   label11->set_use_markup(false);
   label11->set_selectable(false);
   hbox5->pack_start(*image4, Gtk::PACK_SHRINK, 0);
   hbox5->pack_start(*label11, Gtk::PACK_SHRINK, 0);
   alignment4->add(*hbox5);
   button3->set_flags(Gtk::CAN_FOCUS);
   button3->set_flags(Gtk::CAN_DEFAULT);
   button3->set_relief(Gtk::RELIEF_NORMAL);
   button3->add(*alignment4);
   hbuttonbox1->set_border_width(4);
   hbuttonbox1->pack_start(*button1);
   hbuttonbox1->pack_start(*buttonSaveQSO);
   hbuttonbox1->pack_start(*button3);
   vbox2->pack_start(*menubar2BLP, Gtk::PACK_SHRINK, 0);
   vbox2->pack_start(*table2, Gtk::PACK_SHRINK, 0);
   vbox2->pack_start(*table3);
   vbox2->pack_start(*hbuttonbox1, Gtk::PACK_SHRINK, 0);
   vbox2->pack_start(*statusbarBLP, Gtk::PACK_SHRINK, 0);
   windowBLP->set_title(_("BARC Jr Contest Logging"));
   windowBLP->set_modal(false);
   windowBLP->property_window_position().set_value(Gtk::WIN_POS_NONE);
   windowBLP->set_resizable(true);
   windowBLP->property_destroy_with_parent().set_value(false);
   windowBLP->add(*vbox2);
   image91->show();
   new_operator->show();
   separatormenuitem2->show();
   imagemenuitemQuit->show();
   menuitemAdmin->show();
   image92->show();
   qso->show();
   image93->show();
   operator_name->show();
   image94->show();
   station->show();
   menuitem12->show();
   image95->show();
   history->show();
   image96->show();
   score->show();
   image97->show();
   reports->show();
   menuitem13->show();
   help->show();
   menuitemAbout->show();
   menuitem14->show();
   menubar2BLP->show();
   label2->show();
   label3->show();
   label4->show();
   comboboxLogger->show();
   comboboxBandMode->show();
   comboboxOperator->show();
   table2->show();
   label5->show();
   label6->show();
   label7->show();
   entryCall->show();
   entryConClass->show();
   entrySection->show();
   treeviewCalls->show();
   scrolledwindowCalls->show();
   treeviewSections->show();
   scrolledwindowSections->show();
   table3->show();
   image2->show();
   label9->show();
   hbox3->show();
   alignment2->show();
   button1->show();
   image3->show();
   label10->show();
   hbox4->show();
   alignment3->show();
   buttonSaveQSO->show();
   image4->show();
   label11->show();
   hbox5->show();
   alignment4->show();
   button3->show();
   hbuttonbox1->show();
   statusbarBLP->show();
   vbox2->show();
   windowBLP->show();
   new_operator->signal_activate().connect(SigC::slot(*this, &windowBLP_glade::on_new_operator_activate), false);
   imagemenuitemQuit->signal_activate().connect(SigC::slot(*this, &windowBLP_glade::on_quit_activate), false);
   qso->signal_activate().connect(SigC::slot(*this, &windowBLP_glade::on_qso_activate), false);
   operator_name->signal_activate().connect(SigC::slot(*this, &windowBLP_glade::on_operator_name_activate), false);
   station->signal_activate().connect(SigC::slot(*this, &windowBLP_glade::on_station_activate), false);
   history->signal_activate().connect(SigC::slot(*this, &windowBLP_glade::on_history_activate), false);
   score->signal_activate().connect(SigC::slot(*this, &windowBLP_glade::on_score_activate), false);
   reports->signal_activate().connect(SigC::slot(*this, &windowBLP_glade::on_reports_activate), false);
   help->signal_activate().connect(SigC::slot(*this, &windowBLP_glade::on_help_activate), false);
   menuitemAbout->signal_activate().connect(SigC::slot(*this, &windowBLP_glade::on_about1_activate), false);
   comboboxLogger->signal_changed().connect(SigC::slot(*this, &windowBLP_glade::on_comboboxLogger_changed), false);
   comboboxBandMode->signal_changed().connect(SigC::slot(*this, &windowBLP_glade::on_comboboxBandMode_changed), false);
   comboboxOperator->signal_changed().connect(SigC::slot(*this, &windowBLP_glade::on_comboboxOperator_changed), false);
   entryCall->signal_changed().connect(SigC::slot(*this, &windowBLP_glade::on_entryCall_changed), false);
   entryCall->signal_focus_out_event().connect(SigC::slot(*this, &windowBLP_glade::on_entryCall_focus_out_event), false);
   entryConClass->signal_focus_out_event().connect(SigC::slot(*this, &windowBLP_glade::on_entryConClass_focus_out_event), false);
   entrySection->signal_changed().connect(SigC::slot(*this, &windowBLP_glade::on_entrySection_changed), false);
   entrySection->signal_focus_out_event().connect(SigC::slot(*this, &windowBLP_glade::on_entrySection_focus_out_event), false);
   treeviewCalls->signal_row_activated().connect(SigC::slot(*this, &windowBLP_glade::on_treeviewCalls_row_activated), false);
   treeviewSections->signal_row_activated().connect(SigC::slot(*this, &windowBLP_glade::on_treeviewSections_row_activated), false);
   button1->signal_clicked().connect(SigC::slot(*this, &windowBLP_glade::on_ClearQSO), false);
   buttonSaveQSO->signal_clicked().connect(SigC::slot(*this, &windowBLP_glade::on_SaveQSO), false);
}

windowBLP_glade::~windowBLP_glade()
{  delete gmm_data;
}
