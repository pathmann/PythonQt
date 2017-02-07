#include <PythonQt.h>
#include <QAbstractTextDocumentLayout>
#include <QObject>
#include <QTextEdit>
#include <QVariant>
#include <qaction.h>
#include <qapplication.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontmetrics.h>
#include <qgesture.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpagedpaintdevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpicture.h>
#include <qpictureformatplugin.h>
#include <qpixelformat.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qplaintextedit.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qproxystyle.h>
#include <qpushbutton.h>
#include <qquaternion.h>
#include <qradiobutton.h>
#include <qrasterwindow.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qregularexpression.h>
#include <qrgba64.h>
#include <qrubberband.h>
#include <qscreen.h>
#include <qscrollarea.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qsurfaceformat.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QPictureFormatPlugin : public QPictureFormatPlugin
{
public:
    PythonQtShell_QPictureFormatPlugin(QObject*  parent = NULL):QPictureFormatPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPictureFormatPlugin();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  installIOHandler(const QString&  format);
virtual bool  loadPicture(const QString&  format, const QString&  filename, QPicture*  pic);
virtual bool  savePicture(const QString&  format, const QString&  filename, const QPicture&  pic);
virtual void timerEvent(QTimerEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPictureFormatPlugin : public QPictureFormatPlugin
{ public:
inline bool  py_q_installIOHandler(const QString&  format) { return this->installIOHandler(format); }
inline bool  py_q_loadPicture(const QString&  format, const QString&  filename, QPicture*  pic) { return QPictureFormatPlugin::loadPicture(format, filename, pic); }
inline bool  py_q_savePicture(const QString&  format, const QString&  filename, const QPicture&  pic) { return QPictureFormatPlugin::savePicture(format, filename, pic); }
};

class PythonQtWrapper_QPictureFormatPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QPictureFormatPlugin* new_QPictureFormatPlugin(QObject*  parent = NULL);
void delete_QPictureFormatPlugin(QPictureFormatPlugin* obj) { delete obj; } 
   bool  installIOHandler(QPictureFormatPlugin* theWrappedObject, const QString&  format);
   bool  py_q_installIOHandler(QPictureFormatPlugin* theWrappedObject, const QString&  format){  return (((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->py_q_installIOHandler(format));}
   bool  loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic);
   bool  py_q_loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic){  return (((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->py_q_loadPicture(format, filename, pic));}
   bool  savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic);
   bool  py_q_savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic){  return (((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->py_q_savePicture(format, filename, pic));}
};





class PythonQtWrapper_QPictureIO : public QObject
{ Q_OBJECT
public:
public slots:
QPictureIO* new_QPictureIO();
QPictureIO* new_QPictureIO(QIODevice*  ioDevice, const char*  format);
QPictureIO* new_QPictureIO(const QString&  fileName, const char*  format);
void delete_QPictureIO(QPictureIO* obj) { delete obj; } 
   QString  description(QPictureIO* theWrappedObject) const;
   QString  fileName(QPictureIO* theWrappedObject) const;
   const char*  format(QPictureIO* theWrappedObject) const;
   float  gamma(QPictureIO* theWrappedObject) const;
   QList<QByteArray >  static_QPictureIO_inputFormats();
   QIODevice*  ioDevice(QPictureIO* theWrappedObject) const;
   QList<QByteArray >  static_QPictureIO_outputFormats();
   const char*  parameters(QPictureIO* theWrappedObject) const;
   const QPicture*  picture(QPictureIO* theWrappedObject) const;
   QByteArray  static_QPictureIO_pictureFormat(QIODevice*  arg__1);
   QByteArray  static_QPictureIO_pictureFormat(const QString&  fileName);
   int  quality(QPictureIO* theWrappedObject) const;
   bool  read(QPictureIO* theWrappedObject);
   void setDescription(QPictureIO* theWrappedObject, const QString&  arg__1);
   void setFileName(QPictureIO* theWrappedObject, const QString&  arg__1);
   void setFormat(QPictureIO* theWrappedObject, const char*  arg__1);
   void setGamma(QPictureIO* theWrappedObject, float  arg__1);
   void setIODevice(QPictureIO* theWrappedObject, QIODevice*  arg__1);
   void setParameters(QPictureIO* theWrappedObject, const char*  arg__1);
   void setPicture(QPictureIO* theWrappedObject, const QPicture&  arg__1);
   void setQuality(QPictureIO* theWrappedObject, int  arg__1);
   void setStatus(QPictureIO* theWrappedObject, int  arg__1);
   int  status(QPictureIO* theWrappedObject) const;
   bool  write(QPictureIO* theWrappedObject);
};





class PythonQtShell_QPinchGesture : public QPinchGesture
{
public:
    PythonQtShell_QPinchGesture(QObject*  parent = NULL):QPinchGesture(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPinchGesture();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPinchGesture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChangeFlag )
Q_FLAGS(ChangeFlags )
enum ChangeFlag{
  ScaleFactorChanged = QPinchGesture::ScaleFactorChanged,   RotationAngleChanged = QPinchGesture::RotationAngleChanged,   CenterPointChanged = QPinchGesture::CenterPointChanged};
Q_DECLARE_FLAGS(ChangeFlags, ChangeFlag)
public slots:
QPinchGesture* new_QPinchGesture(QObject*  parent = NULL);
void delete_QPinchGesture(QPinchGesture* obj) { delete obj; } 
   QPointF  centerPoint(QPinchGesture* theWrappedObject) const;
   QPinchGesture::ChangeFlags  changeFlags(QPinchGesture* theWrappedObject) const;
   QPointF  lastCenterPoint(QPinchGesture* theWrappedObject) const;
   qreal  lastRotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  lastScaleFactor(QPinchGesture* theWrappedObject) const;
   qreal  rotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  scaleFactor(QPinchGesture* theWrappedObject) const;
   void setCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value);
   void setLastCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setLastRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setLastScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   void setRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   void setStartCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setTotalChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value);
   void setTotalRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setTotalScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   QPointF  startCenterPoint(QPinchGesture* theWrappedObject) const;
   QPinchGesture::ChangeFlags  totalChangeFlags(QPinchGesture* theWrappedObject) const;
   qreal  totalRotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  totalScaleFactor(QPinchGesture* theWrappedObject) const;
};





class PythonQtWrapper_QPixelFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AlphaPosition AlphaPremultiplied AlphaUsage ByteOrder ColorModel TypeInterpretation YUVLayout )
enum AlphaPosition{
  AtBeginning = QPixelFormat::AtBeginning,   AtEnd = QPixelFormat::AtEnd};
enum AlphaPremultiplied{
  NotPremultiplied = QPixelFormat::NotPremultiplied,   Premultiplied = QPixelFormat::Premultiplied};
enum AlphaUsage{
  UsesAlpha = QPixelFormat::UsesAlpha,   IgnoresAlpha = QPixelFormat::IgnoresAlpha};
enum ByteOrder{
  LittleEndian = QPixelFormat::LittleEndian,   BigEndian = QPixelFormat::BigEndian,   CurrentSystemEndian = QPixelFormat::CurrentSystemEndian};
enum ColorModel{
  RGB = QPixelFormat::RGB,   BGR = QPixelFormat::BGR,   Indexed = QPixelFormat::Indexed,   Grayscale = QPixelFormat::Grayscale,   CMYK = QPixelFormat::CMYK,   HSL = QPixelFormat::HSL,   HSV = QPixelFormat::HSV,   YUV = QPixelFormat::YUV,   Alpha = QPixelFormat::Alpha};
enum TypeInterpretation{
  UnsignedInteger = QPixelFormat::UnsignedInteger,   UnsignedShort = QPixelFormat::UnsignedShort,   UnsignedByte = QPixelFormat::UnsignedByte,   FloatingPoint = QPixelFormat::FloatingPoint};
enum YUVLayout{
  YUV444 = QPixelFormat::YUV444,   YUV422 = QPixelFormat::YUV422,   YUV411 = QPixelFormat::YUV411,   YUV420P = QPixelFormat::YUV420P,   YUV420SP = QPixelFormat::YUV420SP,   YV12 = QPixelFormat::YV12,   UYVY = QPixelFormat::UYVY,   YUYV = QPixelFormat::YUYV,   NV12 = QPixelFormat::NV12,   NV21 = QPixelFormat::NV21,   IMC1 = QPixelFormat::IMC1,   IMC2 = QPixelFormat::IMC2,   IMC3 = QPixelFormat::IMC3,   IMC4 = QPixelFormat::IMC4,   Y8 = QPixelFormat::Y8,   Y16 = QPixelFormat::Y16};
