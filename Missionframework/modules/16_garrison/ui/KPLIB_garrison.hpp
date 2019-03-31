/*
    KP Liberation Garrison Dialog

    File: KPLIB_garrison.hpp
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2019-03-19
    Last Update: 2019-03-31
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
        Dialog for the commander to manage blufor sector garrisons.
*/

class KPLIB_garrison {
    idd = 75804;
    movingEnable = 0;

    class controlsBackground {

        class KPLIB_DialogTitle: KPGUI_PRE_DialogTitle {
            text = "$STR_KPLIB_DIALOG_GARRISON_TITLE";
        };

        class KPLIB_DialogArea: KPGUI_PRE_DialogBackground {};

        class KPLIB_GarrisonListTitle: KPGUI_PRE_InlineTitle {
            text = "Garrisons";
            x = KP_GETCX(KP_X_VAL,KP_WIDTH_VAL,0,1);
            y = KP_GETCY(KP_Y_VAL,KP_HEIGHT_VAL,0,16);
            w = KP_GETW(KP_WIDTH_VAL,4);
            h = KP_GETH(KP_HEIGHT_VAL,16);
        };

        class KPLIB_GarrisonControlsTitle: KPGUI_PRE_InlineTitle {
            text = "Add Units";
            x = KP_GETCX(KP_X_VAL,KP_WIDTH_VAL,3,4);
            y = KP_GETCY(KP_Y_VAL,KP_HEIGHT_VAL,0,16);
            w = KP_GETW(KP_WIDTH_VAL,4);
            h = KP_GETH(KP_HEIGHT_VAL,16);
        };
    };

    class controls {
        class KPLIB_GarrisonList: KPGUI_PRE_Listbox {
            idc = 758041;
            onLBSelChanged = "_this call KPLIB_fnc_garrison_dialogSelectSector";
            x = KP_GETCX(KP_X_VAL,KP_WIDTH_VAL,0,1);
            y = KP_GETCY(KP_Y_VAL,KP_HEIGHT_VAL,1,16);
            w = KP_GETW(KP_WIDTH_VAL,4);
            h = KP_GETH(KP_HEIGHT_VAL,(16/15));
        };

        class KPLIB_GarrisonSectorName: KPGUI_PRE_InlineTitle {
            idc = 758042;
            x = KP_GETCX(KP_X_VAL,KP_WIDTH_VAL,1,4);
            y = KP_GETCY(KP_Y_VAL,KP_HEIGHT_VAL,0,16);
            w = KP_GETW(KP_WIDTH_VAL,2);
            h = KP_GETH(KP_HEIGHT_VAL,16);
        };

        class KPLIB_GarrisonInfantryLabel: KPGUI_PRE_Text {
            idc = 758043;
            text = "Infantry:";
            x = KP_GETCX(KP_X_VAL,KP_WIDTH_VAL,1,4);
            y = KP_GETCY(KP_Y_VAL,KP_HEIGHT_VAL,1,16);
            w = KP_GETW(KP_WIDTH_VAL,8);
            h = KP_GETH(KP_HEIGHT_VAL,16);
        };

        class KPLIB_GarrisonInfantryAmount: KPLIB_GarrisonInfantryLabel {
            idc = 758044;
            text = "";
            x = KP_GETCX(KP_X_VAL,KP_WIDTH_VAL,3,8);
        };

        class KPLIB_GarrisonLightLabel: KPLIB_GarrisonInfantryLabel {
            idc = 758045;
            text = "Light Vehicles:";
            y = KP_GETCY(KP_Y_VAL,KP_HEIGHT_VAL,2,16);
        };

        class KPLIB_GarrisonLightAmount: KPLIB_GarrisonLightLabel {
            idc = 758046;
            text = "";
            x = KP_GETCX(KP_X_VAL,KP_WIDTH_VAL,3,8);
        };

        class KPLIB_GarrisonHeavyLabel: KPLIB_GarrisonInfantryLabel {
            idc = 758047;
            text = "Heavy Vehicles:";
            y = KP_GETCY(KP_Y_VAL,KP_HEIGHT_VAL,3,16);
        };

        class KPLIB_GarrisonHeavyAmount: KPLIB_GarrisonHeavyLabel {
            idc = 758048;
            text = "";
            x = KP_GETCX(KP_X_VAL,KP_WIDTH_VAL,3,8);
        };

        class KPLIB_GarrisonMap: KPGUI_PRE_MapControl {
            idc = 758049;
            x = KP_GETCX(KP_X_VAL,KP_WIDTH_VAL,1,4);
            y = KP_GETCY(KP_Y_VAL,KP_HEIGHT_VAL,1,2);
            w = KP_GETW(KP_WIDTH_VAL,2);
            h = KP_GETH(KP_HEIGHT_VAL,2);
        };

        class KPLIB_DialogCross: KPGUI_PRE_DialogCross {};
    };
};