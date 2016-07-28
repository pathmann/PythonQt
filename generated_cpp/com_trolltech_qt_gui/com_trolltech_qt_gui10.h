#include <PythonQt.h>
#include <QObject>
#include <QTextCursor>
#include <QTextEdit>
#include <QTextFrame>
#include <QTextLayout>
#include <QTextOption>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qdrawutil.h>
#include <qevent.h>
#include <qfont.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qline.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qtexttable.h>
#include <qtoolbar.h>
#include <qtoolbox.h>
#include <qtoolbutton.h>
#include <qtooltip.h>
#include <qtouchdevice.h>
#include <qtransform.h>
#include <qvector.h>
#include <qvector2d.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QTextEdit__ExtraSelection : public QTextEdit::ExtraSelection
{
public:
    PythonQtShell_QTextEdit__ExtraSelection():QTextEdit::ExtraSelection(),_wrapper(NULL) {};

   ~PythonQtShell_QTextEdit__ExtraSelection();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextEdit__ExtraSelection : public QObject
{ Q_OBJECT
public:
public slots:
QTextEdit::ExtraSelection* new_QTextEdit__ExtraSelection();
QTextEdit::ExtraSelection* new_QTextEdit__ExtraSelection(const QTextEdit::ExtraSelection& other) {
PythonQtShell_QTextEdit__ExtraSelection* a = new PythonQtShell_QTextEdit__ExtraSelection();
*((QTextEdit::ExtraSelection*)a) = other;
return a; }
void delete_QTextEdit__ExtraSelection(QTextEdit::ExtraSelection* obj) { delete obj; } 
void py_set_cursor(QTextEdit::ExtraSelection* theWrappedObject, QTextCursor  cursor){ theWrappedObject->cursor = cursor; }
QTextCursor  py_get_cursor(QTextEdit::ExtraSelection* theWrappedObject){ return theWrappedObject->cursor; }
void py_set_format(QTextEdit::ExtraSelection* theWrappedObject, QTextCharFormat  format){ theWrappedObject->format = format; }
QTextCharFormat  py_get_format(QTextEdit::ExtraSelection* theWrappedObject){ return theWrappedObject->format; }
};





class PythonQtWrapper_QTextFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextFragment* new_QTextFragment();
QTextFragment* new_QTextFragment(const QTextFragment&  o);
void delete_QTextFragment(QTextFragment* obj) { delete obj; } 
   QTextCharFormat  charFormat(QTextFragment* theWrappedObject) const;
   int  charFormatIndex(QTextFragment* theWrappedObject) const;
   bool  contains(QTextFragment* theWrappedObject, int  position) const;
   QList<QGlyphRun >  glyphRuns(QTextFragment* theWrappedObject, int  from = -1, int  length = -1) const;
   bool  isValid(QTextFragment* theWrappedObject) const;
   int  length(QTextFragment* theWrappedObject) const;
   bool  __ne__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  __lt__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  __eq__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   int  position(QTextFragment* theWrappedObject) const;
   QString  text(QTextFragment* theWrappedObject) const;
};