public slots:
QPixelFormat* new_QPixelFormat();
QPixelFormat* new_QPixelFormat(QPixelFormat::ColorModel  colorModel, uchar  firstSize, uchar  secondSize, uchar  thirdSize, uchar  fourthSize, uchar  fifthSize, uchar  alphaSize, QPixelFormat::AlphaUsage  alphaUsage, QPixelFormat::AlphaPosition  alphaPosition, QPixelFormat::AlphaPremultiplied  premultiplied, QPixelFormat::TypeInterpretation  typeInterpretation, QPixelFormat::ByteOrder  byteOrder = QPixelFormat::CurrentSystemEndian, uchar  subEnum = 0);
void delete_QPixelFormat(QPixelFormat* obj) { delete obj; } 
   QPixelFormat::AlphaPosition  alphaPosition(QPixelFormat* theWrappedObject) const;
   uchar  alphaSize(QPixelFormat* theWrappedObject) const;
   QPixelFormat::AlphaUsage  alphaUsage(QPixelFormat* theWrappedObject) const;
   uchar  bitsPerPixel(QPixelFormat* theWrappedObject) const;
   uchar  blackSize(QPixelFormat* theWrappedObject) const;
   uchar  blueSize(QPixelFormat* theWrappedObject) const;
   uchar  brightnessSize(QPixelFormat* theWrappedObject) const;
   QPixelFormat::ByteOrder  byteOrder(QPixelFormat* theWrappedObject) const;
   uchar  channelCount(QPixelFormat* theWrappedObject) const;
   QPixelFormat::ColorModel  colorModel(QPixelFormat* theWrappedObject) const;
   uchar  cyanSize(QPixelFormat* theWrappedObject) const;
   uchar  greenSize(QPixelFormat* theWrappedObject) const;
   uchar  hueSize(QPixelFormat* theWrappedObject) const;
   uchar  lightnessSize(QPixelFormat* theWrappedObject) const;
   uchar  magentaSize(QPixelFormat* theWrappedObject) const;
   QPixelFormat::AlphaPremultiplied  premultiplied(QPixelFormat* theWrappedObject) const;
   uchar  redSize(QPixelFormat* theWrappedObject) const;
   uchar  saturationSize(QPixelFormat* theWrappedObject) const;
   uchar  subEnum(QPixelFormat* theWrappedObject) const;
   QPixelFormat::TypeInterpretation  typeInterpretation(QPixelFormat* theWrappedObject) const;
   uchar  yellowSize(QPixelFormat* theWrappedObject) const;
   QPixelFormat::YUVLayout  yuvLayout(QPixelFormat* theWrappedObject) const;
};





class PythonQtShell_QPixmapCache : public QPixmapCache
{
public:
    PythonQtShell_QPixmapCache():QPixmapCache(),_wrapper(NULL) {};

   ~PythonQtShell_QPixmapCache();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPixmapCache : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache* new_QPixmapCache();
void delete_QPixmapCache(QPixmapCache* obj) { delete obj; } 
   int  static_QPixmapCache_cacheLimit();
   void static_QPixmapCache_clear();
   bool  static_QPixmapCache_find(const QPixmapCache::Key&  key, QPixmap*  pixmap);
   bool  static_QPixmapCache_find(const QString&  key, QPixmap&  pixmap);
   QPixmapCache::Key  static_QPixmapCache_insert(const QPixmap&  pixmap);
   bool  static_QPixmapCache_insert(const QString&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_remove(const QPixmapCache::Key&  key);
   void static_QPixmapCache_remove(const QString&  key);
   bool  static_QPixmapCache_replace(const QPixmapCache::Key&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_setCacheLimit(int  arg__1);
};





class PythonQtWrapper_QPixmapCache__Key : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache::Key* new_QPixmapCache__Key();
QPixmapCache::Key* new_QPixmapCache__Key(const QPixmapCache::Key&  other);
void delete_QPixmapCache__Key(QPixmapCache::Key* obj) { delete obj; } 
   bool  __ne__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
   QPixmapCache::Key*  operator_assign(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  other);
   bool  __eq__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
   void swap(QPixmapCache::Key* theWrappedObject, QPixmapCache::Key&  other);
};





class PythonQtShell_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{
public:
    PythonQtShell_QPlainTextDocumentLayout(QTextDocument*  document):QPlainTextDocumentLayout(document),_wrapper(NULL) {};

   ~PythonQtShell_QPlainTextDocumentLayout();

virtual QRectF  blockBoundingRect(const QTextBlock&  block) const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual void documentChanged(int  from, int  arg__2, int  charsAdded);
virtual QSizeF  documentSize() const;
virtual void draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2);
virtual void drawInlineObject(QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QRectF  frameBoundingRect(QTextFrame*  arg__1) const;
virtual int  hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const;
virtual int  pageCount() const;
virtual void positionInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format);
virtual void resizeInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format);
virtual void timerEvent(QTimerEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{ public:
inline void promoted_documentChanged(int  from, int  arg__2, int  charsAdded) { this->documentChanged(from, arg__2, charsAdded); }
inline QRectF  py_q_blockBoundingRect(const QTextBlock&  block) const { return QPlainTextDocumentLayout::blockBoundingRect(block); }
inline void py_q_documentChanged(int  from, int  arg__2, int  charsAdded) { QPlainTextDocumentLayout::documentChanged(from, arg__2, charsAdded); }
inline QSizeF  py_q_documentSize() const { return QPlainTextDocumentLayout::documentSize(); }
inline void py_q_draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2) { QPlainTextDocumentLayout::draw(arg__1, arg__2); }
inline QRectF  py_q_frameBoundingRect(QTextFrame*  arg__1) const { return QPlainTextDocumentLayout::frameBoundingRect(arg__1); }
inline int  py_q_hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const { return QPlainTextDocumentLayout::hitTest(arg__1, arg__2); }
inline int  py_q_pageCount() const { return QPlainTextDocumentLayout::pageCount(); }
};

class PythonQtWrapper_QPlainTextDocumentLayout : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextDocumentLayout* new_QPlainTextDocumentLayout(QTextDocument*  document);
void delete_QPlainTextDocumentLayout(QPlainTextDocumentLayout* obj) { delete obj; } 
   QRectF  py_q_blockBoundingRect(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_blockBoundingRect(block));}
   int  cursorWidth(QPlainTextDocumentLayout* theWrappedObject) const;
   void py_q_documentChanged(QPlainTextDocumentLayout* theWrappedObject, int  from, int  arg__2, int  charsAdded){  (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_documentChanged(from, arg__2, charsAdded));}
   QSizeF  py_q_documentSize(QPlainTextDocumentLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_documentSize());}
   void py_q_draw(QPlainTextDocumentLayout* theWrappedObject, QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2){  (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_draw(arg__1, arg__2));}
   void ensureBlockLayout(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   QRectF  py_q_frameBoundingRect(QPlainTextDocumentLayout* theWrappedObject, QTextFrame*  arg__1) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_frameBoundingRect(arg__1));}
   int  py_q_hitTest(QPlainTextDocumentLayout* theWrappedObject, const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_hitTest(arg__1, arg__2));}
   int  py_q_pageCount(QPlainTextDocumentLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->py_q_pageCount());}
   void requestUpdate(QPlainTextDocumentLayout* theWrappedObject);
   void setCursorWidth(QPlainTextDocumentLayout* theWrappedObject, int  width);
};





