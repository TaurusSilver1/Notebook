//---------------------------------------------------------------------------

#include <vcl.h>
#include <clipbrd.hpp>
#pragma hdrstop

#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Action2Execute(TObject *Sender)
{
	 Memo1->Color = clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Action3Execute(TObject *Sender)
{
	Memo1->Color = clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Action4Execute(TObject *Sender)
{
	Memo1->Color = clGreen;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormatRichEditBold1Execute(TObject *Sender)
{
	if (FormatRichEditBold1->Checked) {
		Memo1->Font->Style = Memo1->Font->Style << fsBold;
	}
	else
		Memo1->Font->Style = Memo1->Font->Style >> fsBold;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormatRichEditItalic1Execute(TObject *Sender)
{
	if (FormatRichEditItalic1->Checked) {
		Memo1->Font->Style = Memo1->Font->Style << fsItalic;
	}
	else
		Memo1->Font->Style = Memo1->Font->Style >> fsItalic;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormatRichEditUnderline1Execute(TObject *Sender)
{
	if (FormatRichEditUnderline1->Checked) {
		Memo1->Font->Style = Memo1->Font->Style << fsUnderline;
	}
	else
		Memo1->Font->Style = Memo1->Font->Style >> fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormatRichEditStrikeOut1Execute(TObject *Sender)
{
	if (FormatRichEditStrikeOut1->Checked) {
		Memo1->Font->Style = Memo1->Font->Style << fsStrikeOut;
	}
	else
		Memo1->Font->Style = Memo1->Font->Style >> fsStrikeOut;
}
//---------------------------------------------------------------------------