class PythonQtShell_QTextFrame : public QTextFrame
{
public:
    PythonQtShell_QTextFrame(QTextDocument*  doc):QTextFrame(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextFrame();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextFrame : public QObject
{ Q_OBJECT
public:
public slots:
QTextFrame* new_QTextFrame(QTextDocument*  doc);
void delete_QTextFrame(QTextFrame* obj) { delete obj; } 
   QTextFrame::iterator  begin(QTextFrame* theWrappedObject) const;
   QList<QTextFrame* >  childFrames(QTextFrame* theWrappedObject) const;
   QTextFrame::iterator  end(QTextFrame* theWrappedObject) const;
   QTextCursor  firstCursorPosition(QTextFrame* theWrappedObject) const;
   int  firstPosition(QTextFrame* theWrappedObject) const;
   QTextFrameFormat  frameFormat(QTextFrame* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextFrame* theWrappedObject) const;
   int  lastPosition(QTextFrame* theWrappedObject) const;
   QTextFrame*  parentFrame(QTextFrame* theWrappedObject) const;
   void setFrameFormat(QTextFrame* theWrappedObject, const QTextFrameFormat&  format);
};





class PythonQtShell_QTextFrameFormat : public QTextFrameFormat
{
public:
    PythonQtShell_QTextFrameFormat():QTextFrameFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextFrameFormat(const QTextFormat&  fmt):QTextFrameFormat(fmt),_wrapper(NULL) {};

   ~PythonQtShell_QTextFrameFormat();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextFrameFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BorderStyle Position )
enum BorderStyle{
  BorderStyle_None = QTextFrameFormat::BorderStyle_None,   BorderStyle_Dotted = QTextFrameFormat::BorderStyle_Dotted,   BorderStyle_Dashed = QTextFrameFormat::BorderStyle_Dashed,   BorderStyle_Solid = QTextFrameFormat::BorderStyle_Solid,   BorderStyle_Double = QTextFrameFormat::BorderStyle_Double,   BorderStyle_DotDash = QTextFrameFormat::BorderStyle_DotDash,   BorderStyle_DotDotDash = QTextFrameFormat::BorderStyle_DotDotDash,   BorderStyle_Groove = QTextFrameFormat::BorderStyle_Groove,   BorderStyle_Ridge = QTextFrameFormat::BorderStyle_Ridge,   BorderStyle_Inset = QTextFrameFormat::BorderStyle_Inset,   BorderStyle_Outset = QTextFrameFormat::BorderStyle_Outset};
enum Position{
  InFlow = QTextFrameFormat::InFlow,   FloatLeft = QTextFrameFormat::FloatLeft,   FloatRight = QTextFrameFormat::FloatRight};
public slots:
QTextFrameFormat* new_QTextFrameFormat();
QTextFrameFormat* new_QTextFrameFormat(const QTextFormat&  fmt);
QTextFrameFormat* new_QTextFrameFormat(const QTextFrameFormat& other) {
PythonQtShell_QTextFrameFormat* a = new PythonQtShell_QTextFrameFormat();
*((QTextFrameFormat*)a) = other;
return a; }
void delete_QTextFrameFormat(QTextFrameFormat* obj) { delete obj; } 
   qreal  border(QTextFrameFormat* theWrappedObject) const;
   QBrush  borderBrush(QTextFrameFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  borderStyle(QTextFrameFormat* theWrappedObject) const;
   qreal  bottomMargin(QTextFrameFormat* theWrappedObject) const;
   QTextLength  height(QTextFrameFormat* theWrappedObject) const;
   bool  isValid(QTextFrameFormat* theWrappedObject) const;
   qreal  leftMargin(QTextFrameFormat* theWrappedObject) const;
   qreal  margin(QTextFrameFormat* theWrappedObject) const;
   qreal  padding(QTextFrameFormat* theWrappedObject) const;
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextFrameFormat* theWrappedObject) const;
   QTextFrameFormat::Position  position(QTextFrameFormat* theWrappedObject) const;
   qreal  rightMargin(QTextFrameFormat* theWrappedObject) const;
   void setBorder(QTextFrameFormat* theWrappedObject, qreal  border);
   void setBorderBrush(QTextFrameFormat* theWrappedObject, const QBrush&  brush);
   void setBorderStyle(QTextFrameFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setBottomMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setHeight(QTextFrameFormat* theWrappedObject, const QTextLength&  height);
   void setHeight(QTextFrameFormat* theWrappedObject, qreal  height);
   void setLeftMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setPadding(QTextFrameFormat* theWrappedObject, qreal  padding);
   void setPageBreakPolicy(QTextFrameFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   void setPosition(QTextFrameFormat* theWrappedObject, QTextFrameFormat::Position  f);
   void setRightMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setTopMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setWidth(QTextFrameFormat* theWrappedObject, const QTextLength&  length);
   void setWidth(QTextFrameFormat* theWrappedObject, qreal  width);
   qreal  topMargin(QTextFrameFormat* theWrappedObject) const;
   QTextLength  width(QTextFrameFormat* theWrappedObject) const;
};





class PythonQtShell_QTextImageFormat : public QTextImageFormat
{
public:
    PythonQtShell_QTextImageFormat():QTextImageFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextImageFormat(const QTextFormat&  format):QTextImageFormat(format),_wrapper(NULL) {};

   ~PythonQtShell_QTextImageFormat();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextImageFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextImageFormat* new_QTextImageFormat();
QTextImageFormat* new_QTextImageFormat(const QTextFormat&  format);
QTextImageFormat* new_QTextImageFormat(const QTextImageFormat& other) {
PythonQtShell_QTextImageFormat* a = new PythonQtShell_QTextImageFormat();
*((QTextImageFormat*)a) = other;
return a; }
void delete_QTextImageFormat(QTextImageFormat* obj) { delete obj; } 
   qreal  height(QTextImageFormat* theWrappedObject) const;
   bool  isValid(QTextImageFormat* theWrappedObject) const;
   QString  name(QTextImageFormat* theWrappedObject) const;
   void setHeight(QTextImageFormat* theWrappedObject, qreal  height);
   void setName(QTextImageFormat* theWrappedObject, const QString&  name);
   void setWidth(QTextImageFormat* theWrappedObject, qreal  width);
   qreal  width(QTextImageFormat* theWrappedObject) const;
};





class PythonQtWrapper_QTextInlineObject : public QObject
{ Q_OBJECT
public:
public slots:
QTextInlineObject* new_QTextInlineObject();
QTextInlineObject* new_QTextInlineObject(const QTextInlineObject& other) {
QTextInlineObject* a = new QTextInlineObject();
*((QTextInlineObject*)a) = other;
return a; }
void delete_QTextInlineObject(QTextInlineObject* obj) { delete obj; } 
   qreal  ascent(QTextInlineObject* theWrappedObject) const;
   qreal  descent(QTextInlineObject* theWrappedObject) const;
   QTextFormat  format(QTextInlineObject* theWrappedObject) const;
   int  formatIndex(QTextInlineObject* theWrappedObject) const;
   qreal  height(QTextInlineObject* theWrappedObject) const;
   bool  isValid(QTextInlineObject* theWrappedObject) const;
   QRectF  rect(QTextInlineObject* theWrappedObject) const;
   void setAscent(QTextInlineObject* theWrappedObject, qreal  a);
   void setDescent(QTextInlineObject* theWrappedObject, qreal  d);
   void setWidth(QTextInlineObject* theWrappedObject, qreal  w);
   Qt::LayoutDirection  textDirection(QTextInlineObject* theWrappedObject) const;
   int  textPosition(QTextInlineObject* theWrappedObject) const;
   qreal  width(QTextInlineObject* theWrappedObject) const;
};





class PythonQtShell_QTextItem : public QTextItem
{
public:
    PythonQtShell_QTextItem():QTextItem(),_wrapper(NULL) {};

   ~PythonQtShell_QTextItem();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
Q_FLAGS(RenderFlags )
enum RenderFlag{
  RightToLeft = QTextItem::RightToLeft,   Overline = QTextItem::Overline,   Underline = QTextItem::Underline,   StrikeOut = QTextItem::StrikeOut,   Dummy = QTextItem::Dummy};
Q_DECLARE_FLAGS(RenderFlags, RenderFlag)
public slots:
QTextItem* new_QTextItem();
void delete_QTextItem(QTextItem* obj) { delete obj; } 
   qreal  ascent(QTextItem* theWrappedObject) const;
   qreal  descent(QTextItem* theWrappedObject) const;
   QFont  font(QTextItem* theWrappedObject) const;
   QTextItem::RenderFlags  renderFlags(QTextItem* theWrappedObject) const;
   QString  text(QTextItem* theWrappedObject) const;
   qreal  width(QTextItem* theWrappedObject) const;
};





class PythonQtWrapper_QTextLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CursorMode )
enum CursorMode{
  SkipCharacters = QTextLayout::SkipCharacters,   SkipWords = QTextLayout::SkipWords};
public slots:
QTextLayout* new_QTextLayout();
QTextLayout* new_QTextLayout(const QString&  text);
QTextLayout* new_QTextLayout(const QString&  text, const QFont&  font, QPaintDevice*  paintdevice = 0);
QTextLayout* new_QTextLayout(const QTextBlock&  b);
void delete_QTextLayout(QTextLayout* obj) { delete obj; } 
   QList<QTextLayout::FormatRange >  additionalFormats(QTextLayout* theWrappedObject) const;
   void beginLayout(QTextLayout* theWrappedObject);
   QRectF  boundingRect(QTextLayout* theWrappedObject) const;
   bool  cacheEnabled(QTextLayout* theWrappedObject) const;
   void clearAdditionalFormats(QTextLayout* theWrappedObject);
   void clearLayout(QTextLayout* theWrappedObject);
   QTextLine  createLine(QTextLayout* theWrappedObject);
   Qt::CursorMoveStyle  cursorMoveStyle(QTextLayout* theWrappedObject) const;
   void draw(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, const QVector<QTextLayout::FormatRange >&  selections = QVector<QTextLayout::FormatRange>(), const QRectF&  clip = QRectF()) const;
   void drawCursor(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, int  cursorPosition) const;
   void drawCursor(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, int  cursorPosition, int  width) const;
   void endLayout(QTextLayout* theWrappedObject);
   QFont  font(QTextLayout* theWrappedObject) const;
   QList<QGlyphRun >  glyphRuns(QTextLayout* theWrappedObject, int  from = -1, int  length = -1) const;
   bool  isValidCursorPosition(QTextLayout* theWrappedObject, int  pos) const;
   int  leftCursorPosition(QTextLayout* theWrappedObject, int  oldPos) const;
   QTextLine  lineAt(QTextLayout* theWrappedObject, int  i) const;
   int  lineCount(QTextLayout* theWrappedObject) const;
   QTextLine  lineForTextPosition(QTextLayout* theWrappedObject, int  pos) const;
   qreal  maximumWidth(QTextLayout* theWrappedObject) const;
   qreal  minimumWidth(QTextLayout* theWrappedObject) const;
   int  nextCursorPosition(QTextLayout* theWrappedObject, int  oldPos, QTextLayout::CursorMode  mode = QTextLayout::SkipCharacters) const;
   QPointF  position(QTextLayout* theWrappedObject) const;
   int  preeditAreaPosition(QTextLayout* theWrappedObject) const;
   QString  preeditAreaText(QTextLayout* theWrappedObject) const;
   int  previousCursorPosition(QTextLayout* theWrappedObject, int  oldPos, QTextLayout::CursorMode  mode = QTextLayout::SkipCharacters) const;
   int  rightCursorPosition(QTextLayout* theWrappedObject, int  oldPos) const;
   void setAdditionalFormats(QTextLayout* theWrappedObject, const QList<QTextLayout::FormatRange >&  overrides);
   void setCacheEnabled(QTextLayout* theWrappedObject, bool  enable);
   void setCursorMoveStyle(QTextLayout* theWrappedObject, Qt::CursorMoveStyle  style);
   void setFlags(QTextLayout* theWrappedObject, int  flags);
   void setFont(QTextLayout* theWrappedObject, const QFont&  f);
   void setPosition(QTextLayout* theWrappedObject, const QPointF&  p);
   void setPreeditArea(QTextLayout* theWrappedObject, int  position, const QString&  text);
   void setRawFont(QTextLayout* theWrappedObject, const QRawFont&  rawFont);
   void setText(QTextLayout* theWrappedObject, const QString&  string);
   void setTextOption(QTextLayout* theWrappedObject, const QTextOption&  option);
   QString  text(QTextLayout* theWrappedObject) const;
   const QTextOption*  textOption(QTextLayout* theWrappedObject) const;
};





class PythonQtShell_QTextLayout__FormatRange : public QTextLayout::FormatRange
{
public:
    PythonQtShell_QTextLayout__FormatRange():QTextLayout::FormatRange(),_wrapper(NULL) {};