class PythonQtShell_QPlainTextEdit : public QPlainTextEdit
{
public:
    PythonQtShell_QPlainTextEdit(QWidget*  parent = NULL):QPlainTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QPlainTextEdit(const QString&  text, QWidget*  parent = NULL):QPlainTextEdit(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QPlainTextEdit();

virtual void actionEvent(QActionEvent*  event);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void doSetTextCursor(const QTextCursor&  cursor);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  event);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setVisible(bool  visible);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPlainTextEdit : public QPlainTextEdit
{ public:
inline QRectF  promoted_blockBoundingGeometry(const QTextBlock&  block) const { return this->blockBoundingGeometry(block); }
inline QRectF  promoted_blockBoundingRect(const QTextBlock&  block) const { return this->blockBoundingRect(block); }
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return this->canInsertFromMimeData(source); }
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline QPointF  promoted_contentOffset() const { return this->contentOffset(); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { this->contextMenuEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return this->createMimeDataFromSelection(); }
inline void promoted_doSetTextCursor(const QTextCursor&  cursor) { this->doSetTextCursor(cursor); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { this->dragEnterEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { this->dropEvent(e); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline QTextBlock  promoted_firstVisibleBlock() const { return this->firstVisibleBlock(); }
inline void promoted_focusInEvent(QFocusEvent*  e) { this->focusInEvent(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { this->focusOutEvent(e); }
inline QAbstractTextDocumentLayout::PaintContext  promoted_getPaintContext() const { return this->getPaintContext(); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { this->insertFromMimeData(source); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { this->keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { this->keyReleaseEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { this->mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { this->mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { this->mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  e) { this->timerEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { this->wheelEvent(e); }
inline void promoted_zoomInF(float  range) { this->zoomInF(range); }
inline bool  py_q_canInsertFromMimeData(const QMimeData*  source) const { return QPlainTextEdit::canInsertFromMimeData(source); }
inline void py_q_changeEvent(QEvent*  e) { QPlainTextEdit::changeEvent(e); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  e) { QPlainTextEdit::contextMenuEvent(e); }
inline QMimeData*  py_q_createMimeDataFromSelection() const { return QPlainTextEdit::createMimeDataFromSelection(); }
inline void py_q_doSetTextCursor(const QTextCursor&  cursor) { QPlainTextEdit::doSetTextCursor(cursor); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  e) { QPlainTextEdit::dragEnterEvent(e); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QPlainTextEdit::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QPlainTextEdit::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  e) { QPlainTextEdit::dropEvent(e); }
inline bool  py_q_event(QEvent*  e) { return QPlainTextEdit::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  e) { QPlainTextEdit::focusInEvent(e); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QPlainTextEdit::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  e) { QPlainTextEdit::focusOutEvent(e); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QPlainTextEdit::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  property) const { return QPlainTextEdit::inputMethodQuery(property); }
inline void py_q_insertFromMimeData(const QMimeData*  source) { QPlainTextEdit::insertFromMimeData(source); }
inline void py_q_keyPressEvent(QKeyEvent*  e) { QPlainTextEdit::keyPressEvent(e); }
inline void py_q_keyReleaseEvent(QKeyEvent*  e) { QPlainTextEdit::keyReleaseEvent(e); }
inline QVariant  py_q_loadResource(int  type, const QUrl&  name) { return QPlainTextEdit::loadResource(type, name); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  e) { QPlainTextEdit::mouseDoubleClickEvent(e); }
inline void py_q_mouseMoveEvent(QMouseEvent*  e) { QPlainTextEdit::mouseMoveEvent(e); }
inline void py_q_mousePressEvent(QMouseEvent*  e) { QPlainTextEdit::mousePressEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QPlainTextEdit::mouseReleaseEvent(e); }
inline void py_q_paintEvent(QPaintEvent*  e) { QPlainTextEdit::paintEvent(e); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QPlainTextEdit::resizeEvent(e); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QPlainTextEdit::scrollContentsBy(dx, dy); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QPlainTextEdit::showEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  e) { QPlainTextEdit::timerEvent(e); }
inline void py_q_wheelEvent(QWheelEvent*  e) { QPlainTextEdit::wheelEvent(e); }
};

class PythonQtWrapper_QPlainTextEdit : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LineWrapMode )
enum LineWrapMode{
  NoWrap = QPlainTextEdit::NoWrap,   WidgetWidth = QPlainTextEdit::WidgetWidth};
public slots:
QPlainTextEdit* new_QPlainTextEdit(QWidget*  parent = NULL);
QPlainTextEdit* new_QPlainTextEdit(const QString&  text, QWidget*  parent = NULL);
void delete_QPlainTextEdit(QPlainTextEdit* obj) { delete obj; } 
   QString  anchorAt(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   bool  backgroundVisible(QPlainTextEdit* theWrappedObject) const;
   QRectF  blockBoundingGeometry(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const;
   QRectF  blockBoundingRect(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const;
   int  blockCount(QPlainTextEdit* theWrappedObject) const;
   bool  canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const;
   bool  py_q_canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const{  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_canInsertFromMimeData(source));}
   bool  canPaste(QPlainTextEdit* theWrappedObject) const;
   bool  centerOnScroll(QPlainTextEdit* theWrappedObject) const;
   void py_q_changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_changeEvent(e));}
   QPointF  contentOffset(QPlainTextEdit* theWrappedObject) const;
   void py_q_contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_contextMenuEvent(e));}
   QMimeData*  createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const;
   QMimeData*  py_q_createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_createMimeDataFromSelection());}
   QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject);
   QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject, const QPoint&  position);
   QTextCharFormat  currentCharFormat(QPlainTextEdit* theWrappedObject) const;
   QTextCursor  cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   QRect  cursorRect(QPlainTextEdit* theWrappedObject) const;
   QRect  cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   int  cursorWidth(QPlainTextEdit* theWrappedObject) const;
   void doSetTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void py_q_doSetTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_doSetTextCursor(cursor));}
   QTextDocument*  document(QPlainTextEdit* theWrappedObject) const;
   QString  documentTitle(QPlainTextEdit* theWrappedObject) const;
   void py_q_dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dragEnterEvent(e));}
   void py_q_dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_dropEvent(e));}
   void ensureCursorVisible(QPlainTextEdit* theWrappedObject);
   bool  py_q_event(QPlainTextEdit* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_event(e));}
   QList<QTextEdit::ExtraSelection >  extraSelections(QPlainTextEdit* theWrappedObject) const;
   bool  find(QPlainTextEdit* theWrappedObject, const QRegExp&  exp, QTextDocument::FindFlags  options = QTextDocument::FindFlags());
   bool  find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = QTextDocument::FindFlags());
   QTextBlock  firstVisibleBlock(QPlainTextEdit* theWrappedObject) const;
   void py_q_focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_focusInEvent(e));}
   bool  py_q_focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_focusOutEvent(e));}
   QAbstractTextDocumentLayout::PaintContext  getPaintContext(QPlainTextEdit* theWrappedObject) const;
   void py_q_inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   QVariant  py_q_inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const{  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_inputMethodQuery(property));}
   QVariant  inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  query, QVariant  argument) const;
   void insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source);
   void py_q_insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_insertFromMimeData(source));}
   bool  isReadOnly(QPlainTextEdit* theWrappedObject) const;
   bool  isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const;
   void py_q_keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_keyPressEvent(e));}
   void py_q_keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_keyReleaseEvent(e));}
   QPlainTextEdit::LineWrapMode  lineWrapMode(QPlainTextEdit* theWrappedObject) const;
   QVariant  loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name);
   QVariant  py_q_loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name){  return (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_loadResource(type, name));}
   int  maximumBlockCount(QPlainTextEdit* theWrappedObject) const;
   void mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   void py_q_mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mouseDoubleClickEvent(e));}
   void py_q_mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mouseMoveEvent(e));}
   void py_q_mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mousePressEvent(e));}
   void py_q_mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   void moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   bool  overwriteMode(QPlainTextEdit* theWrappedObject) const;
   void py_q_paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_paintEvent(e));}
   QString  placeholderText(QPlainTextEdit* theWrappedObject) const;
   void print(QPlainTextEdit* theWrappedObject, QPagedPaintDevice*  printer) const;
   void py_q_resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_resizeEvent(e));}
   void py_q_scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible);
   void setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled);
   void setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void setCursorWidth(QPlainTextEdit* theWrappedObject, int  width);
   void setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document);
   void setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title);
   void setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode);
   void setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum);
   void setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite);
   void setPlaceholderText(QPlainTextEdit* theWrappedObject, const QString&  placeholderText);
   void setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro);
   void setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b);
   void setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width);
   void setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable);
   void setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void py_q_showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_showEvent(arg__1));}
   bool  tabChangesFocus(QPlainTextEdit* theWrappedObject) const;
   int  tabStopWidth(QPlainTextEdit* theWrappedObject) const;
   QTextCursor  textCursor(QPlainTextEdit* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QPlainTextEdit* theWrappedObject) const;
   void py_q_timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_timerEvent(e));}
   QString  toPlainText(QPlainTextEdit* theWrappedObject) const;
   void py_q_wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e){  (((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->py_q_wheelEvent(e));}
   QTextOption::WrapMode  wordWrapMode(QPlainTextEdit* theWrappedObject) const;
   void zoomInF(QPlainTextEdit* theWrappedObject, float  range);
};





class PythonQtShell_QPlatformSurfaceEvent : public QPlatformSurfaceEvent
{
public:
    PythonQtShell_QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType):QPlatformSurfaceEvent(surfaceEventType),_wrapper(NULL) {};

   ~PythonQtShell_QPlatformSurfaceEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPlatformSurfaceEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SurfaceEventType )
enum SurfaceEventType{
  SurfaceCreated = QPlatformSurfaceEvent::SurfaceCreated,   SurfaceAboutToBeDestroyed = QPlatformSurfaceEvent::SurfaceAboutToBeDestroyed};
public slots:
QPlatformSurfaceEvent* new_QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType);
void delete_QPlatformSurfaceEvent(QPlatformSurfaceEvent* obj) { delete obj; } 
   QPlatformSurfaceEvent::SurfaceEventType  surfaceEventType(QPlatformSurfaceEvent* theWrappedObject) const;
};





class PythonQtWrapper_QPolygonF : public QObject
{ Q_OBJECT
public:
public slots:
QPolygonF* new_QPolygonF();
QPolygonF* new_QPolygonF(const QPolygon&  a);
QPolygonF* new_QPolygonF(const QPolygonF&  a);
QPolygonF* new_QPolygonF(const QRectF&  r);
QPolygonF* new_QPolygonF(const QVector<QPointF >&  v);
QPolygonF* new_QPolygonF(int  size);
void delete_QPolygonF(QPolygonF* obj) { delete obj; } 
   void append(QPolygonF* theWrappedObject, const QPointF&  t);
   void append(QPolygonF* theWrappedObject, const QVector<QPointF >&  l);
   const QPointF*  at(QPolygonF* theWrappedObject, int  i) const;
   QRectF  boundingRect(QPolygonF* theWrappedObject) const;
   int  capacity(QPolygonF* theWrappedObject) const;
   void clear(QPolygonF* theWrappedObject);
   const QPointF*  constFirst(QPolygonF* theWrappedObject) const;
   const QPointF*  constLast(QPolygonF* theWrappedObject) const;
   bool  contains(QPolygonF* theWrappedObject, const QPointF&  t) const;
   bool  containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const;
   int  count(QPolygonF* theWrappedObject) const;
   int  count(QPolygonF* theWrappedObject, const QPointF&  t) const;
   bool  empty(QPolygonF* theWrappedObject) const;
   bool  endsWith(QPolygonF* theWrappedObject, const QPointF&  t) const;
   QVector<QPointF >*  fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size = -1);
   const QPointF*  first(QPolygonF* theWrappedObject) const;
   QVector<QPointF >  static_QPolygonF_fromList(const QList<QPointF >&  list);
   int  indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from = 0) const;
   QPolygonF  intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   bool  isClosed(QPolygonF* theWrappedObject) const;
   bool  isEmpty(QPolygonF* theWrappedObject) const;
   bool  isSharedWith(QPolygonF* theWrappedObject, const QVector<QPointF >&  other) const;
   const QPointF*  last(QPolygonF* theWrappedObject) const;
   int  lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from = -1) const;
   int  length(QPolygonF* theWrappedObject) const;
   QVector<QPointF >  mid(QPolygonF* theWrappedObject, int  pos, int  len = -1) const;
   void move(QPolygonF* theWrappedObject, int  from, int  to);
   bool  __ne__(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
   QPolygonF  __mul__(QPolygonF* theWrappedObject, const QMatrix&  m);
   QPolygonF  __mul__(QPolygonF* theWrappedObject, const QTransform&  m);
   void writeTo(QPolygonF* theWrappedObject, QDataStream&  stream);
   QPolygonF*  operator_assign(QPolygonF* theWrappedObject, const QPolygonF&  other);
   bool  __eq__(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
   void readFrom(QPolygonF* theWrappedObject, QDataStream&  stream);
   void pop_back(QPolygonF* theWrappedObject);
   void pop_front(QPolygonF* theWrappedObject);
   void prepend(QPolygonF* theWrappedObject, const QPointF&  t);
   void push_back(QPolygonF* theWrappedObject, const QPointF&  t);
   void push_front(QPolygonF* theWrappedObject, const QPointF&  t);
   void remove(QPolygonF* theWrappedObject, int  i);
   void remove(QPolygonF* theWrappedObject, int  i, int  n);
   int  removeAll(QPolygonF* theWrappedObject, const QPointF&  t);
   void removeAt(QPolygonF* theWrappedObject, int  i);
   void removeFirst(QPolygonF* theWrappedObject);
   void removeLast(QPolygonF* theWrappedObject);
   bool  removeOne(QPolygonF* theWrappedObject, const QPointF&  t);
   void replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t);
   void reserve(QPolygonF* theWrappedObject, int  size);
   void resize(QPolygonF* theWrappedObject, int  size);
   void setSharable(QPolygonF* theWrappedObject, bool  sharable);
   int  size(QPolygonF* theWrappedObject) const;
   void squeeze(QPolygonF* theWrappedObject);
   bool  startsWith(QPolygonF* theWrappedObject, const QPointF&  t) const;
   QPolygonF  subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   void swap(QPolygonF* theWrappedObject, QPolygonF&  other);
   QPointF  takeAt(QPolygonF* theWrappedObject, int  i);
   QPointF  takeFirst(QPolygonF* theWrappedObject);
   QPointF  takeLast(QPolygonF* theWrappedObject);
   QList<QPointF >  toList(QPolygonF* theWrappedObject) const;
   QPolygon  toPolygon(QPolygonF* theWrappedObject) const;
   void translate(QPolygonF* theWrappedObject, const QPointF&  offset);
   void translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy);
   QPolygonF  translated(QPolygonF* theWrappedObject, const QPointF&  offset) const;
   QPolygonF  translated(QPolygonF* theWrappedObject, qreal  dx, qreal  dy) const;
   QPolygonF  united(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   QPointF  value(QPolygonF* theWrappedObject, int  i) const;
   QPointF  value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const;
    QString py_toString(QPolygonF*);
};





