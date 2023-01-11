#include <gtkmm.h>
#include "columns.h"
#include "databaseManager.h"

#pragma once

class listElements{
    public:
        listElements();
        virtual ~listElements();
        //void FillColumns(dataFrame& data, databaseManager& manager);
        Glib::RefPtr<Gtk::ListStore> GetListElements() const;
        void AddElement(std::string name, std::string price,
                    std::string maxQuantity, std::string quantity, std::string sales, 
                    std::string purchases, std::string descryption);

        void FillList(std::string text="");
    private:
        ModelColumns m_Columns;
        databaseManager database;
        Glib::RefPtr<Gtk::ListStore> m_refTreeModel;
};