   ~PythonQtShell_QTextLayout__FormatRange();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextLayout__FormatRange : public QObject
{ Q_OBJECT
public:
public slots:
QTextLayout::FormatRange* new_QTextLayout__FormatRange();
QTextLayout::FormatRange* new_QTextLayout__FormatRange(const QTextLayout::FormatRange& other) {
PythonQtShell_QTextLayout__FormatRange* a = new PythonQtShell_QTextLayout__FormatRange();
*((QTextLayout::FormatRange*)a) = other;
return a; }
void delete_QTextLayout__FormatRange(QTextLayout::FormatRange* obj) { delete obj; } 
void py_set_format(QTextLayout::FormatRange* theWrappedObject, QTextCharFormat  format){ theWrappedObject->format = format; }
QTextCharFormat  py_get_format(QTextLayout::FormatRange* theWrappedObject){ return theWrappedObject->format; }
void py_set_length(QTextLayout::FormatRange* theWrappedObject, int  length){ theWrappedObject->length = length; }
int  py_get_length(QTextLayout::FormatRange* theWrappedObject){ return theWrappedObject->length; }
void py_set_start(QTextLayout::FormatRange* theWrappedObject, int  start){ theWrappedObject->start = start; }
int  py_get_start(QTextLayout::FormatRange* theWrappedObject){ return theWrappedObject->start; }
};





class PythonQtWrapper_QTextLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CursorPosition Edge )
enum CursorPosition{
  CursorBetweenCharacters = QTextLine::CursorBetweenCharacters,   CursorOnCharacter = QTextLine::CursorOnCharacter};
enum Edge{
  Leading = QTextLine::Leading,   Trailing = QTextLine::Trailing};
public slots:
QTextLine* new_QTextLine();
QTextLine* new_QTextLine(const QTextLine& other) {
QTextLine* a = new QTextLine();
*((QTextLine*)a) = other;
return a; }
void delete_QTextLine(QTextLine* obj) { delete obj; } 
   qreal  ascent(QTextLine* theWrappedObject) const;
   qreal  cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge = QTextLine::Leading) const;
   qreal  descent(QTextLine* theWrappedObject) const;
   void draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection = 0) const;
   QList<QGlyphRun >  glyphRuns(QTextLine* theWrappedObject, int  from = -1, int  length = -1) const;
   qreal  height(QTextLine* theWrappedObject) const;
   qreal  horizontalAdvance(QTextLine* theWrappedObject) const;
   bool  isValid(QTextLine* theWrappedObject) const;
   qreal  leading(QTextLine* theWrappedObject) const;
   bool  leadingIncluded(QTextLine* theWrappedObject) const;
   int  lineNumber(QTextLine* theWrappedObject) const;
   QRectF  naturalTextRect(QTextLine* theWrappedObject) const;
   qreal  naturalTextWidth(QTextLine* theWrappedObject) const;
   QPointF  position(QTextLine* theWrappedObject) const;
   QRectF  rect(QTextLine* theWrappedObject) const;
   void setLeadingIncluded(QTextLine* theWrappedObject, bool  included);
   void setLineWidth(QTextLine* theWrappedObject, qreal  width);
   void setNumColumns(QTextLine* theWrappedObject, int  columns);
   void setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth);
   void setPosition(QTextLine* theWrappedObject, const QPointF&  pos);
   int  textLength(QTextLine* theWrappedObject) const;
   int  textStart(QTextLine* theWrappedObject) const;
   qreal  width(QTextLine* theWrappedObject) const;
   qreal  x(QTextLine* theWrappedObject) const;
   int  xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2 = QTextLine::CursorBetweenCharacters) const;
   qreal  y(QTextLine* theWrappedObject) const;
};