class PythonQtShell_QProgressBar : public QProgressBar
{
public:
    PythonQtShell_QProgressBar(QWidget*  parent = NULL):QProgressBar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QProgressBar();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
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
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  event);
virtual QString  text() const;
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProgressBar : public QProgressBar
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initStyleOption(QStyleOptionProgressBar*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QProgressBar::event(e); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QProgressBar::paintEvent(arg__1); }
inline QString  py_q_text() const { return QProgressBar::text(); }
};

class PythonQtWrapper_QProgressBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction )
enum Direction{
  TopToBottom = QProgressBar::TopToBottom,   BottomToTop = QProgressBar::BottomToTop};
public slots:
QProgressBar* new_QProgressBar(QWidget*  parent = NULL);
void delete_QProgressBar(QProgressBar* obj) { delete obj; } 
   Qt::Alignment  alignment(QProgressBar* theWrappedObject) const;
   bool  py_q_event(QProgressBar* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->py_q_event(e));}
   QString  format(QProgressBar* theWrappedObject) const;
   void initStyleOption(QProgressBar* theWrappedObject, QStyleOptionProgressBar*  option) const;
   bool  invertedAppearance(QProgressBar* theWrappedObject) const;
   bool  isTextVisible(QProgressBar* theWrappedObject) const;
   int  maximum(QProgressBar* theWrappedObject) const;
   int  minimum(QProgressBar* theWrappedObject) const;
   QSize  minimumSizeHint(QProgressBar* theWrappedObject) const;
   Qt::Orientation  orientation(QProgressBar* theWrappedObject) const;
   void py_q_paintEvent(QProgressBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void resetFormat(QProgressBar* theWrappedObject);
   void setAlignment(QProgressBar* theWrappedObject, Qt::Alignment  alignment);
   void setFormat(QProgressBar* theWrappedObject, const QString&  format);
   void setInvertedAppearance(QProgressBar* theWrappedObject, bool  invert);
   void setTextDirection(QProgressBar* theWrappedObject, QProgressBar::Direction  textDirection);
   void setTextVisible(QProgressBar* theWrappedObject, bool  visible);
   QSize  sizeHint(QProgressBar* theWrappedObject) const;
   QString  text(QProgressBar* theWrappedObject) const;
   QString  py_q_text(QProgressBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->py_q_text());}
   QProgressBar::Direction  textDirection(QProgressBar* theWrappedObject) const;
   int  value(QProgressBar* theWrappedObject) const;
};





class PythonQtShell_QProgressDialog : public QProgressDialog
{
public:
    PythonQtShell_QProgressDialog(QWidget*  parent = NULL, Qt::WindowFlags  flags = Qt::WindowFlags()):QProgressDialog(parent, flags),_wrapper(NULL) {};
    PythonQtShell_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = NULL, Qt::WindowFlags  flags = Qt::WindowFlags()):QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QProgressDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void done(int  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProgressDialog : public QProgressDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline void promoted_forceShow() { this->forceShow(); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QProgressDialog::changeEvent(event); }
inline void py_q_closeEvent(QCloseEvent*  event) { QProgressDialog::closeEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QProgressDialog::resizeEvent(event); }
inline void py_q_showEvent(QShowEvent*  event) { QProgressDialog::showEvent(event); }
};

class PythonQtWrapper_QProgressDialog : public QObject
{ Q_OBJECT
public:
public slots:
QProgressDialog* new_QProgressDialog(QWidget*  parent = NULL, Qt::WindowFlags  flags = Qt::WindowFlags());
QProgressDialog* new_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = NULL, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QProgressDialog(QProgressDialog* obj) { delete obj; } 
   bool  autoClose(QProgressDialog* theWrappedObject) const;
   bool  autoReset(QProgressDialog* theWrappedObject) const;
   void py_q_changeEvent(QProgressDialog* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->py_q_changeEvent(event));}
   void py_q_closeEvent(QProgressDialog* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->py_q_closeEvent(event));}
   QString  labelText(QProgressDialog* theWrappedObject) const;
   int  maximum(QProgressDialog* theWrappedObject) const;
   int  minimum(QProgressDialog* theWrappedObject) const;
   int  minimumDuration(QProgressDialog* theWrappedObject) const;
   void open(QProgressDialog* theWrappedObject, QObject*  receiver, const char*  member);
   void py_q_resizeEvent(QProgressDialog* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->py_q_resizeEvent(event));}
   void setAutoClose(QProgressDialog* theWrappedObject, bool  close);
   void setAutoReset(QProgressDialog* theWrappedObject, bool  reset);
   void setBar(QProgressDialog* theWrappedObject, QProgressBar*  bar);
   void setCancelButton(QProgressDialog* theWrappedObject, QPushButton*  button);
   void setLabel(QProgressDialog* theWrappedObject, QLabel*  label);
   void py_q_showEvent(QProgressDialog* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->py_q_showEvent(event));}
   QSize  sizeHint(QProgressDialog* theWrappedObject) const;
   int  value(QProgressDialog* theWrappedObject) const;
   bool  wasCanceled(QProgressDialog* theWrappedObject) const;
};





class PythonQtShell_QProxyStyle : public QProxyStyle
{
public:
    PythonQtShell_QProxyStyle(QStyle*  style = NULL):QProxyStyle(style),_wrapper(NULL) {};
    PythonQtShell_QProxyStyle(const QString&  key):QProxyStyle(key),_wrapper(NULL) {};

   ~PythonQtShell_QProxyStyle();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual void drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget = NULL) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = NULL) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = NULL) const;
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = NULL) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual int  layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = NULL, const QWidget*  widget = NULL) const;
virtual int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = NULL, const QWidget*  widget = NULL) const;
virtual void polish(QApplication*  app);
virtual void polish(QPalette&  pal);
virtual void polish(QWidget*  widget);
virtual QSize  sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
virtual QIcon  standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = NULL, const QWidget*  widget = NULL) const;
virtual QPalette  standardPalette() const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget = NULL) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = NULL, const QWidget*  widget = NULL, QStyleHintReturn*  returnData = NULL) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
virtual QRect  subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void unpolish(QApplication*  app);
virtual void unpolish(QWidget*  widget);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProxyStyle : public QProxyStyle
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void py_q_drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget = NULL) const { QProxyStyle::drawComplexControl(control, option, painter, widget); }
inline void py_q_drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = NULL) const { QProxyStyle::drawControl(element, option, painter, widget); }
inline void py_q_drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const { QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap); }
inline void py_q_drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const { QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole); }
inline void py_q_drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = NULL) const { QProxyStyle::drawPrimitive(element, option, painter, widget); }
inline bool  py_q_event(QEvent*  e) { return QProxyStyle::event(e); }
inline QPixmap  py_q_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt); }
inline QStyle::SubControl  py_q_hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = NULL) const { return QProxyStyle::hitTestComplexControl(control, option, pos, widget); }
inline QRect  py_q_itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const { return QProxyStyle::itemPixmapRect(r, flags, pixmap); }
inline int  py_q_layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = NULL, const QWidget*  widget = NULL) const { return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget); }
inline int  py_q_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = NULL, const QWidget*  widget = NULL) const { return QProxyStyle::pixelMetric(metric, option, widget); }
inline void py_q_polish(QApplication*  app) { QProxyStyle::polish(app); }
inline void py_q_polish(QPalette&  pal) { QProxyStyle::polish(pal); }
inline void py_q_polish(QWidget*  widget) { QProxyStyle::polish(widget); }
inline QSize  py_q_sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const { return QProxyStyle::sizeFromContents(type, option, size, widget); }
inline QIcon  py_q_standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = NULL, const QWidget*  widget = NULL) const { return QProxyStyle::standardIcon(standardIcon, option, widget); }
inline QPalette  py_q_standardPalette() const { return QProxyStyle::standardPalette(); }
inline QPixmap  py_q_standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget = NULL) const { return QProxyStyle::standardPixmap(standardPixmap, opt, widget); }
inline int  py_q_styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = NULL, const QWidget*  widget = NULL, QStyleHintReturn*  returnData = NULL) const { return QProxyStyle::styleHint(hint, option, widget, returnData); }
inline QRect  py_q_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const { return QProxyStyle::subControlRect(cc, opt, sc, widget); }
inline QRect  py_q_subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const { return QProxyStyle::subElementRect(element, option, widget); }
inline void py_q_unpolish(QApplication*  app) { QProxyStyle::unpolish(app); }
inline void py_q_unpolish(QWidget*  widget) { QProxyStyle::unpolish(widget); }
};

