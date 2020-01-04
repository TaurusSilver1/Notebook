//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ImgList.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ExtActns.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TActionList *ActionList1;
	TFileOpen *FileOpen1;
	TFileSaveAs *FileSaveAs1;
	TFileExit *FileExit1;
	TEditCut *EditCut1;
	TEditCopy *EditCopy1;
	TEditPaste *EditPaste1;
	TEditDelete *EditDelete1;
	TImageList *ImageList1;
	TAction *Action2;
	TAction *Action3;
	TAction *Action4;
	TRichEditBold *FormatRichEditBold1;
	TRichEditItalic *FormatRichEditItalic1;
	TRichEditUnderline *FormatRichEditUnderline1;
	TRichEditStrikeOut *FormatRichEditStrikeOut1;
	TToolBar *ToolBar1;
	TToolButton *ToolButton1;
	TToolButton *ToolButton2;
	TToolButton *ToolButton3;
	TToolButton *ToolButton4;
	TToolButton *ToolButton5;
	TToolButton *ToolButton6;
	TToolButton *ToolButton7;
	TToolButton *ToolButton8;
	TToolButton *ToolButton9;
	TToolButton *ToolButton10;
	TToolButton *ToolButton11;
	TToolButton *ToolButton12;
	TToolButton *ToolButton13;
	TToolButton *ToolButton14;
	TToolButton *ToolButton15;
	TToolButton *ToolButton16;
	TToolButton *ToolButton17;
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *Open1;
	TMenuItem *Saveas1;
	TMenuItem *N1;
	TMenuItem *exit1;
	TMenuItem *Edit1;
	TMenuItem *cut1;
	TMenuItem *copy1;
	TMenuItem *paste1;
	TMenuItem *delete1;
	TMenuItem *color1;
	TMenuItem *white1;
	TMenuItem *yellow1;
	TMenuItem *green1;
	TMenuItem *N2;
	TMenuItem *bold1;
	TMenuItem *italic1;
	TMenuItem *under1;
	TMenuItem *strike1;
	TMenuItem *N3;
	void __fastcall Action2Execute(TObject *Sender);
	void __fastcall Action3Execute(TObject *Sender);
	void __fastcall Action4Execute(TObject *Sender);
	void __fastcall FormatRichEditBold1Execute(TObject *Sender);
	void __fastcall FormatRichEditItalic1Execute(TObject *Sender);
	void __fastcall FormatRichEditUnderline1Execute(TObject *Sender);
	void __fastcall FormatRichEditStrikeOut1Execute(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