class PythonQtShell_QTextList : public QTextList
{
public:
    PythonQtShell_QTextList(QTextDocument*  doc):QTextList(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextList();

virtual void blockFormatChanged(const QTextBlock&  block);
virtual void blockInserted(const QTextBlock&  block);
virtual void blockRemoved(const QTextBlock&  block);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextList : public QObject
{ Q_OBJECT
public:
public slots:
QTextList* new_QTextList(QTextDocument*  doc);
void delete_QTextList(QTextList* obj) { delete obj; } 
   void add(QTextList* theWrappedObject, const QTextBlock&  block);
   int  count(QTextList* theWrappedObject) const;
   QTextListFormat  format(QTextList* theWrappedObject) const;
   QTextBlock  item(QTextList* theWrappedObject, int  i) const;
   int  itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   QString  itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   void remove(QTextList* theWrappedObject, const QTextBlock&  arg__1);
   void removeItem(QTextList* theWrappedObject, int  i);
   void setFormat(QTextList* theWrappedObject, const QTextListFormat&  format);
};





class PythonQtShell_QTextListFormat : public QTextListFormat
{
public:
    PythonQtShell_QTextListFormat():QTextListFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextListFormat(const QTextFormat&  fmt):QTextListFormat(fmt),_wrapper(NULL) {};

   ~PythonQtShell_QTextListFormat();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextListFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Style )
enum Style{
  ListDisc = QTextListFormat::ListDisc,   ListCircle = QTextListFormat::ListCircle,   ListSquare = QTextListFormat::ListSquare,   ListDecimal = QTextListFormat::ListDecimal,   ListLowerAlpha = QTextListFormat::ListLowerAlpha,   ListUpperAlpha = QTextListFormat::ListUpperAlpha,   ListLowerRoman = QTextListFormat::ListLowerRoman,   ListUpperRoman = QTextListFormat::ListUpperRoman,   ListStyleUndefined = QTextListFormat::ListStyleUndefined};
public slots:
QTextListFormat* new_QTextListFormat();
QTextListFormat* new_QTextListFormat(const QTextFormat&  fmt);
QTextListFormat* new_QTextListFormat(const QTextListFormat& other) {
PythonQtShell_QTextListFormat* a = new PythonQtShell_QTextListFormat();
*((QTextListFormat*)a) = other;
return a; }
void delete_QTextListFormat(QTextListFormat* obj) { delete obj; } 
   int  indent(QTextListFormat* theWrappedObject) const;
   bool  isValid(QTextListFormat* theWrappedObject) const;
   QString  numberPrefix(QTextListFormat* theWrappedObject) const;
   QString  numberSuffix(QTextListFormat* theWrappedObject) const;
   void setIndent(QTextListFormat* theWrappedObject, int  indent);
   void setNumberPrefix(QTextListFormat* theWrappedObject, const QString&  numberPrefix);
   void setNumberSuffix(QTextListFormat* theWrappedObject, const QString&  numberSuffix);
   void setStyle(QTextListFormat* theWrappedObject, QTextListFormat::Style  style);
   QTextListFormat::Style  style(QTextListFormat* theWrappedObject) const;
};





class PythonQtShell_QTextObject : public QTextObject
{
public:
    PythonQtShell_QTextObject(QTextDocument*  doc):QTextObject(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextObject();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextObject : public QTextObject
{ public:
inline void promoted_setFormat(const QTextFormat&  format) { this->setFormat(format); }
};

class PythonQtWrapper_QTextObject : public QObject
{ Q_OBJECT
public:
public slots:
QTextObject* new_QTextObject(QTextDocument*  doc);
   QTextDocument*  document(QTextObject* theWrappedObject) const;
   QTextFormat  format(QTextObject* theWrappedObject) const;
   int  formatIndex(QTextObject* theWrappedObject) const;
   int  objectIndex(QTextObject* theWrappedObject) const;
   void setFormat(QTextObject* theWrappedObject, const QTextFormat&  format);
};





class PythonQtWrapper_QTextOption : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Flag TabType WrapMode )
Q_FLAGS(Flags )
enum Flag{
  ShowTabsAndSpaces = QTextOption::ShowTabsAndSpaces,   ShowLineAndParagraphSeparators = QTextOption::ShowLineAndParagraphSeparators,   AddSpaceForLineAndParagraphSeparators = QTextOption::AddSpaceForLineAndParagraphSeparators,   SuppressColors = QTextOption::SuppressColors,   IncludeTrailingSpaces = QTextOption::IncludeTrailingSpaces};
enum TabType{
  LeftTab = QTextOption::LeftTab,   RightTab = QTextOption::RightTab,   CenterTab = QTextOption::CenterTab,   DelimiterTab = QTextOption::DelimiterTab};
enum WrapMode{
  NoWrap = QTextOption::NoWrap,   WordWrap = QTextOption::WordWrap,   ManualWrap = QTextOption::ManualWrap,   WrapAnywhere = QTextOption::WrapAnywhere,   WrapAtWordBoundaryOrAnywhere = QTextOption::WrapAtWordBoundaryOrAnywhere};
Q_DECLARE_FLAGS(Flags, Flag)
public slots:
QTextOption* new_QTextOption();
QTextOption* new_QTextOption(Qt::Alignment  alignment);
QTextOption* new_QTextOption(const QTextOption&  o);
void delete_QTextOption(QTextOption* obj) { delete obj; } 
   Qt::Alignment  alignment(QTextOption* theWrappedObject) const;
   QTextOption::Flags  flags(QTextOption* theWrappedObject) const;
   void setAlignment(QTextOption* theWrappedObject, Qt::Alignment  alignment);
   void setFlags(QTextOption* theWrappedObject, QTextOption::Flags  flags);
   void setTabArray(QTextOption* theWrappedObject, const QList<qreal >&  tabStops);
   void setTabStop(QTextOption* theWrappedObject, qreal  tabStop);
   void setTabs(QTextOption* theWrappedObject, const QList<QTextOption::Tab >&  tabStops);
   void setTextDirection(QTextOption* theWrappedObject, Qt::LayoutDirection  aDirection);
   void setUseDesignMetrics(QTextOption* theWrappedObject, bool  b);
   void setWrapMode(QTextOption* theWrappedObject, QTextOption::WrapMode  wrap);
   QList<qreal >  tabArray(QTextOption* theWrappedObject) const;
   qreal  tabStop(QTextOption* theWrappedObject) const;
   QList<QTextOption::Tab >  tabs(QTextOption* theWrappedObject) const;
   Qt::LayoutDirection  textDirection(QTextOption* theWrappedObject) const;
   bool  useDesignMetrics(QTextOption* theWrappedObject) const;
   QTextOption::WrapMode  wrapMode(QTextOption* theWrappedObject) const;
};





class PythonQtShell_QTextOption__Tab : public QTextOption::Tab
{
public:
    PythonQtShell_QTextOption__Tab():QTextOption::Tab(),_wrapper(NULL) {};
    PythonQtShell_QTextOption__Tab(qreal  pos, QTextOption::TabType  tabType, QChar  delim = QChar()):QTextOption::Tab(pos, tabType, delim),_wrapper(NULL) {};

   ~PythonQtShell_QTextOption__Tab();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextOption__Tab : public QObject
{ Q_OBJECT
public:
public slots:
QTextOption::Tab* new_QTextOption__Tab();
QTextOption::Tab* new_QTextOption__Tab(qreal  pos, QTextOption::TabType  tabType, QChar  delim = QChar());
QTextOption::Tab* new_QTextOption__Tab(const QTextOption::Tab& other) {
PythonQtShell_QTextOption__Tab* a = new PythonQtShell_QTextOption__Tab();
*((QTextOption::Tab*)a) = other;
return a; }
void delete_QTextOption__Tab(QTextOption::Tab* obj) { delete obj; } 
   bool  __ne__(QTextOption::Tab* theWrappedObject, const QTextOption::Tab&  other) const;
   bool  __eq__(QTextOption::Tab* theWrappedObject, const QTextOption::Tab&  other) const;
void py_set_delimiter(QTextOption::Tab* theWrappedObject, QChar  delimiter){ theWrappedObject->delimiter = delimiter; }
QChar  py_get_delimiter(QTextOption::Tab* theWrappedObject){ return theWrappedObject->delimiter; }
void py_set_position(QTextOption::Tab* theWrappedObject, qreal  position){ theWrappedObject->position = position; }
qreal  py_get_position(QTextOption::Tab* theWrappedObject){ return theWrappedObject->position; }
void py_set_type(QTextOption::Tab* theWrappedObject, QTextOption::TabType  type){ theWrappedObject->type = type; }
QTextOption::TabType  py_get_type(QTextOption::Tab* theWrappedObject){ return theWrappedObject->type; }
};





class PythonQtShell_QTextTable : public QTextTable
{
public:
    PythonQtShell_QTextTable(QTextDocument*  doc):QTextTable(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextTable();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTable : public QObject
{ Q_OBJECT
public:
public slots:
QTextTable* new_QTextTable(QTextDocument*  doc);
void delete_QTextTable(QTextTable* obj) { delete obj; } 
   void appendColumns(QTextTable* theWrappedObject, int  count);
   void appendRows(QTextTable* theWrappedObject, int  count);
   QTextTableCell  cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  position) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  row, int  col) const;
   int  columns(QTextTable* theWrappedObject) const;
   QTextTableFormat  format(QTextTable* theWrappedObject) const;
   void insertColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void insertRows(QTextTable* theWrappedObject, int  pos, int  num);
   void mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor);
   void mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   void removeColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void removeRows(QTextTable* theWrappedObject, int  pos, int  num);
   void resize(QTextTable* theWrappedObject, int  rows, int  cols);
   QTextCursor  rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   QTextCursor  rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   int  rows(QTextTable* theWrappedObject) const;
   void setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format);
   void splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
};