class PythonQtWrapper_QProxyStyle : public QObject
{ Q_OBJECT
public:
public slots:
QProxyStyle* new_QProxyStyle(QStyle*  style = NULL);
QProxyStyle* new_QProxyStyle(const QString&  key);
void delete_QProxyStyle(QProxyStyle* obj) { delete obj; } 
   QStyle*  baseStyle(QProxyStyle* theWrappedObject) const;
   void py_q_drawComplexControl(QProxyStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget = NULL) const{  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_drawComplexControl(control, option, painter, widget));}
   void py_q_drawControl(QProxyStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = NULL) const{  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_drawControl(element, option, painter, widget));}
   void py_q_drawItemPixmap(QProxyStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const{  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_drawItemPixmap(painter, rect, alignment, pixmap));}
   void py_q_drawItemText(QProxyStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const{  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_drawItemText(painter, rect, flags, pal, enabled, text, textRole));}
   void py_q_drawPrimitive(QProxyStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = NULL) const{  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_drawPrimitive(element, option, painter, widget));}
   bool  py_q_event(QProxyStyle* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_event(e));}
   QPixmap  py_q_generatedIconPixmap(QProxyStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_generatedIconPixmap(iconMode, pixmap, opt));}
   QStyle::SubControl  py_q_hitTestComplexControl(QProxyStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = NULL) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_hitTestComplexControl(control, option, pos, widget));}
   QRect  py_q_itemPixmapRect(QProxyStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_itemPixmapRect(r, flags, pixmap));}
   QRect  itemTextRect(QProxyStyle* theWrappedObject, const QFontMetrics&  fm, const QRect&  r, int  flags, bool  enabled, const QString&  text) const;
   int  py_q_layoutSpacing(QProxyStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = NULL, const QWidget*  widget = NULL) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_layoutSpacing(control1, control2, orientation, option, widget));}
   int  py_q_pixelMetric(QProxyStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = NULL, const QWidget*  widget = NULL) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_pixelMetric(metric, option, widget));}
   void py_q_polish(QProxyStyle* theWrappedObject, QApplication*  app){  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_polish(app));}
   void py_q_polish(QProxyStyle* theWrappedObject, QPalette&  pal){  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_polish(pal));}
   void py_q_polish(QProxyStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_polish(widget));}
   void setBaseStyle(QProxyStyle* theWrappedObject, QStyle*  style);
   QSize  py_q_sizeFromContents(QProxyStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_sizeFromContents(type, option, size, widget));}
   QIcon  py_q_standardIcon(QProxyStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = NULL, const QWidget*  widget = NULL) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_standardIcon(standardIcon, option, widget));}
   QPalette  py_q_standardPalette(QProxyStyle* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_standardPalette());}
   QPixmap  py_q_standardPixmap(QProxyStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget = NULL) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_standardPixmap(standardPixmap, opt, widget));}
   int  py_q_styleHint(QProxyStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option = NULL, const QWidget*  widget = NULL, QStyleHintReturn*  returnData = NULL) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_styleHint(hint, option, widget, returnData));}
   QRect  py_q_subControlRect(QProxyStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_subControlRect(cc, opt, sc, widget));}
   QRect  py_q_subElementRect(QProxyStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const{  return (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_subElementRect(element, option, widget));}
   void py_q_unpolish(QProxyStyle* theWrappedObject, QApplication*  app){  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_unpolish(app));}
   void py_q_unpolish(QProxyStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->py_q_unpolish(widget));}
};





