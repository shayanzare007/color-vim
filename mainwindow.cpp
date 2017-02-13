#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QColorDialog>
#include <QColor>
#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QFile file (ui->lineEdit_35->text() + ui->lineEdit_34->text() + ".vim");
    if (!file.open(QIODevice::ReadWrite)) {
        return;
    }

    // output to file :|||

    QTextStream out(&file);
    out << "\"Vim color file\n";
    out << "\"Genrated by Color Vim Application\n";
    out << "\nset background=dark\n";
    out << "highlight clear\n";
    out << "if exists(\"syntax_on\")\n"
           "  syntax reset\n"
           "\nendif\n\n";
    out << "set t_Co=256\n\n";
    out << "hi Cursor ctermfg=" + ui->lineEdit->text() + " ctermbg=" + ui->lineEdit_2->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_3->text() + " gui=NONE\n";
    out << "hi Visual ctermfg=" + ui->lineEdit_4->text() + " ctermbg=" + ui->lineEdit_6->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_5->text() + " gui=NONE\n";
    out << "hi CursorLine ctermfg=" + ui->lineEdit_7->text() + " ctermbg=" + ui->lineEdit_9->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_8->text() + " gui=NONE\n";
    out << "hi CursorColumn ctermfg=" + ui->lineEdit_11->text() + " ctermbg=" + ui->lineEdit_12->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_10->text() + " gui=NONE\n";
    out << "hi LineNr ctermfg=" + ui->lineEdit_16->text() + " ctermbg=" + ui->lineEdit_17->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_18->text() + " gui=NONE\n";
    out << "hi VertSplit ctermfg=" + ui->lineEdit_20->text() + " ctermbg=" + ui->lineEdit_21->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_19->text() + " gui=NONE\n";
    out << "hi MatchParen ctermfg=" + ui->lineEdit_24->text() + " ctermbg=" + ui->lineEdit_23->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_22->text() + " gui=NONE\n";
    out << "hi StatusLine ctermfg=" + ui->lineEdit_25->text() + " ctermbg=" + ui->lineEdit_26->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_27->text() + " gui=NONE\n";
    out << "hi Pmenu ctermfg=" + ui->lineEdit_33->text() + " ctermbg=" + ui->lineEdit_31->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_32->text() + " gui=NONE\n";
    out << "hi PmenuSel ctermfg=" + ui->lineEdit_68->text() + " ctermbg=" + ui->lineEdit_69->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_67->text() + " gui=NONE\n";
    out << "hi IncSearch ctermfg=" + ui->lineEdit_70->text() + " ctermbg=" + ui->lineEdit_71->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_72->text() + " gui=NONE\n";
    out << "hi Search ctermfg=" + ui->lineEdit_75->text() + " ctermbg=" + ui->lineEdit_73->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_74->text() + " gui=NONE\n";
    out << "hi Directory ctermfg=" + ui->lineEdit_77->text() + " ctermbg=" + ui->lineEdit_78->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_76->text() + " gui=NONE\n";
    out << "hi Folded ctermfg=" + ui->lineEdit_79->text() + " ctermbg=" + ui->lineEdit_80->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_81->text() + " gui=NONE\n";
    out << "hi SignColumn ctermfg=" + ui->lineEdit_83->text() + " ctermbg=" + ui->lineEdit_82->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_84->text() + " gui=NONE\n";
    out << "hi Normal ctermfg=" + ui->lineEdit_85->text() + " ctermbg=" + ui->lineEdit_86->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_87->text() + " gui=NONE\n";
    out << "hi Boolean ctermfg=" + ui->lineEdit_89->text() + " ctermbg=" + ui->lineEdit_88->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_90->text() + " gui=NONE\n";
    out << "hi Character ctermfg=" + ui->lineEdit_91->text() + " ctermbg=" + ui->lineEdit_92->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_93->text() + " gui=NONE\n";
    out << "hi Comment ctermfg=" + ui->lineEdit_96->text() + " ctermbg=" + ui->lineEdit_94->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_95->text() + " gui=NONE\n";
    out << "hi Conditional ctermfg=" + ui->lineEdit_98->text() + " ctermbg=" + ui->lineEdit_99->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_97->text() + " gui=NONE\n";
    out << "hi Define ctermfg=" + ui->lineEdit_100->text() + " ctermbg=" + ui->lineEdit_102->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_101->text() + " gui=NONE\n";
    out << "hi DiffAdd ctermfg=" + ui->lineEdit_104->text() + " ctermbg=" + ui->lineEdit_105->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_103->text() + " gui=NONE\n";
    out << "hi DiffDelete ctermfg=" + ui->lineEdit_106->text() + " ctermbg=" + ui->lineEdit_108->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_107->text() + " gui=NONE\n";
    out << "hi DiffChange ctermfg=" + ui->lineEdit_110->text() + " ctermbg=" + ui->lineEdit_109->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_111->text() + " gui=NONE\n";
    out << "hi DiffText ctermfg=" + ui->lineEdit_112->text() + " ctermbg=" + ui->lineEdit_114->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_113->text() + " gui=NONE\n";
    out << "hi ErrorMsg ctermfg=" + ui->lineEdit_117->text() + " ctermbg=" + ui->lineEdit_115->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_116->text() + " gui=NONE\n";
    out << "hi Float ctermfg=" + ui->lineEdit_119->text() + " ctermbg=" + ui->lineEdit_118->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_120->text() + " gui=NONE\n";
    out << "hi Function ctermfg=" + ui->lineEdit_121->text() + " ctermbg=" + ui->lineEdit_123->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_122->text() + " gui=NONE\n";
    out << "hi htmlSpecialChar ctermfg=" + ui->lineEdit_124->text() + " ctermbg=" + ui->lineEdit_125->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_126->text() + " gui=NONE\n";
    out << "hi Identifier ctermfg=" + ui->lineEdit_127->text() + " ctermbg=" + ui->lineEdit_129->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_128->text() + " gui=NONE\n";
    out << "hi Keyword ctermfg=" + ui->lineEdit_132->text() + " ctermbg=" + ui->lineEdit_130->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_131->text() + " gui=NONE\n";
    out << "hi Label ctermfg=" + ui->lineEdit_135->text() + " ctermbg=" + ui->lineEdit_134->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_133->text() + " gui=NONE\n";
    out << "hi NoneText ctermfg=" + ui->lineEdit_136->text() + " ctermbg=" + ui->lineEdit_137->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_138->text() + " gui=NONE\n";
    out << "hi Number ctermfg=" + ui->lineEdit_139->text() + " ctermbg=" + ui->lineEdit_141->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_140->text() + " gui=NONE\n";
    out << "hi Operator ctermfg=" + ui->lineEdit_142->text() + " ctermbg=" + ui->lineEdit_144->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_143->text() + " gui=NONE\n";
    out << "hi PreProc ctermfg=" + ui->lineEdit_145->text() + " ctermbg=" + ui->lineEdit_147->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_146->text() + " gui=NONE\n";
    out << "hi Special ctermfg=" + ui->lineEdit_148->text() + " ctermbg=" + ui->lineEdit_150->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_149->text() + " gui=NONE\n";
    out << "hi SpecialComment ctermfg=" + ui->lineEdit_151->text() + " ctermbg=" + ui->lineEdit_153->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_152->text() + " gui=NONE\n";
    out << "hi SpecialKey ctermfg=" + ui->lineEdit_154->text() + " ctermbg=" + ui->lineEdit_156->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_155->text() + " gui=NONE\n";
    out << "hi Statement ctermfg=" + ui->lineEdit_159->text() + " ctermbg=" + ui->lineEdit_157->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_158->text() + " gui=NONE\n";
    out << "hi StorageClass ctermfg=" + ui->lineEdit_162->text() + " ctermbg=" + ui->lineEdit_160->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_161->text() + " gui=NONE\n";
    out << "hi String ctermfg=" + ui->lineEdit_165->text() + " ctermbg=" + ui->lineEdit_163->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_164->text() + " gui=NONE\n";
    out << "hi Tag ctermfg=" + ui->lineEdit_168->text() + " ctermbg=" + ui->lineEdit_166->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_167->text() + " gui=NONE\n";
    out << "hi Title ctermfg=" + ui->lineEdit_171->text() + " ctermbg=" + ui->lineEdit_169->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_170->text() + " gui=NONE\n";
    out << "hi Todo ctermfg=" + ui->lineEdit_174->text() + " ctermbg=" + ui->lineEdit_172->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_173->text() + " gui=NONE\n";
    out << "hi Type ctermfg=" + ui->lineEdit_177->text() + " ctermbg=" + ui->lineEdit_175->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_176->text() + " gui=NONE\n";
    out << "hi UnderLine ctermfg=" + ui->lineEdit_180->text() + " ctermbg=" + ui->lineEdit_178->text() + " cterm=NONE" + " guifg=NONE" + " guibg=" + ui->lineEdit_179->text() + " gui=NONE\n";

}

void MainWindow::on_actionAbote_triggered()
{
    QMessageBox::about(this,"About :","\nColor Vim is a opensource project\nWith license GPL3\nCoded By ViRuS007\nEmail: virus007@protonmail.com");
}

//show color dialog for chosing color

void MainWindow::on_actionHex_Color_triggered()
{
    QColorDialog *colord = new QColorDialog();
    colord->showNormal();
}

void MainWindow::on_actionFlat_Color_triggered()
{
    QDesktopServices::openUrl(QUrl("http://www.flatuicolorpicker.com/category/all"));
}

// nothin  :|
void MainWindow::on_actionAbout_triggered(){

}