class PythonQtWrapper_QTextTableCell : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableCell* new_QTextTableCell();
QTextTableCell* new_QTextTableCell(const QTextTableCell&  o);
void delete_QTextTableCell(QTextTableCell* obj) { delete obj; } 
   QTextFrame::iterator  begin(QTextTableCell* theWrappedObject) const;
   int  column(QTextTableCell* theWrappedObject) const;
   int  columnSpan(QTextTableCell* theWrappedObject) const;
   QTextFrame::iterator  end(QTextTableCell* theWrappedObject) const;
   QTextCursor  firstCursorPosition(QTextTableCell* theWrappedObject) const;
   int  firstPosition(QTextTableCell* theWrappedObject) const;
   QTextCharFormat  format(QTextTableCell* theWrappedObject) const;
   bool  isValid(QTextTableCell* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextTableCell* theWrappedObject) const;
   int  lastPosition(QTextTableCell* theWrappedObject) const;
   bool  __ne__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const;
   bool  __eq__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const;
   int  row(QTextTableCell* theWrappedObject) const;
   int  rowSpan(QTextTableCell* theWrappedObject) const;
   void setFormat(QTextTableCell* theWrappedObject, const QTextCharFormat&  format);
   int  tableCellFormatIndex(QTextTableCell* theWrappedObject) const;
};





class PythonQtShell_QTextTableCellFormat : public QTextTableCellFormat
{
public:
    PythonQtShell_QTextTableCellFormat():QTextTableCellFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableCellFormat(const QTextFormat&  fmt):QTextTableCellFormat(fmt),_wrapper(NULL) {};

   ~PythonQtShell_QTextTableCellFormat();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTableCellFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableCellFormat* new_QTextTableCellFormat();
QTextTableCellFormat* new_QTextTableCellFormat(const QTextFormat&  fmt);
QTextTableCellFormat* new_QTextTableCellFormat(const QTextTableCellFormat& other) {
PythonQtShell_QTextTableCellFormat* a = new PythonQtShell_QTextTableCellFormat();
*((QTextTableCellFormat*)a) = other;
return a; }
void delete_QTextTableCellFormat(QTextTableCellFormat* obj) { delete obj; } 
   qreal  bottomPadding(QTextTableCellFormat* theWrappedObject) const;
   bool  isValid(QTextTableCellFormat* theWrappedObject) const;
   qreal  leftPadding(QTextTableCellFormat* theWrappedObject) const;
   qreal  rightPadding(QTextTableCellFormat* theWrappedObject) const;
   void setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   qreal  topPadding(QTextTableCellFormat* theWrappedObject) const;
};





class PythonQtShell_QTextTableFormat : public QTextTableFormat
{
public:
    PythonQtShell_QTextTableFormat():QTextTableFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableFormat(const QTextFormat&  fmt):QTextTableFormat(fmt),_wrapper(NULL) {};

   ~PythonQtShell_QTextTableFormat();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTableFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableFormat* new_QTextTableFormat();
QTextTableFormat* new_QTextTableFormat(const QTextFormat&  fmt);
QTextTableFormat* new_QTextTableFormat(const QTextTableFormat& other) {
PythonQtShell_QTextTableFormat* a = new PythonQtShell_QTextTableFormat();
*((QTextTableFormat*)a) = other;
return a; }
void delete_QTextTableFormat(QTextTableFormat* obj) { delete obj; } 
   Qt::Alignment  alignment(QTextTableFormat* theWrappedObject) const;
   qreal  cellPadding(QTextTableFormat* theWrappedObject) const;
   qreal  cellSpacing(QTextTableFormat* theWrappedObject) const;
   void clearColumnWidthConstraints(QTextTableFormat* theWrappedObject);
   QVector<QTextLength >  columnWidthConstraints(QTextTableFormat* theWrappedObject) const;
   int  columns(QTextTableFormat* theWrappedObject) const;
   int  headerRowCount(QTextTableFormat* theWrappedObject) const;
   bool  isValid(QTextTableFormat* theWrappedObject) const;
   void setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment);
   void setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding);
   void setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing);
   void setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints);
   void setColumns(QTextTableFormat* theWrappedObject, int  columns);
   void setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count);
};





class PythonQtShell_QTileRules : public QTileRules
{
public:
    PythonQtShell_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule):QTileRules(horizontalRule, verticalRule),_wrapper(NULL) {};
    PythonQtShell_QTileRules(Qt::TileRule  rule = Qt::StretchTile):QTileRules(rule),_wrapper(NULL) {};

   ~PythonQtShell_QTileRules();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTileRules : public QObject
{ Q_OBJECT
public:
public slots:
QTileRules* new_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule);
QTileRules* new_QTileRules(Qt::TileRule  rule = Qt::StretchTile);
void delete_QTileRules(QTileRules* obj) { delete obj; } 
void py_set_horizontal(QTileRules* theWrappedObject, Qt::TileRule  horizontal){ theWrappedObject->horizontal = horizontal; }
Qt::TileRule  py_get_horizontal(QTileRules* theWrappedObject){ return theWrappedObject->horizontal; }
void py_set_vertical(QTileRules* theWrappedObject, Qt::TileRule  vertical){ theWrappedObject->vertical = vertical; }
Qt::TileRule  py_get_vertical(QTileRules* theWrappedObject){ return theWrappedObject->vertical; }
};





class PythonQtShell_QTimeEdit : public QTimeEdit
{
public:
    PythonQtShell_QTimeEdit(QWidget*  parent = 0):QTimeEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QTimeEdit(const QTime&  time, QWidget*  parent = 0):QTimeEdit(time, parent),_wrapper(NULL) {};