class PythonQtShell_QPushButton : public QPushButton
{
public:
    PythonQtShell_QPushButton(QWidget*  parent = NULL):QPushButton(parent),_wrapper(NULL) {};
    PythonQtShell_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent = NULL):QPushButton(icon, text, parent),_wrapper(NULL) {};
    PythonQtShell_QPushButton(const QString&  text, QWidget*  parent = NULL):QPushButton(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QPushButton();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPushButton : public QPushButton
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { this->focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionButton*  option) const { this->initStyleOption(option); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QPushButton::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  arg__1) { QPushButton::focusInEvent(arg__1); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QPushButton::focusOutEvent(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QPushButton::keyPressEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QPushButton::paintEvent(arg__1); }
};

class PythonQtWrapper_QPushButton : public QObject
{ Q_OBJECT
public:
public slots:
QPushButton* new_QPushButton(QWidget*  parent = NULL);
QPushButton* new_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent = NULL);
QPushButton* new_QPushButton(const QString&  text, QWidget*  parent = NULL);
void delete_QPushButton(QPushButton* obj) { delete obj; } 
   bool  autoDefault(QPushButton* theWrappedObject) const;
   bool  py_q_event(QPushButton* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_event(e));}
   void py_q_focusInEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_focusInEvent(arg__1));}
   void py_q_focusOutEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   void initStyleOption(QPushButton* theWrappedObject, QStyleOptionButton*  option) const;
   bool  isDefault(QPushButton* theWrappedObject) const;
   bool  isFlat(QPushButton* theWrappedObject) const;
   void py_q_keyPressEvent(QPushButton* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   QMenu*  menu(QPushButton* theWrappedObject) const;
   QSize  minimumSizeHint(QPushButton* theWrappedObject) const;
   void py_q_paintEvent(QPushButton* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void setAutoDefault(QPushButton* theWrappedObject, bool  arg__1);
   void setDefault(QPushButton* theWrappedObject, bool  arg__1);
   void setFlat(QPushButton* theWrappedObject, bool  arg__1);
   void setMenu(QPushButton* theWrappedObject, QMenu*  menu);
   QSize  sizeHint(QPushButton* theWrappedObject) const;
};





class PythonQtWrapper_QQuaternion : public QObject
{ Q_OBJECT
public:
public slots:
QQuaternion* new_QQuaternion();
QQuaternion* new_QQuaternion(const QVector4D&  vector);
QQuaternion* new_QQuaternion(float  scalar, const QVector3D&  vector);
QQuaternion* new_QQuaternion(float  scalar, float  xpos, float  ypos, float  zpos);
QQuaternion* new_QQuaternion(const QQuaternion& other) {
QQuaternion* a = new QQuaternion();
*((QQuaternion*)a) = other;
return a; }
void delete_QQuaternion(QQuaternion* obj) { delete obj; } 
   QQuaternion  conjugate(QQuaternion* theWrappedObject) const;
   QQuaternion  conjugated(QQuaternion* theWrappedObject) const;
   float  static_QQuaternion_dotProduct(const QQuaternion&  q1, const QQuaternion&  q2);
   QQuaternion  static_QQuaternion_fromAxes(const QVector3D&  xAxis, const QVector3D&  yAxis, const QVector3D&  zAxis);
   QQuaternion  static_QQuaternion_fromAxisAndAngle(const QVector3D&  axis, float  angle);
   QQuaternion  static_QQuaternion_fromAxisAndAngle(float  x, float  y, float  z, float  angle);
   QQuaternion  static_QQuaternion_fromDirection(const QVector3D&  direction, const QVector3D&  up);
   QQuaternion  static_QQuaternion_fromEulerAngles(const QVector3D&  eulerAngles);
   QQuaternion  static_QQuaternion_fromEulerAngles(float  pitch, float  yaw, float  roll);
   void getAxes(QQuaternion* theWrappedObject, QVector3D*  xAxis, QVector3D*  yAxis, QVector3D*  zAxis) const;
   void getAxisAndAngle(QQuaternion* theWrappedObject, QVector3D*  axis, float*  angle) const;
   void getAxisAndAngle(QQuaternion* theWrappedObject, float*  x, float*  y, float*  z, float*  angle) const;
   void getEulerAngles(QQuaternion* theWrappedObject, float*  pitch, float*  yaw, float*  roll) const;
   QQuaternion  inverted(QQuaternion* theWrappedObject) const;
   bool  isIdentity(QQuaternion* theWrappedObject) const;
   bool  isNull(QQuaternion* theWrappedObject) const;
   float  length(QQuaternion* theWrappedObject) const;
   float  lengthSquared(QQuaternion* theWrappedObject) const;
   QQuaternion  static_QQuaternion_nlerp(const QQuaternion&  q1, const QQuaternion&  q2, float  t);
   void normalize(QQuaternion* theWrappedObject);
   QQuaternion  normalized(QQuaternion* theWrappedObject) const;
   const QQuaternion  __mul__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QVector3D  __mul__(QQuaternion* theWrappedObject, const QVector3D&  vec);
   const QQuaternion  __mul__(QQuaternion* theWrappedObject, float  factor);
   QQuaternion*  __imul__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   QQuaternion*  __imul__(QQuaternion* theWrappedObject, float  factor);
   const QQuaternion  __add__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QQuaternion*  __iadd__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   const QQuaternion  __sub__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QQuaternion*  __isub__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   const QQuaternion  __div__(QQuaternion* theWrappedObject, float  divisor);
   QQuaternion*  __idiv__(QQuaternion* theWrappedObject, float  divisor);
   void writeTo(QQuaternion* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   void readFrom(QQuaternion* theWrappedObject, QDataStream&  arg__1);
   QVector3D  rotatedVector(QQuaternion* theWrappedObject, const QVector3D&  vector) const;
   QQuaternion  static_QQuaternion_rotationTo(const QVector3D&  from, const QVector3D&  to);
   float  scalar(QQuaternion* theWrappedObject) const;
   void setScalar(QQuaternion* theWrappedObject, float  scalar);
   void setVector(QQuaternion* theWrappedObject, const QVector3D&  vector);
   void setVector(QQuaternion* theWrappedObject, float  x, float  y, float  z);
   void setX(QQuaternion* theWrappedObject, float  x);
   void setY(QQuaternion* theWrappedObject, float  y);
   void setZ(QQuaternion* theWrappedObject, float  z);
   QQuaternion  static_QQuaternion_slerp(const QQuaternion&  q1, const QQuaternion&  q2, float  t);
   QVector3D  toEulerAngles(QQuaternion* theWrappedObject) const;
   QVector4D  toVector4D(QQuaternion* theWrappedObject) const;
   QVector3D  vector(QQuaternion* theWrappedObject) const;
   float  x(QQuaternion* theWrappedObject) const;
   float  y(QQuaternion* theWrappedObject) const;
   float  z(QQuaternion* theWrappedObject) const;
    QString py_toString(QQuaternion*);
    bool __nonzero__(QQuaternion* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QRadialGradient : public QObject
{ Q_OBJECT
public:
public slots:
QRadialGradient* new_QRadialGradient();
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  centerRadius, const QPointF&  focalPoint, qreal  focalRadius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius, const QPointF&  focalPoint);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  centerRadius, qreal  fx, qreal  fy, qreal  focalRadius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius, qreal  fx, qreal  fy);
QRadialGradient* new_QRadialGradient(const QRadialGradient& other) {
QRadialGradient* a = new QRadialGradient();
*((QRadialGradient*)a) = other;
return a; }
void delete_QRadialGradient(QRadialGradient* obj) { delete obj; } 
   QPointF  center(QRadialGradient* theWrappedObject) const;
   qreal  centerRadius(QRadialGradient* theWrappedObject) const;
   QPointF  focalPoint(QRadialGradient* theWrappedObject) const;
   qreal  focalRadius(QRadialGradient* theWrappedObject) const;
   qreal  radius(QRadialGradient* theWrappedObject) const;
   void setCenter(QRadialGradient* theWrappedObject, const QPointF&  center);
   void setCenter(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
   void setCenterRadius(QRadialGradient* theWrappedObject, qreal  radius);
   void setFocalPoint(QRadialGradient* theWrappedObject, const QPointF&  focalPoint);
   void setFocalPoint(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
   void setFocalRadius(QRadialGradient* theWrappedObject, qreal  radius);
   void setRadius(QRadialGradient* theWrappedObject, qreal  radius);
};





class PythonQtShell_QRadioButton : public QRadioButton
{
public:
    PythonQtShell_QRadioButton(QWidget*  parent = NULL):QRadioButton(parent),_wrapper(NULL) {};
    PythonQtShell_QRadioButton(const QString&  text, QWidget*  parent = NULL):QRadioButton(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QRadioButton();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual bool  hitButton(const QPoint&  arg__1) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRadioButton : public QRadioButton
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_hitButton(const QPoint&  arg__1) const { return this->hitButton(arg__1); }
inline void promoted_initStyleOption(QStyleOptionButton*  button) const { this->initStyleOption(button); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QRadioButton::event(e); }
inline bool  py_q_hitButton(const QPoint&  arg__1) const { return QRadioButton::hitButton(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QRadioButton::mouseMoveEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QRadioButton::paintEvent(arg__1); }
};

class PythonQtWrapper_QRadioButton : public QObject
{ Q_OBJECT
public:
public slots:
QRadioButton* new_QRadioButton(QWidget*  parent = NULL);
QRadioButton* new_QRadioButton(const QString&  text, QWidget*  parent = NULL);
void delete_QRadioButton(QRadioButton* obj) { delete obj; } 
   bool  py_q_event(QRadioButton* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_event(e));}
   bool  py_q_hitButton(QRadioButton* theWrappedObject, const QPoint&  arg__1) const{  return (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_hitButton(arg__1));}
   void initStyleOption(QRadioButton* theWrappedObject, QStyleOptionButton*  button) const;
   QSize  minimumSizeHint(QRadioButton* theWrappedObject) const;
   void py_q_mouseMoveEvent(QRadioButton* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_paintEvent(QRadioButton* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QSize  sizeHint(QRadioButton* theWrappedObject) const;
};





class PythonQtShell_QRasterWindow : public QRasterWindow
{
public:
    PythonQtShell_QRasterWindow(QWindow*  parent = NULL):QRasterWindow(parent),_wrapper(NULL) {};

   ~PythonQtShell_QRasterWindow();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void exposeEvent(QExposeEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QObject*  focusObject() const;
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QSurfaceFormat  format() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  size() const;
virtual QSurface::SurfaceType  surfaceType() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual void touchEvent(QTouchEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRasterWindow : public QRasterWindow
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QPaintDevice*  promoted_redirected(QPoint*  arg__1) const { return this->redirected(arg__1); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QRasterWindow::metric(metric); }
};

class PythonQtWrapper_QRasterWindow : public QObject
{ Q_OBJECT
public:
public slots:
QRasterWindow* new_QRasterWindow(QWindow*  parent = NULL);
void delete_QRasterWindow(QRasterWindow* obj) { delete obj; } 
   int  py_q_metric(QRasterWindow* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QRasterWindow*)theWrappedObject)->py_q_metric(metric));}
   QPaintDevice*  redirected(QRasterWindow* theWrappedObject, QPoint*  arg__1) const;
};





class PythonQtWrapper_QRawFont : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AntialiasingType LayoutFlag )
Q_FLAGS(LayoutFlags )
enum AntialiasingType{
  PixelAntialiasing = QRawFont::PixelAntialiasing,   SubPixelAntialiasing = QRawFont::SubPixelAntialiasing};
enum LayoutFlag{
  SeparateAdvances = QRawFont::SeparateAdvances,   KernedAdvances = QRawFont::KernedAdvances,   UseDesignMetrics = QRawFont::UseDesignMetrics};
Q_DECLARE_FLAGS(LayoutFlags, LayoutFlag)
public slots:
QRawFont* new_QRawFont();
QRawFont* new_QRawFont(const QByteArray&  fontData, qreal  pixelSize, QFont::HintingPreference  hintingPreference = QFont::PreferDefaultHinting);
QRawFont* new_QRawFont(const QRawFont&  other);
QRawFont* new_QRawFont(const QString&  fileName, qreal  pixelSize, QFont::HintingPreference  hintingPreference = QFont::PreferDefaultHinting);
void delete_QRawFont(QRawFont* obj) { delete obj; } 
   QVector<QPointF >  advancesForGlyphIndexes(QRawFont* theWrappedObject, const QVector<unsigned int >&  glyphIndexes) const;
   QVector<QPointF >  advancesForGlyphIndexes(QRawFont* theWrappedObject, const QVector<unsigned int >&  glyphIndexes, QRawFont::LayoutFlags  layoutFlags) const;
   bool  advancesForGlyphIndexes(QRawFont* theWrappedObject, const unsigned int*  glyphIndexes, QPointF*  advances, int  numGlyphs) const;
   bool  advancesForGlyphIndexes(QRawFont* theWrappedObject, const unsigned int*  glyphIndexes, QPointF*  advances, int  numGlyphs, QRawFont::LayoutFlags  layoutFlags) const;
   QImage  alphaMapForGlyph(QRawFont* theWrappedObject, unsigned int  glyphIndex, QRawFont::AntialiasingType  antialiasingType = QRawFont::SubPixelAntialiasing, const QTransform&  transform = QTransform()) const;
   qreal  ascent(QRawFont* theWrappedObject) const;
   qreal  averageCharWidth(QRawFont* theWrappedObject) const;
   QRectF  boundingRect(QRawFont* theWrappedObject, unsigned int  glyphIndex) const;
   qreal  descent(QRawFont* theWrappedObject) const;
   QString  familyName(QRawFont* theWrappedObject) const;
   QByteArray  fontTable(QRawFont* theWrappedObject, const char*  tagName) const;
   QRawFont  static_QRawFont_fromFont(const QFont&  font, QFontDatabase::WritingSystem  writingSystem = QFontDatabase::Any);
   bool  glyphIndexesForChars(QRawFont* theWrappedObject, const QChar*  chars, int  numChars, unsigned int*  glyphIndexes, int*  numGlyphs) const;
   QVector<unsigned int >  glyphIndexesForString(QRawFont* theWrappedObject, const QString&  text) const;
   QFont::HintingPreference  hintingPreference(QRawFont* theWrappedObject) const;
   bool  isValid(QRawFont* theWrappedObject) const;
   qreal  leading(QRawFont* theWrappedObject) const;
   qreal  lineThickness(QRawFont* theWrappedObject) const;
   void loadFromData(QRawFont* theWrappedObject, const QByteArray&  fontData, qreal  pixelSize, QFont::HintingPreference  hintingPreference);
   void loadFromFile(QRawFont* theWrappedObject, const QString&  fileName, qreal  pixelSize, QFont::HintingPreference  hintingPreference);
   qreal  maxCharWidth(QRawFont* theWrappedObject) const;
   bool  __ne__(QRawFont* theWrappedObject, const QRawFont&  other) const;
   QRawFont*  operator_assign(QRawFont* theWrappedObject, const QRawFont&  other);
   bool  __eq__(QRawFont* theWrappedObject, const QRawFont&  other) const;
   QPainterPath  pathForGlyph(QRawFont* theWrappedObject, unsigned int  glyphIndex) const;
   qreal  pixelSize(QRawFont* theWrappedObject) const;
   void setPixelSize(QRawFont* theWrappedObject, qreal  pixelSize);
   QFont::Style  style(QRawFont* theWrappedObject) const;
   QString  styleName(QRawFont* theWrappedObject) const;
   QList<QFontDatabase::WritingSystem >  supportedWritingSystems(QRawFont* theWrappedObject) const;
   bool  supportsCharacter(QRawFont* theWrappedObject, QChar  character) const;
   bool  supportsCharacter(QRawFont* theWrappedObject, uint  ucs4) const;
   void swap(QRawFont* theWrappedObject, QRawFont&  other);
   qreal  underlinePosition(QRawFont* theWrappedObject) const;
   qreal  unitsPerEm(QRawFont* theWrappedObject) const;
   int  weight(QRawFont* theWrappedObject) const;
   qreal  xHeight(QRawFont* theWrappedObject) const;
};





class PythonQtShell_QRegExpValidator : public QRegExpValidator
{
public:
    PythonQtShell_QRegExpValidator(QObject*  parent = NULL):QRegExpValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QRegExpValidator(const QRegExp&  rx, QObject*  parent = NULL):QRegExpValidator(rx, parent),_wrapper(NULL) {};

   ~PythonQtShell_QRegExpValidator();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRegExpValidator : public QRegExpValidator
{ public:
inline QValidator::State  py_q_validate(QString&  input, int&  pos) const { return QRegExpValidator::validate(input, pos); }
};

class PythonQtWrapper_QRegExpValidator : public QObject
{ Q_OBJECT
public:
public slots:
QRegExpValidator* new_QRegExpValidator(QObject*  parent = NULL);
QRegExpValidator* new_QRegExpValidator(const QRegExp&  rx, QObject*  parent = NULL);
void delete_QRegExpValidator(QRegExpValidator* obj) { delete obj; } 
   const QRegExp*  regExp(QRegExpValidator* theWrappedObject) const;
   void setRegExp(QRegExpValidator* theWrappedObject, const QRegExp&  rx);
   QValidator::State  py_q_validate(QRegExpValidator* theWrappedObject, QString&  input, int&  pos) const{  return (((PythonQtPublicPromoter_QRegExpValidator*)theWrappedObject)->py_q_validate(input, pos));}
};





class PythonQtShell_QRegularExpressionValidator : public QRegularExpressionValidator
{
public:
    PythonQtShell_QRegularExpressionValidator(QObject*  parent = NULL):QRegularExpressionValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QRegularExpressionValidator(const QRegularExpression&  re, QObject*  parent = NULL):QRegularExpressionValidator(re, parent),_wrapper(NULL) {};

   ~PythonQtShell_QRegularExpressionValidator();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRegularExpressionValidator : public QRegularExpressionValidator
{ public:
inline QValidator::State  py_q_validate(QString&  input, int&  pos) const { return QRegularExpressionValidator::validate(input, pos); }
};

class PythonQtWrapper_QRegularExpressionValidator : public QObject
{ Q_OBJECT
public:
public slots:
QRegularExpressionValidator* new_QRegularExpressionValidator(QObject*  parent = NULL);
QRegularExpressionValidator* new_QRegularExpressionValidator(const QRegularExpression&  re, QObject*  parent = NULL);
void delete_QRegularExpressionValidator(QRegularExpressionValidator* obj) { delete obj; } 
   QRegularExpression  regularExpression(QRegularExpressionValidator* theWrappedObject) const;
   QValidator::State  py_q_validate(QRegularExpressionValidator* theWrappedObject, QString&  input, int&  pos) const{  return (((PythonQtPublicPromoter_QRegularExpressionValidator*)theWrappedObject)->py_q_validate(input, pos));}
};





class PythonQtShell_QResizeEvent : public QResizeEvent
{
public:
    PythonQtShell_QResizeEvent(const QSize&  size, const QSize&  oldSize):QResizeEvent(size, oldSize),_wrapper(NULL) {};

   ~PythonQtShell_QResizeEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QResizeEvent* new_QResizeEvent(const QSize&  size, const QSize&  oldSize);
void delete_QResizeEvent(QResizeEvent* obj) { delete obj; } 
   const QSize*  oldSize(QResizeEvent* theWrappedObject) const;
   const QSize*  size(QResizeEvent* theWrappedObject) const;
};





class PythonQtShell_QRgba64 : public QRgba64
{
public:
    PythonQtShell_QRgba64():QRgba64(),_wrapper(NULL) {};

   ~PythonQtShell_QRgba64();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QRgba64 : public QObject
{ Q_OBJECT
public:
public slots:
QRgba64* new_QRgba64();
QRgba64* new_QRgba64(const QRgba64& other) {
PythonQtShell_QRgba64* a = new PythonQtShell_QRgba64();
*((QRgba64*)a) = other;
return a; }
void delete_QRgba64(QRgba64* obj) { delete obj; } 
   unsigned short  alpha(QRgba64* theWrappedObject) const;
   unsigned char  alpha8(QRgba64* theWrappedObject) const;
   unsigned short  blue(QRgba64* theWrappedObject) const;
   unsigned char  blue8(QRgba64* theWrappedObject) const;
   QRgba64  static_QRgba64_fromArgb32(uint  rgb);
   QRgba64  static_QRgba64_fromRgba(unsigned char  red, unsigned char  green, unsigned char  blue, unsigned char  alpha);
   QRgba64  static_QRgba64_fromRgba64(quint64  c);
   QRgba64  static_QRgba64_fromRgba64(unsigned short  red, unsigned short  green, unsigned short  blue, unsigned short  alpha);
   unsigned short  green(QRgba64* theWrappedObject) const;
   unsigned char  green8(QRgba64* theWrappedObject) const;
   bool  isOpaque(QRgba64* theWrappedObject) const;
   bool  isTransparent(QRgba64* theWrappedObject) const;
   QRgba64  operator_assign(QRgba64* theWrappedObject, quint64  _rgba);
   QRgba64  premultiplied(QRgba64* theWrappedObject) const;
   unsigned short  red(QRgba64* theWrappedObject) const;
   unsigned char  red8(QRgba64* theWrappedObject) const;
   void setAlpha(QRgba64* theWrappedObject, unsigned short  _alpha);
   void setBlue(QRgba64* theWrappedObject, unsigned short  _blue);
   void setGreen(QRgba64* theWrappedObject, unsigned short  _green);
   void setRed(QRgba64* theWrappedObject, unsigned short  _red);
   uint  toArgb32(QRgba64* theWrappedObject) const;
   ushort  toRgb16(QRgba64* theWrappedObject) const;
   QRgba64  unpremultiplied(QRgba64* theWrappedObject) const;
};





class PythonQtShell_QRubberBand : public QRubberBand
{
public:
    PythonQtShell_QRubberBand(QRubberBand::Shape  arg__1, QWidget*  arg__2 = NULL):QRubberBand(arg__1, arg__2),_wrapper(NULL) {};

   ~PythonQtShell_QRubberBand();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
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
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRubberBand : public QRubberBand
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initStyleOption(QStyleOptionRubberBand*  option) const { this->initStyleOption(option); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { this->moveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QRubberBand::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QRubberBand::event(e); }
inline void py_q_moveEvent(QMoveEvent*  arg__1) { QRubberBand::moveEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QRubberBand::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QRubberBand::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QRubberBand::showEvent(arg__1); }
};

class PythonQtWrapper_QRubberBand : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Shape )
enum Shape{
  Line = QRubberBand::Line,   Rectangle = QRubberBand::Rectangle};
public slots:
QRubberBand* new_QRubberBand(QRubberBand::Shape  arg__1, QWidget*  arg__2 = NULL);
void delete_QRubberBand(QRubberBand* obj) { delete obj; } 
   void py_q_changeEvent(QRubberBand* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_changeEvent(arg__1));}
   bool  py_q_event(QRubberBand* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_event(e));}
   void initStyleOption(QRubberBand* theWrappedObject, QStyleOptionRubberBand*  option) const;
   void move(QRubberBand* theWrappedObject, const QPoint&  p);
   void move(QRubberBand* theWrappedObject, int  x, int  y);
   void py_q_moveEvent(QRubberBand* theWrappedObject, QMoveEvent*  arg__1){  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_moveEvent(arg__1));}
   void py_q_paintEvent(QRubberBand* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void resize(QRubberBand* theWrappedObject, const QSize&  s);
   void resize(QRubberBand* theWrappedObject, int  w, int  h);
   void py_q_resizeEvent(QRubberBand* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setGeometry(QRubberBand* theWrappedObject, const QRect&  r);
   void setGeometry(QRubberBand* theWrappedObject, int  x, int  y, int  w, int  h);
   QRubberBand::Shape  shape(QRubberBand* theWrappedObject) const;
   void py_q_showEvent(QRubberBand* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->py_q_showEvent(arg__1));}
};





class PythonQtWrapper_QScreen : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QScreen(QScreen* obj) { delete obj; } 
   int  angleBetween(QScreen* theWrappedObject, Qt::ScreenOrientation  a, Qt::ScreenOrientation  b) const;
   QRect  availableGeometry(QScreen* theWrappedObject) const;
   QSize  availableSize(QScreen* theWrappedObject) const;
   QRect  availableVirtualGeometry(QScreen* theWrappedObject) const;
   QSize  availableVirtualSize(QScreen* theWrappedObject) const;
   int  depth(QScreen* theWrappedObject) const;
   qreal  devicePixelRatio(QScreen* theWrappedObject) const;
   QRect  geometry(QScreen* theWrappedObject) const;
   QPixmap  grabWindow(QScreen* theWrappedObject, WId  window, int  x = 0, int  y = 0, int  w = -1, int  h = -1);
   bool  isLandscape(QScreen* theWrappedObject, Qt::ScreenOrientation  orientation) const;
   bool  isPortrait(QScreen* theWrappedObject, Qt::ScreenOrientation  orientation) const;
   qreal  logicalDotsPerInch(QScreen* theWrappedObject) const;
   qreal  logicalDotsPerInchX(QScreen* theWrappedObject) const;
   qreal  logicalDotsPerInchY(QScreen* theWrappedObject) const;
   QRect  mapBetween(QScreen* theWrappedObject, Qt::ScreenOrientation  a, Qt::ScreenOrientation  b, const QRect&  rect) const;
   QString  name(QScreen* theWrappedObject) const;
   Qt::ScreenOrientation  nativeOrientation(QScreen* theWrappedObject) const;
   Qt::ScreenOrientation  orientation(QScreen* theWrappedObject) const;
   Qt::ScreenOrientations  orientationUpdateMask(QScreen* theWrappedObject) const;
   qreal  physicalDotsPerInch(QScreen* theWrappedObject) const;
   qreal  physicalDotsPerInchX(QScreen* theWrappedObject) const;
   qreal  physicalDotsPerInchY(QScreen* theWrappedObject) const;
   QSizeF  physicalSize(QScreen* theWrappedObject) const;
   Qt::ScreenOrientation  primaryOrientation(QScreen* theWrappedObject) const;
   qreal  refreshRate(QScreen* theWrappedObject) const;
   void setOrientationUpdateMask(QScreen* theWrappedObject, Qt::ScreenOrientations  mask);
   QSize  size(QScreen* theWrappedObject) const;
   QTransform  transformBetween(QScreen* theWrappedObject, Qt::ScreenOrientation  a, Qt::ScreenOrientation  b, const QRect&  target) const;
   QRect  virtualGeometry(QScreen* theWrappedObject) const;
   QList<QScreen* >  virtualSiblings(QScreen* theWrappedObject) const;
   QSize  virtualSize(QScreen* theWrappedObject) const;
    QString py_toString(QScreen*);
};





class PythonQtWrapper_QScreenOrientationChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QScreenOrientationChangeEvent* new_QScreenOrientationChangeEvent(QScreen*  screen, Qt::ScreenOrientation  orientation);
void delete_QScreenOrientationChangeEvent(QScreenOrientationChangeEvent* obj) { delete obj; } 
   Qt::ScreenOrientation  orientation(QScreenOrientationChangeEvent* theWrappedObject) const;
   QScreen*  screen(QScreenOrientationChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QScrollArea : public QScrollArea
{
public:
    PythonQtShell_QScrollArea(QWidget*  parent = NULL):QScrollArea(parent),_wrapper(NULL) {};

   ~PythonQtShell_QScrollArea();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setVisible(bool  visible);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QScrollArea : public QScrollArea
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline QSize  promoted_viewportSizeHint() const { return this->viewportSizeHint(); }
inline bool  py_q_event(QEvent*  arg__1) { return QScrollArea::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QScrollArea::eventFilter(arg__1, arg__2); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QScrollArea::focusNextPrevChild(next); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QScrollArea::resizeEvent(arg__1); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QScrollArea::scrollContentsBy(dx, dy); }
inline QSize  py_q_viewportSizeHint() const { return QScrollArea::viewportSizeHint(); }
};

class PythonQtWrapper_QScrollArea : public QObject
{ Q_OBJECT
public:
public slots:
QScrollArea* new_QScrollArea(QWidget*  parent = NULL);
void delete_QScrollArea(QScrollArea* obj) { delete obj; } 
   Qt::Alignment  alignment(QScrollArea* theWrappedObject) const;
   void ensureVisible(QScrollArea* theWrappedObject, int  x, int  y, int  xmargin = 50, int  ymargin = 50);
   void ensureWidgetVisible(QScrollArea* theWrappedObject, QWidget*  childWidget, int  xmargin = 50, int  ymargin = 50);
   bool  py_q_event(QScrollArea* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QScrollArea* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   bool  py_q_focusNextPrevChild(QScrollArea* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_resizeEvent(QScrollArea* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void py_q_scrollContentsBy(QScrollArea* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void setAlignment(QScrollArea* theWrappedObject, Qt::Alignment  arg__1);
   void setWidget(QScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setWidgetResizable(QScrollArea* theWrappedObject, bool  resizable);
   QSize  sizeHint(QScrollArea* theWrappedObject) const;
   QWidget*  takeWidget(QScrollArea* theWrappedObject);
   QSize  py_q_viewportSizeHint(QScrollArea* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->py_q_viewportSizeHint());}
   QWidget*  widget(QScrollArea* theWrappedObject) const;
   bool  widgetResizable(QScrollArea* theWrappedObject) const;
};





class PythonQtShell_QScrollBar : public QScrollBar
{
public:
    PythonQtShell_QScrollBar(QWidget*  parent = NULL):QScrollBar(parent),_wrapper(NULL) {};
    PythonQtShell_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent = NULL):QScrollBar(arg__1, parent),_wrapper(NULL) {};

   ~PythonQtShell_QScrollBar();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QScrollBar : public QScrollBar
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { this->contextMenuEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionSlider*  option) const { this->initStyleOption(option); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_sliderChange(int  change) { this->sliderChange((QAbstractSlider::SliderChange)change); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { this->wheelEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  arg__1) { QScrollBar::contextMenuEvent(arg__1); }
inline bool  py_q_event(QEvent*  event) { return QScrollBar::event(event); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QScrollBar::hideEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QScrollBar::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QScrollBar::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QScrollBar::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QScrollBar::paintEvent(arg__1); }
inline void py_q_wheelEvent(QWheelEvent*  arg__1) { QScrollBar::wheelEvent(arg__1); }
};

class PythonQtWrapper_QScrollBar : public QObject
{ Q_OBJECT
public:
public slots:
QScrollBar* new_QScrollBar(QWidget*  parent = NULL);
QScrollBar* new_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent = NULL);
void delete_QScrollBar(QScrollBar* obj) { delete obj; } 
   void py_q_contextMenuEvent(QScrollBar* theWrappedObject, QContextMenuEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_contextMenuEvent(arg__1));}
   bool  py_q_event(QScrollBar* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_event(event));}
   void py_q_hideEvent(QScrollBar* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_hideEvent(arg__1));}
   void initStyleOption(QScrollBar* theWrappedObject, QStyleOptionSlider*  option) const;
   void py_q_mouseMoveEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_paintEvent(QScrollBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QSize  sizeHint(QScrollBar* theWrappedObject) const;
   void sliderChange(QScrollBar* theWrappedObject, int  change);
   void py_q_wheelEvent(QScrollBar* theWrappedObject, QWheelEvent*  arg__1){  (((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->py_q_wheelEvent(arg__1));}
};





class PythonQtWrapper_QScrollEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ScrollState )
enum ScrollState{
  ScrollStarted = QScrollEvent::ScrollStarted,   ScrollUpdated = QScrollEvent::ScrollUpdated,   ScrollFinished = QScrollEvent::ScrollFinished};
public slots:
QScrollEvent* new_QScrollEvent(const QPointF&  contentPos, const QPointF&  overshoot, QScrollEvent::ScrollState  scrollState);
void delete_QScrollEvent(QScrollEvent* obj) { delete obj; } 
   QPointF  contentPos(QScrollEvent* theWrappedObject) const;
   QPointF  overshootDistance(QScrollEvent* theWrappedObject) const;
   QScrollEvent::ScrollState  scrollState(QScrollEvent* theWrappedObject) const;
};





class PythonQtWrapper_QScrollPrepareEvent : public QObject
{ Q_OBJECT
public:
public slots:
QScrollPrepareEvent* new_QScrollPrepareEvent(const QPointF&  startPos);
void delete_QScrollPrepareEvent(QScrollPrepareEvent* obj) { delete obj; } 
   QPointF  contentPos(QScrollPrepareEvent* theWrappedObject) const;
   QRectF  contentPosRange(QScrollPrepareEvent* theWrappedObject) const;
   void setContentPos(QScrollPrepareEvent* theWrappedObject, const QPointF&  pos);
   void setContentPosRange(QScrollPrepareEvent* theWrappedObject, const QRectF&  rect);
   void setViewportSize(QScrollPrepareEvent* theWrappedObject, const QSizeF&  size);
   QPointF  startPos(QScrollPrepareEvent* theWrappedObject) const;
   QSizeF  viewportSize(QScrollPrepareEvent* theWrappedObject) const;
};