   ~PythonQtShell_QTimeEdit();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual QDateTime  dateTimeFromText(const QString&  text) const;
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  input) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void stepBy(int  steps);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual QString  textFromDateTime(const QDateTime&  dt) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTimeEdit : public QObject
{ Q_OBJECT
public:
public slots:
QTimeEdit* new_QTimeEdit(QWidget*  parent = 0);
QTimeEdit* new_QTimeEdit(const QTime&  time, QWidget*  parent = 0);
void delete_QTimeEdit(QTimeEdit* obj) { delete obj; } 
};





class PythonQtShell_QToolBar : public QToolBar
{
public:
    PythonQtShell_QToolBar(QWidget*  parent = 0):QToolBar(parent),_wrapper(NULL) {};
    PythonQtShell_QToolBar(const QString&  title, QWidget*  parent = 0):QToolBar(title, parent),_wrapper(NULL) {};

   ~PythonQtShell_QToolBar();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolBar : public QToolBar
{ public:
inline void promoted_actionEvent(QActionEvent*  event) { this->actionEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_initStyleOption(QStyleOptionToolBar*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void py_q_actionEvent(QActionEvent*  event) { QToolBar::actionEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QToolBar::changeEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QToolBar::event(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QToolBar::paintEvent(event); }
};

class PythonQtWrapper_QToolBar : public QObject
{ Q_OBJECT
public:
public slots:
QToolBar* new_QToolBar(QWidget*  parent = 0);
QToolBar* new_QToolBar(const QString&  title, QWidget*  parent = 0);
void delete_QToolBar(QToolBar* obj) { delete obj; } 
   QAction*  actionAt(QToolBar* theWrappedObject, const QPoint&  p) const;
   QAction*  actionAt(QToolBar* theWrappedObject, int  x, int  y) const;
   void py_q_actionEvent(QToolBar* theWrappedObject, QActionEvent*  event){  (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_actionEvent(event));}
   QRect  actionGeometry(QToolBar* theWrappedObject, QAction*  action) const;
   QAction*  addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member);
   QAction*  addAction(QToolBar* theWrappedObject, const QString&  text);
   QAction*  addAction(QToolBar* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member);
   QAction*  addSeparator(QToolBar* theWrappedObject);
   QAction*  addWidget(QToolBar* theWrappedObject, QWidget*  widget);
   Qt::ToolBarAreas  allowedAreas(QToolBar* theWrappedObject) const;
   void py_q_changeEvent(QToolBar* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_changeEvent(event));}
   void clear(QToolBar* theWrappedObject);
   bool  py_q_event(QToolBar* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_event(event));}
   QSize  iconSize(QToolBar* theWrappedObject) const;
   void initStyleOption(QToolBar* theWrappedObject, QStyleOptionToolBar*  option) const;
   QAction*  insertSeparator(QToolBar* theWrappedObject, QAction*  before);
   QAction*  insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget);
   bool  isAreaAllowed(QToolBar* theWrappedObject, Qt::ToolBarArea  area) const;
   bool  isFloatable(QToolBar* theWrappedObject) const;
   bool  isFloating(QToolBar* theWrappedObject) const;
   bool  isMovable(QToolBar* theWrappedObject) const;
   Qt::Orientation  orientation(QToolBar* theWrappedObject) const;
   void py_q_paintEvent(QToolBar* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_paintEvent(event));}
   void setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas);
   void setFloatable(QToolBar* theWrappedObject, bool  floatable);
   void setMovable(QToolBar* theWrappedObject, bool  movable);
   void setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation);
   QAction*  toggleViewAction(QToolBar* theWrappedObject) const;
   Qt::ToolButtonStyle  toolButtonStyle(QToolBar* theWrappedObject) const;
   QWidget*  widgetForAction(QToolBar* theWrappedObject, QAction*  action) const;

  QAction* addAction (QToolBar* menu, const QString & text, PyObject* callable)
  {
    QAction* a = menu->addAction(text);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
  QAction* addAction (QToolBar* menu, const QIcon& icon, const QString& text, PyObject* callable)
  {
    QAction* a = menu->addAction(text);
    a->setIcon(icon);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
};





class PythonQtWrapper_QToolBarChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QToolBarChangeEvent* new_QToolBarChangeEvent(bool  t);
void delete_QToolBarChangeEvent(QToolBarChangeEvent* obj) { delete obj; } 
   bool  toggle(QToolBarChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QToolBox : public QToolBox
{
public:
    PythonQtShell_QToolBox(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QToolBox(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QToolBox();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void itemInserted(int  index);
virtual void itemRemoved(int  index);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  e);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolBox : public QToolBox
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_itemInserted(int  index) { this->itemInserted(index); }
inline void promoted_itemRemoved(int  index) { this->itemRemoved(index); }
inline void promoted_showEvent(QShowEvent*  e) { this->showEvent(e); }
inline void py_q_changeEvent(QEvent*  arg__1) { QToolBox::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QToolBox::event(e); }
inline void py_q_itemInserted(int  index) { QToolBox::itemInserted(index); }
inline void py_q_itemRemoved(int  index) { QToolBox::itemRemoved(index); }
inline void py_q_showEvent(QShowEvent*  e) { QToolBox::showEvent(e); }
};

class PythonQtWrapper_QToolBox : public QObject
{ Q_OBJECT
public:
public slots:
QToolBox* new_QToolBox(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QToolBox(QToolBox* obj) { delete obj; } 
   int  addItem(QToolBox* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  text);
   int  addItem(QToolBox* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  text);
   void py_q_changeEvent(QToolBox* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_changeEvent(arg__1));}
   int  count(QToolBox* theWrappedObject) const;
   int  currentIndex(QToolBox* theWrappedObject) const;
   QWidget*  currentWidget(QToolBox* theWrappedObject) const;
   bool  py_q_event(QToolBox* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_event(e));}
   int  indexOf(QToolBox* theWrappedObject, QWidget*  widget) const;
   int  insertItem(QToolBox* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  text);
   int  insertItem(QToolBox* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  text);
   bool  isItemEnabled(QToolBox* theWrappedObject, int  index) const;
   QIcon  itemIcon(QToolBox* theWrappedObject, int  index) const;
   void itemInserted(QToolBox* theWrappedObject, int  index);
   void py_q_itemInserted(QToolBox* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_itemInserted(index));}
   void itemRemoved(QToolBox* theWrappedObject, int  index);
   void py_q_itemRemoved(QToolBox* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_itemRemoved(index));}
   QString  itemText(QToolBox* theWrappedObject, int  index) const;
   QString  itemToolTip(QToolBox* theWrappedObject, int  index) const;
   void removeItem(QToolBox* theWrappedObject, int  index);
   void setItemEnabled(QToolBox* theWrappedObject, int  index, bool  enabled);
   void setItemIcon(QToolBox* theWrappedObject, int  index, const QIcon&  icon);
   void setItemText(QToolBox* theWrappedObject, int  index, const QString&  text);
   void setItemToolTip(QToolBox* theWrappedObject, int  index, const QString&  toolTip);
   void py_q_showEvent(QToolBox* theWrappedObject, QShowEvent*  e){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_showEvent(e));}
   QWidget*  widget(QToolBox* theWrappedObject, int  index) const;
};





class PythonQtShell_QToolButton : public QToolButton
{
public:
    PythonQtShell_QToolButton(QWidget*  parent = 0):QToolButton(parent),_wrapper(NULL) {};

   ~PythonQtShell_QToolButton();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolButton : public QToolButton
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { this->actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { this->enterEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return this->hitButton(pos); }
inline void promoted_initStyleOption(QStyleOptionToolButton*  option) const { this->initStyleOption(option); }
inline void promoted_leaveEvent(QEvent*  arg__1) { this->leaveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_nextCheckState() { this->nextCheckState(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void py_q_actionEvent(QActionEvent*  arg__1) { QToolButton::actionEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QToolButton::changeEvent(arg__1); }
inline void py_q_enterEvent(QEvent*  arg__1) { QToolButton::enterEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QToolButton::event(e); }
inline bool  py_q_hitButton(const QPoint&  pos) const { return QToolButton::hitButton(pos); }
inline void py_q_leaveEvent(QEvent*  arg__1) { QToolButton::leaveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QToolButton::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QToolButton::mouseReleaseEvent(arg__1); }
inline void py_q_nextCheckState() { QToolButton::nextCheckState(); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QToolButton::paintEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QToolButton::timerEvent(arg__1); }
};

class PythonQtWrapper_QToolButton : public QObject
{ Q_OBJECT
public:
public slots:
QToolButton* new_QToolButton(QWidget*  parent = 0);
void delete_QToolButton(QToolButton* obj) { delete obj; } 
   void py_q_actionEvent(QToolButton* theWrappedObject, QActionEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_actionEvent(arg__1));}
   Qt::ArrowType  arrowType(QToolButton* theWrappedObject) const;
   bool  autoRaise(QToolButton* theWrappedObject) const;
   void py_q_changeEvent(QToolButton* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_changeEvent(arg__1));}
   QAction*  defaultAction(QToolButton* theWrappedObject) const;
   void py_q_enterEvent(QToolButton* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_enterEvent(arg__1));}
   bool  py_q_event(QToolButton* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_event(e));}
   bool  py_q_hitButton(QToolButton* theWrappedObject, const QPoint&  pos) const{  return (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_hitButton(pos));}
   void initStyleOption(QToolButton* theWrappedObject, QStyleOptionToolButton*  option) const;
   void py_q_leaveEvent(QToolButton* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_leaveEvent(arg__1));}
   QMenu*  menu(QToolButton* theWrappedObject) const;
   QSize  minimumSizeHint(QToolButton* theWrappedObject) const;
   void py_q_mousePressEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_nextCheckState(QToolButton* theWrappedObject){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_nextCheckState());}
   void py_q_paintEvent(QToolButton* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QToolButton::ToolButtonPopupMode  popupMode(QToolButton* theWrappedObject) const;
   void setArrowType(QToolButton* theWrappedObject, Qt::ArrowType  type);
   void setAutoRaise(QToolButton* theWrappedObject, bool  enable);
   void setMenu(QToolButton* theWrappedObject, QMenu*  menu);
   void setPopupMode(QToolButton* theWrappedObject, QToolButton::ToolButtonPopupMode  mode);
   QSize  sizeHint(QToolButton* theWrappedObject) const;
   void py_q_timerEvent(QToolButton* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_timerEvent(arg__1));}
   Qt::ToolButtonStyle  toolButtonStyle(QToolButton* theWrappedObject) const;
};





class PythonQtWrapper_QToolTip : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QToolTip(QToolTip* obj) { delete obj; } 
   QFont  static_QToolTip_font();
   void static_QToolTip_hideText();
   bool  static_QToolTip_isVisible();
   QPalette  static_QToolTip_palette();
   void static_QToolTip_setFont(const QFont&  arg__1);
   void static_QToolTip_setPalette(const QPalette&  arg__1);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w = 0);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect, int  msecShowTime);
   QString  static_QToolTip_text();
};





class PythonQtWrapper_QTouchDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CapabilityFlag DeviceType )
Q_FLAGS(Capabilities )
enum CapabilityFlag{
  Position = QTouchDevice::Position,   Area = QTouchDevice::Area,   Pressure = QTouchDevice::Pressure,   Velocity = QTouchDevice::Velocity,   RawPositions = QTouchDevice::RawPositions,   NormalizedPosition = QTouchDevice::NormalizedPosition,   MouseEmulation = QTouchDevice::MouseEmulation};
enum DeviceType{
  TouchScreen = QTouchDevice::TouchScreen,   TouchPad = QTouchDevice::TouchPad};
Q_DECLARE_FLAGS(Capabilities, CapabilityFlag)
public slots:
QTouchDevice* new_QTouchDevice();
void delete_QTouchDevice(QTouchDevice* obj) { delete obj; } 
   QTouchDevice::Capabilities  capabilities(QTouchDevice* theWrappedObject) const;
   QList<const QTouchDevice* >  static_QTouchDevice_devices();
   int  maximumTouchPoints(QTouchDevice* theWrappedObject) const;
   QString  name(QTouchDevice* theWrappedObject) const;
   void setCapabilities(QTouchDevice* theWrappedObject, QTouchDevice::Capabilities  caps);
   void setMaximumTouchPoints(QTouchDevice* theWrappedObject, int  max);
   void setName(QTouchDevice* theWrappedObject, const QString&  name);
   void setType(QTouchDevice* theWrappedObject, QTouchDevice::DeviceType  devType);
   QTouchDevice::DeviceType  type(QTouchDevice* theWrappedObject) const;
    QString py_toString(QTouchDevice*);
};





class PythonQtShell_QTouchEvent : public QTouchEvent
{
public:
    PythonQtShell_QTouchEvent(QEvent::Type  eventType, QTouchDevice*  device = 0, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = 0, const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>()):QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints),_wrapper(NULL) {};

   ~PythonQtShell_QTouchEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTouchEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTouchEvent* new_QTouchEvent(QEvent::Type  eventType, QTouchDevice*  device = 0, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = 0, const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>());
void delete_QTouchEvent(QTouchEvent* obj) { delete obj; } 
   QTouchDevice*  device(QTouchEvent* theWrappedObject) const;
   void setDevice(QTouchEvent* theWrappedObject, QTouchDevice*  adevice);
   void setTarget(QTouchEvent* theWrappedObject, QObject*  atarget);
   void setTouchPointStates(QTouchEvent* theWrappedObject, Qt::TouchPointStates  aTouchPointStates);
   void setTouchPoints(QTouchEvent* theWrappedObject, const QList<QTouchEvent::TouchPoint >&  atouchPoints);
   void setWindow(QTouchEvent* theWrappedObject, QWindow*  awindow);
   QObject*  target(QTouchEvent* theWrappedObject) const;
   Qt::TouchPointStates  touchPointStates(QTouchEvent* theWrappedObject) const;
   const QList<QTouchEvent::TouchPoint >*  touchPoints(QTouchEvent* theWrappedObject) const;
   QWindow*  window(QTouchEvent* theWrappedObject) const;
};





class PythonQtWrapper_QTouchEvent__TouchPoint : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InfoFlag )
Q_FLAGS(InfoFlags )
enum InfoFlag{
  Pen = QTouchEvent::TouchPoint::Pen};
Q_DECLARE_FLAGS(InfoFlags, InfoFlag)
public slots:
QTouchEvent::TouchPoint* new_QTouchEvent__TouchPoint(const QTouchEvent::TouchPoint&  other);
QTouchEvent::TouchPoint* new_QTouchEvent__TouchPoint(int  id = -1);
void delete_QTouchEvent__TouchPoint(QTouchEvent::TouchPoint* obj) { delete obj; } 
   QTouchEvent::TouchPoint::InfoFlags  flags(QTouchEvent::TouchPoint* theWrappedObject) const;
   int  id(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  normalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QTouchEvent::TouchPoint*  operator_assign(QTouchEvent::TouchPoint* theWrappedObject, const QTouchEvent::TouchPoint&  other);
   QPointF  pos(QTouchEvent::TouchPoint* theWrappedObject) const;
   qreal  pressure(QTouchEvent::TouchPoint* theWrappedObject) const;
   QVector<QPointF >  rawScreenPositions(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  rect(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  scenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  sceneRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  screenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  screenRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setFlags(QTouchEvent::TouchPoint* theWrappedObject, QTouchEvent::TouchPoint::InfoFlags  flags);
   void setId(QTouchEvent::TouchPoint* theWrappedObject, int  id);
   void setLastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastNormalizedPos);
   void setLastPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastPos);
   void setLastScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScenePos);
   void setLastScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScreenPos);
   void setNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  normalizedPos);
   void setPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  pos);
   void setPressure(QTouchEvent::TouchPoint* theWrappedObject, qreal  pressure);
   void setRawScreenPositions(QTouchEvent::TouchPoint* theWrappedObject, const QVector<QPointF >&  positions);
   void setRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  rect);
   void setScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  scenePos);
   void setSceneRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  sceneRect);
   void setScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  screenPos);
   void setScreenRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  screenRect);
   void setStartNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startNormalizedPos);
   void setStartPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startPos);
   void setStartScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScenePos);
   void setStartScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScreenPos);
   void setState(QTouchEvent::TouchPoint* theWrappedObject, Qt::TouchPointStates  state);
   void setVelocity(QTouchEvent::TouchPoint* theWrappedObject, const QVector2D&  v);
   QPointF  startNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   Qt::TouchPointState  state(QTouchEvent::TouchPoint* theWrappedObject) const;
   void swap(QTouchEvent::TouchPoint* theWrappedObject, QTouchEvent::TouchPoint&  other);
   QVector2D  velocity(QTouchEvent::TouchPoint* theWrappedObject) const;
    QString py_toString(QTouchEvent::TouchPoint*);
};





class PythonQtWrapper_QTransform : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransformationType )
enum TransformationType{
  TxNone = QTransform::TxNone,   TxTranslate = QTransform::TxTranslate,   TxScale = QTransform::TxScale,   TxRotate = QTransform::TxRotate,   TxShear = QTransform::TxShear,   TxProject = QTransform::TxProject};
public slots:
QTransform* new_QTransform();
QTransform* new_QTransform(const QMatrix&  mtx);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33 = 1.0);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h21, qreal  h22, qreal  dx, qreal  dy);
QTransform* new_QTransform(const QTransform& other) {
QTransform* a = new QTransform();
*((QTransform*)a) = other;
return a; }
void delete_QTransform(QTransform* obj) { delete obj; } 
   QTransform  adjoint(QTransform* theWrappedObject) const;
   qreal  det(QTransform* theWrappedObject) const;
   qreal  determinant(QTransform* theWrappedObject) const;
   qreal  dx(QTransform* theWrappedObject) const;
   qreal  dy(QTransform* theWrappedObject) const;
   QTransform  static_QTransform_fromScale(qreal  dx, qreal  dy);
   QTransform  static_QTransform_fromTranslate(qreal  dx, qreal  dy);
   QTransform  inverted(QTransform* theWrappedObject, bool*  invertible = 0) const;
   bool  isAffine(QTransform* theWrappedObject) const;
   bool  isIdentity(QTransform* theWrappedObject) const;
   bool  isInvertible(QTransform* theWrappedObject) const;
   bool  isRotating(QTransform* theWrappedObject) const;
   bool  isScaling(QTransform* theWrappedObject) const;
   bool  isTranslating(QTransform* theWrappedObject) const;
   qreal  m11(QTransform* theWrappedObject) const;
   qreal  m12(QTransform* theWrappedObject) const;
   qreal  m13(QTransform* theWrappedObject) const;
   qreal  m21(QTransform* theWrappedObject) const;
   qreal  m22(QTransform* theWrappedObject) const;
   qreal  m23(QTransform* theWrappedObject) const;
   qreal  m31(QTransform* theWrappedObject) const;
   qreal  m32(QTransform* theWrappedObject) const;
   qreal  m33(QTransform* theWrappedObject) const;
   QLine  map(QTransform* theWrappedObject, const QLine&  l) const;
   QLineF  map(QTransform* theWrappedObject, const QLineF&  l) const;
   QPainterPath  map(QTransform* theWrappedObject, const QPainterPath&  p) const;
   QPoint  map(QTransform* theWrappedObject, const QPoint&  p) const;
   QPointF  map(QTransform* theWrappedObject, const QPointF&  p) const;
   QPolygon  map(QTransform* theWrappedObject, const QPolygon&  a) const;
   QPolygonF  map(QTransform* theWrappedObject, const QPolygonF&  a) const;
   QRegion  map(QTransform* theWrappedObject, const QRegion&  r) const;
   QRect  mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const;
   QRectF  mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const;
   QPolygon  mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const;
   bool  __ne__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   QTransform  multiplied(QTransform* theWrappedObject, const QTransform&  o) const;
   QTransform  __mul__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __imul__(QTransform* theWrappedObject, const QTransform&  arg__1);
   QTransform*  __imul__(QTransform* theWrappedObject, qreal  div);
   QTransform  __add__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __iadd__(QTransform* theWrappedObject, qreal  div);
   QTransform  __sub__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __isub__(QTransform* theWrappedObject, qreal  div);
   QTransform  __div__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __idiv__(QTransform* theWrappedObject, qreal  div);
   void writeTo(QTransform* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   void readFrom(QTransform* theWrappedObject, QDataStream&  arg__1);
   bool  static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result);
   bool  static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result);
   void reset(QTransform* theWrappedObject);
   QTransform*  rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform*  rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform*  scale(QTransform* theWrappedObject, qreal  sx, qreal  sy);
   void setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33);
   QTransform*  shear(QTransform* theWrappedObject, qreal  sh, qreal  sv);
   bool  static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result);
   const QMatrix*  toAffine(QTransform* theWrappedObject) const;
   QTransform*  translate(QTransform* theWrappedObject, qreal  dx, qreal  dy);
   QTransform  transposed(QTransform* theWrappedObject) const;
   QTransform::TransformationType  type(QTransform* theWrappedObject) const;
    QString py_toString(QTransform*);
};


