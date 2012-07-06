/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _WINGDI_
#define _WINGDI_

#include <_mingw_unicode.h>

#ifdef _GDI32_
#define WINGDIAPI
#else
#define WINGDIAPI DECLSPEC_IMPORT
#endif

#ifdef _SPOOL32_
#define WINSPOOLAPI
#else
#define WINSPOOLAPI DECLSPEC_IMPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef WINVER
#define WINVER 0x0502
#endif

#ifndef NOGDI
#ifndef NORASTEROPS
#define R2_BLACK 1
#define R2_NOTMERGEPEN 2
#define R2_MASKNOTPEN 3
#define R2_NOTCOPYPEN 4
#define R2_MASKPENNOT 5
#define R2_NOT 6
#define R2_XORPEN 7
#define R2_NOTMASKPEN 8
#define R2_MASKPEN 9
#define R2_NOTXORPEN 10
#define R2_NOP 11
#define R2_MERGENOTPEN 12
#define R2_COPYPEN 13
#define R2_MERGEPENNOT 14
#define R2_MERGEPEN 15
#define R2_WHITE 16
#define R2_LAST 16

#define SRCCOPY (DWORD)0x00CC0020
#define SRCPAINT (DWORD)0x00EE0086
#define SRCAND (DWORD)0x008800C6
#define SRCINVERT (DWORD)0x00660046
#define SRCERASE (DWORD)0x00440328
#define NOTSRCCOPY (DWORD)0x00330008
#define NOTSRCERASE (DWORD)0x001100A6
#define MERGECOPY (DWORD)0x00C000CA
#define MERGEPAINT (DWORD)0x00BB0226
#define PATCOPY (DWORD)0x00F00021
#define PATPAINT (DWORD)0x00FB0A09
#define PATINVERT (DWORD)0x005A0049
#define DSTINVERT (DWORD)0x00550009
#define BLACKNESS (DWORD)0x00000042
#define WHITENESS (DWORD)0x00FF0062
#define NOMIRRORBITMAP (DWORD)0x80000000
#define CAPTUREBLT (DWORD)0x40000000
#define MAKEROP4(fore,back) (DWORD)((((back) << 8) & 0xFF000000) | (fore))
#endif

#define GDI_ERROR (0xFFFFFFFFL)
#define HGDI_ERROR (LongToHandle(0xFFFFFFFFL))

#define ERROR 0
#define NULLREGION 1
#define SIMPLEREGION 2
#define COMPLEXREGION 3
#define RGN_ERROR ERROR

#define RGN_AND 1
#define RGN_OR 2
#define RGN_XOR 3
#define RGN_DIFF 4
#define RGN_COPY 5
#define RGN_MIN RGN_AND
#define RGN_MAX RGN_COPY

#define BLACKONWHITE 1
#define WHITEONBLACK 2
#define COLORONCOLOR 3
#define HALFTONE 4
#define MAXSTRETCHBLTMODE 4

#define STRETCH_ANDSCANS BLACKONWHITE
#define STRETCH_ORSCANS WHITEONBLACK
#define STRETCH_DELETESCANS COLORONCOLOR
#define STRETCH_HALFTONE HALFTONE

#define ALTERNATE 1
#define WINDING 2
#define POLYFILL_LAST 2

#define LAYOUT_RTL 0x00000001
#define LAYOUT_BTT 0x00000002
#define LAYOUT_VBH 0x00000004
#define LAYOUT_ORIENTATIONMASK (LAYOUT_RTL | LAYOUT_BTT | LAYOUT_VBH)
#define LAYOUT_BITMAPORIENTATIONPRESERVED 0x00000008

#define TA_NOUPDATECP 0
#define TA_UPDATECP 1

#define TA_LEFT 0
#define TA_RIGHT 2
#define TA_CENTER 6

#define TA_TOP 0
#define TA_BOTTOM 8
#define TA_BASELINE 24
#define TA_RTLREADING 256
#define TA_MASK (TA_BASELINE+TA_CENTER+TA_UPDATECP+TA_RTLREADING)

#define VTA_BASELINE TA_BASELINE
#define VTA_LEFT TA_BOTTOM
#define VTA_RIGHT TA_TOP
#define VTA_CENTER TA_CENTER
#define VTA_BOTTOM TA_RIGHT
#define VTA_TOP TA_LEFT

#define ETO_OPAQUE 0x0002
#define ETO_CLIPPED 0x0004
#define ETO_GLYPH_INDEX 0x0010
#define ETO_RTLREADING 0x0080
#define ETO_NUMERICSLOCAL 0x0400
#define ETO_NUMERICSLATIN 0x0800
#define ETO_IGNORELANGUAGE 0x1000
#define ETO_PDY 0x2000

#define ASPECT_FILTERING 0x0001

#define DCB_RESET 0x0001
#define DCB_ACCUMULATE 0x0002
#define DCB_DIRTY DCB_ACCUMULATE
#define DCB_SET (DCB_RESET | DCB_ACCUMULATE)
#define DCB_ENABLE 0x0004
#define DCB_DISABLE 0x0008

#ifndef NOMETAFILE

#define META_SETBKCOLOR 0x0201
#define META_SETBKMODE 0x0102
#define META_SETMAPMODE 0x0103
#define META_SETROP2 0x0104
#define META_SETRELABS 0x0105
#define META_SETPOLYFILLMODE 0x0106
#define META_SETSTRETCHBLTMODE 0x0107
#define META_SETTEXTCHAREXTRA 0x0108
#define META_SETTEXTCOLOR 0x0209
#define META_SETTEXTJUSTIFICATION 0x020A
#define META_SETWINDOWORG 0x020B
#define META_SETWINDOWEXT 0x020C
#define META_SETVIEWPORTORG 0x020D
#define META_SETVIEWPORTEXT 0x020E
#define META_OFFSETWINDOWORG 0x020F
#define META_SCALEWINDOWEXT 0x0410
#define META_OFFSETVIEWPORTORG 0x0211
#define META_SCALEVIEWPORTEXT 0x0412
#define META_LINETO 0x0213
#define META_MOVETO 0x0214
#define META_EXCLUDECLIPRECT 0x0415
#define META_INTERSECTCLIPRECT 0x0416
#define META_ARC 0x0817
#define META_ELLIPSE 0x0418
#define META_FLOODFILL 0x0419
#define META_PIE 0x081A
#define META_RECTANGLE 0x041B
#define META_ROUNDRECT 0x061C
#define META_PATBLT 0x061D
#define META_SAVEDC 0x001E
#define META_SETPIXEL 0x041F
#define META_OFFSETCLIPRGN 0x0220
#define META_TEXTOUT 0x0521
#define META_BITBLT 0x0922
#define META_STRETCHBLT 0x0B23
#define META_POLYGON 0x0324
#define META_POLYLINE 0x0325
#define META_ESCAPE 0x0626
#define META_RESTOREDC 0x0127
#define META_FILLREGION 0x0228
#define META_FRAMEREGION 0x0429
#define META_INVERTREGION 0x012A
#define META_PAINTREGION 0x012B
#define META_SELECTCLIPREGION 0x012C
#define META_SELECTOBJECT 0x012D
#define META_SETTEXTALIGN 0x012E
#define META_CHORD 0x0830
#define META_SETMAPPERFLAGS 0x0231
#define META_EXTTEXTOUT 0x0a32
#define META_SETDIBTODEV 0x0d33
#define META_SELECTPALETTE 0x0234
#define META_REALIZEPALETTE 0x0035
#define META_ANIMATEPALETTE 0x0436
#define META_SETPALENTRIES 0x0037
#define META_POLYPOLYGON 0x0538
#define META_RESIZEPALETTE 0x0139
#define META_DIBBITBLT 0x0940
#define META_DIBSTRETCHBLT 0x0b41
#define META_DIBCREATEPATTERNBRUSH 0x0142
#define META_STRETCHDIB 0x0f43
#define META_EXTFLOODFILL 0x0548
#define META_SETLAYOUT 0x0149
#define META_DELETEOBJECT 0x01f0
#define META_CREATEPALETTE 0x00f7
#define META_CREATEPATTERNBRUSH 0x01F9
#define META_CREATEPENINDIRECT 0x02FA
#define META_CREATEFONTINDIRECT 0x02FB
#define META_CREATEBRUSHINDIRECT 0x02FC
#define META_CREATEREGION 0x06FF

  typedef struct _DRAWPATRECT {
    POINT ptPosition;
    POINT ptSize;
    WORD wStyle;
    WORD wPattern;
  } DRAWPATRECT,*PDRAWPATRECT;
#endif

#define NEWFRAME 1
#define ABORTDOC 2
#define NEXTBAND 3
#define SETCOLORTABLE 4
#define GETCOLORTABLE 5
#define FLUSHOUTPUT 6
#define DRAFTMODE 7
#define QUERYESCSUPPORT 8
#define SETABORTPROC 9
#define STARTDOC 10
#define ENDDOC 11
#define GETPHYSPAGESIZE 12
#define GETPRINTINGOFFSET 13
#define GETSCALINGFACTOR 14
#define MFCOMMENT 15
#define GETPENWIDTH 16
#define SETCOPYCOUNT 17
#define SELECTPAPERSOURCE 18
#define DEVICEDATA 19
#define PASSTHROUGH 19
#define GETTECHNOLGY 20
#define GETTECHNOLOGY 20
#define SETLINECAP 21
#define SETLINEJOIN 22
#define SETMITERLIMIT 23
#define BANDINFO 24
#define DRAWPATTERNRECT 25
#define GETVECTORPENSIZE 26
#define GETVECTORBRUSHSIZE 27
#define ENABLEDUPLEX 28
#define GETSETPAPERBINS 29
#define GETSETPRINTORIENT 30
#define ENUMPAPERBINS 31
#define SETDIBSCALING 32
#define EPSPRINTING 33
#define ENUMPAPERMETRICS 34
#define GETSETPAPERMETRICS 35
#define POSTSCRIPT_DATA 37
#define POSTSCRIPT_IGNORE 38
#define MOUSETRAILS 39
#define GETDEVICEUNITS 42

#define GETEXTENDEDTEXTMETRICS 256
#define GETEXTENTTABLE 257
#define GETPAIRKERNTABLE 258
#define GETTRACKKERNTABLE 259
#define EXTTEXTOUT 512
#define GETFACENAME 513
#define DOWNLOADFACE 514
#define ENABLERELATIVEWIDTHS 768
#define ENABLEPAIRKERNING 769
#define SETKERNTRACK 770
#define SETALLJUSTVALUES 771
#define SETCHARSET 772

#define STRETCHBLT 2048
#define METAFILE_DRIVER 2049
#define GETSETSCREENPARAMS 3072
#define QUERYDIBSUPPORT 3073
#define BEGIN_PATH 4096
#define CLIP_TO_PATH 4097
#define END_PATH 4098
#define EXT_DEVICE_CAPS 4099
#define RESTORE_CTM 4100
#define SAVE_CTM 4101
#define SET_ARC_DIRECTION 4102
#define SET_BACKGROUND_COLOR 4103
#define SET_POLY_MODE 4104
#define SET_SCREEN_ANGLE 4105
#define SET_SPREAD 4106
#define TRANSFORM_CTM 4107
#define SET_CLIP_BOX 4108
#define SET_BOUNDS 4109
#define SET_MIRROR_MODE 4110
#define OPENCHANNEL 4110
#define DOWNLOADHEADER 4111
#define CLOSECHANNEL 4112
#define POSTSCRIPT_PASSTHROUGH 4115
#define ENCAPSULATED_POSTSCRIPT 4116

#define POSTSCRIPT_IDENTIFY 4117
#define POSTSCRIPT_INJECTION 4118

#define CHECKJPEGFORMAT 4119
#define CHECKPNGFORMAT 4120

#define GET_PS_FEATURESETTING 4121

#define SPCLPASSTHROUGH2 4568

#define PSIDENT_GDICENTRIC 0
#define PSIDENT_PSCENTRIC 1

  typedef struct _PSINJECTDATA {
    DWORD DataBytes;
    WORD InjectionPoint;
    WORD PageNumber;
  } PSINJECTDATA,*PPSINJECTDATA;

#define PSINJECT_BEGINSTREAM 1
#define PSINJECT_PSADOBE 2
#define PSINJECT_PAGESATEND 3
#define PSINJECT_PAGES 4

#define PSINJECT_DOCNEEDEDRES 5
#define PSINJECT_DOCSUPPLIEDRES 6
#define PSINJECT_PAGEORDER 7
#define PSINJECT_ORIENTATION 8
#define PSINJECT_BOUNDINGBOX 9
#define PSINJECT_DOCUMENTPROCESSCOLORS 10

#define PSINJECT_COMMENTS 11
#define PSINJECT_BEGINDEFAULTS 12
#define PSINJECT_ENDDEFAULTS 13
#define PSINJECT_BEGINPROLOG 14
#define PSINJECT_ENDPROLOG 15
#define PSINJECT_BEGINSETUP 16
#define PSINJECT_ENDSETUP 17
#define PSINJECT_TRAILER 18
#define PSINJECT_EOF 19
#define PSINJECT_ENDSTREAM 20
#define PSINJECT_DOCUMENTPROCESSCOLORSATEND 21

#define PSINJECT_PAGENUMBER 100
#define PSINJECT_BEGINPAGESETUP 101
#define PSINJECT_ENDPAGESETUP 102
#define PSINJECT_PAGETRAILER 103
#define PSINJECT_PLATECOLOR 104

#define PSINJECT_SHOWPAGE 105
#define PSINJECT_PAGEBBOX 106
#define PSINJECT_ENDPAGECOMMENTS 107

#define PSINJECT_VMSAVE 200
#define PSINJECT_VMRESTORE 201

#define FEATURESETTING_NUP 0
#define FEATURESETTING_OUTPUT 1
#define FEATURESETTING_PSLEVEL 2
#define FEATURESETTING_CUSTPAPER 3
#define FEATURESETTING_MIRROR 4
#define FEATURESETTING_NEGATIVE 5
#define FEATURESETTING_PROTOCOL 6

#define FEATURESETTING_PRIVATE_BEGIN 0x1000
#define FEATURESETTING_PRIVATE_END 0x1FFF

  typedef struct _PSFEATURE_OUTPUT {
    WINBOOL bPageIndependent;
    WINBOOL bSetPageDevice;
  } PSFEATURE_OUTPUT,*PPSFEATURE_OUTPUT;

  typedef struct _PSFEATURE_CUSTPAPER {
    LONG lOrientation;
    LONG lWidth;
    LONG lHeight;
    LONG lWidthOffset;
    LONG lHeightOffset;
  } PSFEATURE_CUSTPAPER,*PPSFEATURE_CUSTPAPER;

#define PSPROTOCOL_ASCII 0
#define PSPROTOCOL_BCP 1
#define PSPROTOCOL_TBCP 2
#define PSPROTOCOL_BINARY 3

#define QDI_SETDIBITS 1
#define QDI_GETDIBITS 2
#define QDI_DIBTOSCREEN 4
#define QDI_STRETCHDIB 8

#define SP_NOTREPORTED 0x4000
#define SP_ERROR (-1)
#define SP_APPABORT (-2)
#define SP_USERABORT (-3)
#define SP_OUTOFDISK (-4)
#define SP_OUTOFMEMORY (-5)

#define PR_JOBSTATUS 0x0000

#define OBJ_PEN 1
#define OBJ_BRUSH 2
#define OBJ_DC 3
#define OBJ_METADC 4
#define OBJ_PAL 5
#define OBJ_FONT 6
#define OBJ_BITMAP 7
#define OBJ_REGION 8
#define OBJ_METAFILE 9
#define OBJ_MEMDC 10
#define OBJ_EXTPEN 11
#define OBJ_ENHMETADC 12
#define OBJ_ENHMETAFILE 13
#define OBJ_COLORSPACE 14

#define MWT_IDENTITY 1
#define MWT_LEFTMULTIPLY 2
#define MWT_RIGHTMULTIPLY 3

#define MWT_MIN MWT_IDENTITY
#define MWT_MAX MWT_RIGHTMULTIPLY

#define _XFORM_
  typedef struct tagXFORM {
    FLOAT eM11;
    FLOAT eM12;
    FLOAT eM21;
    FLOAT eM22;
    FLOAT eDx;
    FLOAT eDy;
  } XFORM,*PXFORM,*LPXFORM;

  typedef struct tagBITMAP {
    LONG bmType;
    LONG bmWidth;
    LONG bmHeight;
    LONG bmWidthBytes;
    WORD bmPlanes;
    WORD bmBitsPixel;
    LPVOID bmBits;
  } BITMAP,*PBITMAP,*NPBITMAP,*LPBITMAP;

#include <pshpack1.h>
  typedef struct tagRGBTRIPLE {
    BYTE rgbtBlue;
    BYTE rgbtGreen;
    BYTE rgbtRed;
  } RGBTRIPLE;
#include <poppack.h>

  typedef struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
  } RGBQUAD;
  typedef RGBQUAD *LPRGBQUAD;

#define CS_ENABLE 0x00000001L
#define CS_DISABLE 0x00000002L
#define CS_DELETE_TRANSFORM 0x00000003L

#define LCS_SIGNATURE 'PSOC'

#define LCS_sRGB 'sRGB'
#define LCS_WINDOWS_COLOR_SPACE 'Win '

  typedef LONG LCSCSTYPE;
#define LCS_CALIBRATED_RGB 0x00000000L

  typedef LONG LCSGAMUTMATCH;
#define LCS_GM_BUSINESS 0x00000001L
#define LCS_GM_GRAPHICS 0x00000002L
#define LCS_GM_IMAGES 0x00000004L
#define LCS_GM_ABS_COLORIMETRIC 0x00000008L

#define CM_OUT_OF_GAMUT 255
#define CM_IN_GAMUT 0

#define ICM_ADDPROFILE 1
#define ICM_DELETEPROFILE 2
#define ICM_QUERYPROFILE 3
#define ICM_SETDEFAULTPROFILE 4
#define ICM_REGISTERICMATCHER 5
#define ICM_UNREGISTERICMATCHER 6
#define ICM_QUERYMATCH 7

#define GetKValue(cmyk) ((BYTE)(cmyk))
#define GetYValue(cmyk) ((BYTE)((cmyk)>> 8))
#define GetMValue(cmyk) ((BYTE)((cmyk)>>16))
#define GetCValue(cmyk) ((BYTE)((cmyk)>>24))

#define CMYK(c,m,y,k) ((COLORREF)((((BYTE)(k)|((WORD)((BYTE)(y))<<8))|(((DWORD)(BYTE)(m))<<16))|(((DWORD)(BYTE)(c))<<24)))

  typedef long FXPT16DOT16,*LPFXPT16DOT16;
  typedef long FXPT2DOT30,*LPFXPT2DOT30;

  typedef struct tagCIEXYZ {
    FXPT2DOT30 ciexyzX;
    FXPT2DOT30 ciexyzY;
    FXPT2DOT30 ciexyzZ;
  } CIEXYZ;
  typedef CIEXYZ *LPCIEXYZ;

  typedef struct tagICEXYZTRIPLE {
    CIEXYZ ciexyzRed;
    CIEXYZ ciexyzGreen;
    CIEXYZ ciexyzBlue;
  } CIEXYZTRIPLE;

  typedef CIEXYZTRIPLE *LPCIEXYZTRIPLE;

  typedef struct tagLOGCOLORSPACEA {
    DWORD lcsSignature;
    DWORD lcsVersion;
    DWORD lcsSize;
    LCSCSTYPE lcsCSType;
    LCSGAMUTMATCH lcsIntent;
    CIEXYZTRIPLE lcsEndpoints;
    DWORD lcsGammaRed;
    DWORD lcsGammaGreen;
    DWORD lcsGammaBlue;
    CHAR lcsFilename[MAX_PATH];
  } LOGCOLORSPACEA,*LPLOGCOLORSPACEA;

  typedef struct tagLOGCOLORSPACEW {
    DWORD lcsSignature;
    DWORD lcsVersion;
    DWORD lcsSize;
    LCSCSTYPE lcsCSType;
    LCSGAMUTMATCH lcsIntent;
    CIEXYZTRIPLE lcsEndpoints;
    DWORD lcsGammaRed;
    DWORD lcsGammaGreen;
    DWORD lcsGammaBlue;
    WCHAR lcsFilename[MAX_PATH];
  } LOGCOLORSPACEW,*LPLOGCOLORSPACEW;

  __MINGW_TYPEDEF_AW(LOGCOLORSPACE)
  __MINGW_TYPEDEF_AW(LPLOGCOLORSPACE)

  typedef struct tagBITMAPCOREHEADER {
    DWORD bcSize;
    WORD bcWidth;
    WORD bcHeight;
    WORD bcPlanes;
    WORD bcBitCount;
  } BITMAPCOREHEADER,*LPBITMAPCOREHEADER,*PBITMAPCOREHEADER;

  typedef struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
  } BITMAPINFOHEADER,*LPBITMAPINFOHEADER,*PBITMAPINFOHEADER;

  typedef struct {
    DWORD bV4Size;
    LONG bV4Width;
    LONG bV4Height;
    WORD bV4Planes;
    WORD bV4BitCount;
    DWORD bV4V4Compression;
    DWORD bV4SizeImage;
    LONG bV4XPelsPerMeter;
    LONG bV4YPelsPerMeter;
    DWORD bV4ClrUsed;
    DWORD bV4ClrImportant;
    DWORD bV4RedMask;
    DWORD bV4GreenMask;
    DWORD bV4BlueMask;
    DWORD bV4AlphaMask;
    DWORD bV4CSType;
    CIEXYZTRIPLE bV4Endpoints;
    DWORD bV4GammaRed;
    DWORD bV4GammaGreen;
    DWORD bV4GammaBlue;
  } BITMAPV4HEADER,*LPBITMAPV4HEADER,*PBITMAPV4HEADER;

  typedef struct {
    DWORD bV5Size;
    LONG bV5Width;
    LONG bV5Height;
    WORD bV5Planes;
    WORD bV5BitCount;
    DWORD bV5Compression;
    DWORD bV5SizeImage;
    LONG bV5XPelsPerMeter;
    LONG bV5YPelsPerMeter;
    DWORD bV5ClrUsed;
    DWORD bV5ClrImportant;
    DWORD bV5RedMask;
    DWORD bV5GreenMask;
    DWORD bV5BlueMask;
    DWORD bV5AlphaMask;
    DWORD bV5CSType;
    CIEXYZTRIPLE bV5Endpoints;
    DWORD bV5GammaRed;
    DWORD bV5GammaGreen;
    DWORD bV5GammaBlue;
    DWORD bV5Intent;
    DWORD bV5ProfileData;
    DWORD bV5ProfileSize;
    DWORD bV5Reserved;
  } BITMAPV5HEADER,*LPBITMAPV5HEADER,*PBITMAPV5HEADER;

#define PROFILE_LINKED 'LINK'
#define PROFILE_EMBEDDED 'MBED'

#define BI_RGB 0L
#define BI_RLE8 1L
#define BI_RLE4 2L
#define BI_BITFIELDS 3L
#define BI_JPEG 4L
#define BI_PNG 5L

  typedef struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
  } BITMAPINFO,*LPBITMAPINFO,*PBITMAPINFO;

  typedef struct tagBITMAPCOREINFO {
    BITMAPCOREHEADER bmciHeader;
    RGBTRIPLE bmciColors[1];
  } BITMAPCOREINFO,*LPBITMAPCOREINFO,*PBITMAPCOREINFO;

#include <pshpack2.h>
  typedef struct tagBITMAPFILEHEADER {
    WORD bfType;
    DWORD bfSize;
    WORD bfReserved1;
    WORD bfReserved2;
    DWORD bfOffBits;
  } BITMAPFILEHEADER,*LPBITMAPFILEHEADER,*PBITMAPFILEHEADER;
#include <poppack.h>

#define MAKEPOINTS(l) (*((POINTS *)&(l)))

#ifndef NOFONTSIG
  typedef struct tagFONTSIGNATURE {
    DWORD fsUsb[4];
    DWORD fsCsb[2];
  } FONTSIGNATURE,*PFONTSIGNATURE,*LPFONTSIGNATURE;

  typedef struct tagCHARSETINFO {
    UINT ciCharset;
    UINT ciACP;
    FONTSIGNATURE fs;
  } CHARSETINFO,*PCHARSETINFO,*NPCHARSETINFO,*LPCHARSETINFO;

#define TCI_SRCCHARSET 1
#define TCI_SRCCODEPAGE 2
#define TCI_SRCFONTSIG 3
#define TCI_SRCLOCALE 0x1000

  typedef struct tagLOCALESIGNATURE {
    DWORD lsUsb[4];
    DWORD lsCsbDefault[2];
    DWORD lsCsbSupported[2];
  } LOCALESIGNATURE,*PLOCALESIGNATURE,*LPLOCALESIGNATURE;
#endif


#ifndef NOMETAFILE
  typedef struct tagHANDLETABLE {
    HGDIOBJ objectHandle[1];
  } HANDLETABLE,*PHANDLETABLE,*LPHANDLETABLE;

  typedef struct tagMETARECORD {
    DWORD rdSize;
    WORD rdFunction;
    WORD rdParm[1];
  } METARECORD;
  typedef struct tagMETARECORD UNALIGNED *PMETARECORD;
  typedef struct tagMETARECORD UNALIGNED *LPMETARECORD;

  typedef struct tagMETAFILEPICT {
    LONG mm;
    LONG xExt;
    LONG yExt;
    HMETAFILE hMF;
  } METAFILEPICT,*LPMETAFILEPICT;

#include <pshpack2.h>
  typedef struct tagMETAHEADER {
    WORD mtType;
    WORD mtHeaderSize;
    WORD mtVersion;
    DWORD mtSize;
    WORD mtNoObjects;
    DWORD mtMaxRecord;
    WORD mtNoParameters;
  } METAHEADER;
  typedef struct tagMETAHEADER UNALIGNED *PMETAHEADER;
  typedef struct tagMETAHEADER UNALIGNED *LPMETAHEADER;

#include <poppack.h>

  typedef struct tagENHMETARECORD {
    DWORD iType;
    DWORD nSize;
    DWORD dParm[1];
  } ENHMETARECORD,*PENHMETARECORD,*LPENHMETARECORD;

  typedef struct tagENHMETAHEADER {
    DWORD iType;
    DWORD nSize;
    RECTL rclBounds;
    RECTL rclFrame;
    DWORD dSignature;
    DWORD nVersion;
    DWORD nBytes;
    DWORD nRecords;
    WORD nHandles;
    WORD sReserved;
    DWORD nDescription;
    DWORD offDescription;
    DWORD nPalEntries;
    SIZEL szlDevice;
    SIZEL szlMillimeters;
    DWORD cbPixelFormat;
    DWORD offPixelFormat;
    DWORD bOpenGL;
    SIZEL szlMicrometers;
  } ENHMETAHEADER,*PENHMETAHEADER,*LPENHMETAHEADER;
#endif

#ifndef NOTEXTMETRIC
#define TMPF_FIXED_PITCH 0x01
#define TMPF_VECTOR 0x02
#define TMPF_DEVICE 0x08
#define TMPF_TRUETYPE 0x04

#if defined(UNICODE)
  typedef WCHAR BCHAR;
#else
  typedef BYTE BCHAR;
#endif

#ifndef _TEXTMETRIC_DEFINED
#define _TEXTMETRIC_DEFINED
  typedef struct tagTEXTMETRICA {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
  } TEXTMETRICA,*PTEXTMETRICA,*NPTEXTMETRICA,*LPTEXTMETRICA;

  typedef struct tagTEXTMETRICW {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
  } TEXTMETRICW,*PTEXTMETRICW,*NPTEXTMETRICW,*LPTEXTMETRICW;

  __MINGW_TYPEDEF_AW(TEXTMETRIC)
  __MINGW_TYPEDEF_AW(PTEXTMETRIC)
  __MINGW_TYPEDEF_AW(NPTEXTMETRIC)
  __MINGW_TYPEDEF_AW(LPTEXTMETRIC)
#endif

#define NTM_REGULAR 0x00000040L
#define NTM_BOLD 0x00000020L
#define NTM_ITALIC 0x00000001L

#define NTM_NONNEGATIVE_AC 0x00010000
#define NTM_PS_OPENTYPE 0x00020000
#define NTM_TT_OPENTYPE 0x00040000
#define NTM_MULTIPLEMASTER 0x00080000
#define NTM_TYPE1 0x00100000
#define NTM_DSIG 0x00200000

#include <pshpack4.h>
  typedef struct tagNEWTEXTMETRICA {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
    DWORD ntmFlags;
    UINT ntmSizeEM;
    UINT ntmCellHeight;
    UINT ntmAvgWidth;
  } NEWTEXTMETRICA,*PNEWTEXTMETRICA,*NPNEWTEXTMETRICA,*LPNEWTEXTMETRICA;

  typedef struct tagNEWTEXTMETRICW {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
    DWORD ntmFlags;
    UINT ntmSizeEM;
    UINT ntmCellHeight;
    UINT ntmAvgWidth;
  } NEWTEXTMETRICW,*PNEWTEXTMETRICW,*NPNEWTEXTMETRICW,*LPNEWTEXTMETRICW;

  __MINGW_TYPEDEF_AW(NEWTEXTMETRIC)
  __MINGW_TYPEDEF_AW(PNEWTEXTMETRIC)
  __MINGW_TYPEDEF_AW(NPNEWTEXTMETRIC)
  __MINGW_TYPEDEF_AW(LPNEWTEXTMETRIC)

#include <poppack.h>

  typedef struct tagNEWTEXTMETRICEXA {
    NEWTEXTMETRICA ntmTm;
    FONTSIGNATURE ntmFontSig;
  } NEWTEXTMETRICEXA;

  typedef struct tagNEWTEXTMETRICEXW {
    NEWTEXTMETRICW ntmTm;
    FONTSIGNATURE ntmFontSig;
  } NEWTEXTMETRICEXW;

  __MINGW_TYPEDEF_AW(NEWTEXTMETRICEX)
#endif

  typedef struct tagPELARRAY {
    LONG paXCount;
    LONG paYCount;
    LONG paXExt;
    LONG paYExt;
    BYTE paRGBs;
  } PELARRAY,*PPELARRAY,*NPPELARRAY,*LPPELARRAY;

  typedef struct tagLOGBRUSH {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG_PTR lbHatch;
  } LOGBRUSH,*PLOGBRUSH,*NPLOGBRUSH,*LPLOGBRUSH;

  typedef struct tagLOGBRUSH32 {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG lbHatch;
  } LOGBRUSH32,*PLOGBRUSH32,*NPLOGBRUSH32,*LPLOGBRUSH32;

  typedef LOGBRUSH PATTERN;
  typedef PATTERN *PPATTERN;
  typedef PATTERN *NPPATTERN;
  typedef PATTERN *LPPATTERN;

  typedef struct tagLOGPEN {
    UINT lopnStyle;
    POINT lopnWidth;
    COLORREF lopnColor;
  } LOGPEN,*PLOGPEN,*NPLOGPEN,*LPLOGPEN;

  typedef struct tagEXTLOGPEN {
    DWORD elpPenStyle;
    DWORD elpWidth;
    UINT elpBrushStyle;
    COLORREF elpColor;
    ULONG_PTR elpHatch;
    DWORD elpNumEntries;
    DWORD elpStyleEntry[1];
  } EXTLOGPEN,*PEXTLOGPEN,*NPEXTLOGPEN,*LPEXTLOGPEN;

#ifndef _PALETTEENTRY_DEFINED
#define _PALETTEENTRY_DEFINED
  typedef struct tagPALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
  } PALETTEENTRY,*PPALETTEENTRY,*LPPALETTEENTRY;
#endif

#ifndef _LOGPALETTE_DEFINED
#define _LOGPALETTE_DEFINED

  typedef struct tagLOGPALETTE {
    WORD palVersion;
    WORD palNumEntries;
    PALETTEENTRY palPalEntry[1];
  } LOGPALETTE,*PLOGPALETTE,*NPLOGPALETTE,*LPLOGPALETTE;
#endif

#ifndef LF_FACESIZE
#define LF_FACESIZE 32
#endif

  typedef struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[LF_FACESIZE];
  } LOGFONTA,*PLOGFONTA,*NPLOGFONTA,*LPLOGFONTA;

  typedef struct tagLOGFONTW {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[LF_FACESIZE];
  } LOGFONTW,*PLOGFONTW,*NPLOGFONTW,*LPLOGFONTW;

  __MINGW_TYPEDEF_AW(LOGFONT)
  __MINGW_TYPEDEF_AW(PLOGFONT)
  __MINGW_TYPEDEF_AW(NPLOGFONT)
  __MINGW_TYPEDEF_AW(LPLOGFONT)

#define LF_FULLFACESIZE 64

  typedef struct tagENUMLOGFONTA {
    LOGFONTA elfLogFont;
    BYTE elfFullName[LF_FULLFACESIZE];
    BYTE elfStyle[LF_FACESIZE];
  } ENUMLOGFONTA,*LPENUMLOGFONTA;

  typedef struct tagENUMLOGFONTW {
    LOGFONTW elfLogFont;
    WCHAR elfFullName[LF_FULLFACESIZE];
    WCHAR elfStyle[LF_FACESIZE];
  } ENUMLOGFONTW,*LPENUMLOGFONTW;

  __MINGW_TYPEDEF_AW(ENUMLOGFONT)
  __MINGW_TYPEDEF_AW(LPENUMLOGFONT)

  typedef struct tagENUMLOGFONTEXA {
    LOGFONTA elfLogFont;
    BYTE elfFullName[LF_FULLFACESIZE];
    BYTE elfStyle[LF_FACESIZE];
    BYTE elfScript[LF_FACESIZE];
  } ENUMLOGFONTEXA,*LPENUMLOGFONTEXA;

  typedef struct tagENUMLOGFONTEXW {
    LOGFONTW elfLogFont;
    WCHAR elfFullName[LF_FULLFACESIZE];
    WCHAR elfStyle[LF_FACESIZE];
    WCHAR elfScript[LF_FACESIZE];
  } ENUMLOGFONTEXW,*LPENUMLOGFONTEXW;

  __MINGW_TYPEDEF_AW(ENUMLOGFONTEX)
  __MINGW_TYPEDEF_AW(LPENUMLOGFONTEX)

#define OUT_DEFAULT_PRECIS 0
#define OUT_STRING_PRECIS 1
#define OUT_CHARACTER_PRECIS 2
#define OUT_STROKE_PRECIS 3
#define OUT_TT_PRECIS 4
#define OUT_DEVICE_PRECIS 5
#define OUT_RASTER_PRECIS 6
#define OUT_TT_ONLY_PRECIS 7
#define OUT_OUTLINE_PRECIS 8
#define OUT_SCREEN_OUTLINE_PRECIS 9
#define OUT_PS_ONLY_PRECIS 10

#define CLIP_DEFAULT_PRECIS 0
#define CLIP_CHARACTER_PRECIS 1
#define CLIP_STROKE_PRECIS 2
#define CLIP_MASK 0xf
#define CLIP_LH_ANGLES (1<<4)
#define CLIP_TT_ALWAYS (2<<4)
#define CLIP_DFA_DISABLE (4<<4)
#define CLIP_EMBEDDED (8<<4)

#define DEFAULT_QUALITY 0
#define DRAFT_QUALITY 1
#define PROOF_QUALITY 2
#define NONANTIALIASED_QUALITY 3
#define ANTIALIASED_QUALITY 4

#define CLEARTYPE_QUALITY 5
#define CLEARTYPE_NATURAL_QUALITY 6

#define DEFAULT_PITCH 0
#define FIXED_PITCH 1
#define VARIABLE_PITCH 2
#define MONO_FONT 8

#define ANSI_CHARSET 0
#define DEFAULT_CHARSET 1
#define SYMBOL_CHARSET 2
#define SHIFTJIS_CHARSET 128
#define HANGEUL_CHARSET 129
#define HANGUL_CHARSET 129
#define GB2312_CHARSET 134
#define CHINESEBIG5_CHARSET 136
#define OEM_CHARSET 255
#define JOHAB_CHARSET 130
#define HEBREW_CHARSET 177
#define ARABIC_CHARSET 178
#define GREEK_CHARSET 161
#define TURKISH_CHARSET 162
#define VIETNAMESE_CHARSET 163
#define THAI_CHARSET 222
#define EASTEUROPE_CHARSET 238
#define RUSSIAN_CHARSET 204

#define MAC_CHARSET 77
#define BALTIC_CHARSET 186

#define FS_LATIN1 0x00000001L
#define FS_LATIN2 0x00000002L
#define FS_CYRILLIC 0x00000004L
#define FS_GREEK 0x00000008L
#define FS_TURKISH 0x00000010L
#define FS_HEBREW 0x00000020L
#define FS_ARABIC 0x00000040L
#define FS_BALTIC 0x00000080L
#define FS_VIETNAMESE 0x00000100L
#define FS_THAI 0x00010000L
#define FS_JISJAPAN 0x00020000L
#define FS_CHINESESIMP 0x00040000L
#define FS_WANSUNG 0x00080000L
#define FS_CHINESETRAD 0x00100000L
#define FS_JOHAB 0x00200000L
#define FS_SYMBOL 0x80000000L

#define FF_DONTCARE (0<<4)
#define FF_ROMAN (1<<4)

#define FF_SWISS (2<<4)

#define FF_MODERN (3<<4)

#define FF_SCRIPT (4<<4)
#define FF_DECORATIVE (5<<4)

#define FW_DONTCARE 0
#define FW_THIN 100
#define FW_EXTRALIGHT 200
#define FW_LIGHT 300
#define FW_NORMAL 400
#define FW_MEDIUM 500
#define FW_SEMIBOLD 600
#define FW_BOLD 700
#define FW_EXTRABOLD 800
#define FW_HEAVY 900

#define FW_ULTRALIGHT FW_EXTRALIGHT
#define FW_REGULAR FW_NORMAL
#define FW_DEMIBOLD FW_SEMIBOLD
#define FW_ULTRABOLD FW_EXTRABOLD
#define FW_BLACK FW_HEAVY

#define PANOSE_COUNT 10
#define PAN_FAMILYTYPE_INDEX 0
#define PAN_SERIFSTYLE_INDEX 1
#define PAN_WEIGHT_INDEX 2
#define PAN_PROPORTION_INDEX 3
#define PAN_CONTRAST_INDEX 4
#define PAN_STROKEVARIATION_INDEX 5
#define PAN_ARMSTYLE_INDEX 6
#define PAN_LETTERFORM_INDEX 7
#define PAN_MIDLINE_INDEX 8
#define PAN_XHEIGHT_INDEX 9

#define PAN_CULTURE_LATIN 0

  typedef struct tagPANOSE {
    BYTE bFamilyType;
    BYTE bSerifStyle;
    BYTE bWeight;
    BYTE bProportion;
    BYTE bContrast;
    BYTE bStrokeVariation;
    BYTE bArmStyle;
    BYTE bLetterform;
    BYTE bMidline;
    BYTE bXHeight;
  } PANOSE,*LPPANOSE;

#define PAN_ANY 0
#define PAN_NO_FIT 1

#define PAN_FAMILY_TEXT_DISPLAY 2
#define PAN_FAMILY_SCRIPT 3
#define PAN_FAMILY_DECORATIVE 4
#define PAN_FAMILY_PICTORIAL 5

#define PAN_SERIF_COVE 2
#define PAN_SERIF_OBTUSE_COVE 3
#define PAN_SERIF_SQUARE_COVE 4
#define PAN_SERIF_OBTUSE_SQUARE_COVE 5
#define PAN_SERIF_SQUARE 6
#define PAN_SERIF_THIN 7
#define PAN_SERIF_BONE 8
#define PAN_SERIF_EXAGGERATED 9
#define PAN_SERIF_TRIANGLE 10
#define PAN_SERIF_NORMAL_SANS 11
#define PAN_SERIF_OBTUSE_SANS 12
#define PAN_SERIF_PERP_SANS 13
#define PAN_SERIF_FLARED 14
#define PAN_SERIF_ROUNDED 15

#define PAN_WEIGHT_VERY_LIGHT 2
#define PAN_WEIGHT_LIGHT 3
#define PAN_WEIGHT_THIN 4
#define PAN_WEIGHT_BOOK 5
#define PAN_WEIGHT_MEDIUM 6
#define PAN_WEIGHT_DEMI 7
#define PAN_WEIGHT_BOLD 8
#define PAN_WEIGHT_HEAVY 9
#define PAN_WEIGHT_BLACK 10
#define PAN_WEIGHT_NORD 11

#define PAN_PROP_OLD_STYLE 2
#define PAN_PROP_MODERN 3
#define PAN_PROP_EVEN_WIDTH 4
#define PAN_PROP_EXPANDED 5
#define PAN_PROP_CONDENSED 6
#define PAN_PROP_VERY_EXPANDED 7
#define PAN_PROP_VERY_CONDENSED 8
#define PAN_PROP_MONOSPACED 9

#define PAN_CONTRAST_NONE 2
#define PAN_CONTRAST_VERY_LOW 3
#define PAN_CONTRAST_LOW 4
#define PAN_CONTRAST_MEDIUM_LOW 5
#define PAN_CONTRAST_MEDIUM 6
#define PAN_CONTRAST_MEDIUM_HIGH 7
#define PAN_CONTRAST_HIGH 8
#define PAN_CONTRAST_VERY_HIGH 9

#define PAN_STROKE_GRADUAL_DIAG 2
#define PAN_STROKE_GRADUAL_TRAN 3
#define PAN_STROKE_GRADUAL_VERT 4
#define PAN_STROKE_GRADUAL_HORZ 5
#define PAN_STROKE_RAPID_VERT 6
#define PAN_STROKE_RAPID_HORZ 7
#define PAN_STROKE_INSTANT_VERT 8

#define PAN_STRAIGHT_ARMS_HORZ 2
#define PAN_STRAIGHT_ARMS_WEDGE 3
#define PAN_STRAIGHT_ARMS_VERT 4
#define PAN_STRAIGHT_ARMS_SINGLE_SERIF 5
#define PAN_STRAIGHT_ARMS_DOUBLE_SERIF 6
#define PAN_BENT_ARMS_HORZ 7
#define PAN_BENT_ARMS_WEDGE 8
#define PAN_BENT_ARMS_VERT 9
#define PAN_BENT_ARMS_SINGLE_SERIF 10
#define PAN_BENT_ARMS_DOUBLE_SERIF 11

#define PAN_LETT_NORMAL_CONTACT 2
#define PAN_LETT_NORMAL_WEIGHTED 3
#define PAN_LETT_NORMAL_BOXED 4
#define PAN_LETT_NORMAL_FLATTENED 5
#define PAN_LETT_NORMAL_ROUNDED 6
#define PAN_LETT_NORMAL_OFF_CENTER 7
#define PAN_LETT_NORMAL_SQUARE 8
#define PAN_LETT_OBLIQUE_CONTACT 9
#define PAN_LETT_OBLIQUE_WEIGHTED 10
#define PAN_LETT_OBLIQUE_BOXED 11
#define PAN_LETT_OBLIQUE_FLATTENED 12
#define PAN_LETT_OBLIQUE_ROUNDED 13
#define PAN_LETT_OBLIQUE_OFF_CENTER 14
#define PAN_LETT_OBLIQUE_SQUARE 15

#define PAN_MIDLINE_STANDARD_TRIMMED 2
#define PAN_MIDLINE_STANDARD_POINTED 3
#define PAN_MIDLINE_STANDARD_SERIFED 4
#define PAN_MIDLINE_HIGH_TRIMMED 5
#define PAN_MIDLINE_HIGH_POINTED 6
#define PAN_MIDLINE_HIGH_SERIFED 7
#define PAN_MIDLINE_CONSTANT_TRIMMED 8
#define PAN_MIDLINE_CONSTANT_POINTED 9
#define PAN_MIDLINE_CONSTANT_SERIFED 10
#define PAN_MIDLINE_LOW_TRIMMED 11
#define PAN_MIDLINE_LOW_POINTED 12
#define PAN_MIDLINE_LOW_SERIFED 13

#define PAN_XHEIGHT_CONSTANT_SMALL 2
#define PAN_XHEIGHT_CONSTANT_STD 3
#define PAN_XHEIGHT_CONSTANT_LARGE 4
#define PAN_XHEIGHT_DUCKING_SMALL 5
#define PAN_XHEIGHT_DUCKING_STD 6
#define PAN_XHEIGHT_DUCKING_LARGE 7

#define ELF_VENDOR_SIZE 4

  typedef struct tagEXTLOGFONTA {
    LOGFONTA elfLogFont;
    BYTE elfFullName[LF_FULLFACESIZE];
    BYTE elfStyle[LF_FACESIZE];
    DWORD elfVersion;
    DWORD elfStyleSize;
    DWORD elfMatch;
    DWORD elfReserved;
    BYTE elfVendorId[ELF_VENDOR_SIZE];
    DWORD elfCulture;
    PANOSE elfPanose;
  } EXTLOGFONTA,*PEXTLOGFONTA,*NPEXTLOGFONTA,*LPEXTLOGFONTA;

  typedef struct tagEXTLOGFONTW {
    LOGFONTW elfLogFont;
    WCHAR elfFullName[LF_FULLFACESIZE];
    WCHAR elfStyle[LF_FACESIZE];
    DWORD elfVersion;
    DWORD elfStyleSize;
    DWORD elfMatch;
    DWORD elfReserved;
    BYTE elfVendorId[ELF_VENDOR_SIZE];
    DWORD elfCulture;
    PANOSE elfPanose;
  } EXTLOGFONTW,*PEXTLOGFONTW,*NPEXTLOGFONTW,*LPEXTLOGFONTW;

  __MINGW_TYPEDEF_AW(EXTLOGFONT)
  __MINGW_TYPEDEF_AW(PEXTLOGFONT)
  __MINGW_TYPEDEF_AW(NPEXTLOGFONT)
  __MINGW_TYPEDEF_AW(LPEXTLOGFONT)

#define ELF_VERSION 0
#define ELF_CULTURE_LATIN 0

#define RASTER_FONTTYPE 0x0001
#define DEVICE_FONTTYPE 0x002
#define TRUETYPE_FONTTYPE 0x004

#define RGB(r,g,b) ((COLORREF)(((BYTE)(r)|((WORD)((BYTE)(g))<<8))|(((DWORD)(BYTE)(b))<<16)))
#define PALETTERGB(r,g,b) (0x02000000 | RGB(r,g,b))
#define PALETTEINDEX(i) ((COLORREF)(0x01000000 | (DWORD)(WORD)(i)))

#define PC_RESERVED 0x01
#define PC_EXPLICIT 0x02
#define PC_NOCOLLAPSE 0x04

#define GetRValue(rgb) (LOBYTE(rgb))
#define GetGValue(rgb) (LOBYTE(((WORD)(rgb)) >> 8))
#define GetBValue(rgb) (LOBYTE((rgb)>>16))

#define TRANSPARENT 1
#define OPAQUE 2
#define BKMODE_LAST 2

#define GM_COMPATIBLE 1
#define GM_ADVANCED 2
#define GM_LAST 2

#define PT_CLOSEFIGURE 0x01
#define PT_LINETO 0x02
#define PT_BEZIERTO 0x04
#define PT_MOVETO 0x06

#define MM_TEXT 1
#define MM_LOMETRIC 2
#define MM_HIMETRIC 3
#define MM_LOENGLISH 4
#define MM_HIENGLISH 5
#define MM_TWIPS 6
#define MM_ISOTROPIC 7
#define MM_ANISOTROPIC 8

#define MM_MIN MM_TEXT
#define MM_MAX MM_ANISOTROPIC
#define MM_MAX_FIXEDSCALE MM_TWIPS

#define ABSOLUTE 1
#define RELATIVE 2

#define WHITE_BRUSH 0
#define LTGRAY_BRUSH 1
#define GRAY_BRUSH 2
#define DKGRAY_BRUSH 3
#define BLACK_BRUSH 4
#define NULL_BRUSH 5
#define HOLLOW_BRUSH NULL_BRUSH
#define WHITE_PEN 6
#define BLACK_PEN 7
#define NULL_PEN 8
#define OEM_FIXED_FONT 10
#define ANSI_FIXED_FONT 11
#define ANSI_VAR_FONT 12
#define SYSTEM_FONT 13
#define DEVICE_DEFAULT_FONT 14
#define DEFAULT_PALETTE 15
#define SYSTEM_FIXED_FONT 16

#define DEFAULT_GUI_FONT 17

#define DC_BRUSH 18
#define DC_PEN 19

#define STOCK_LAST 19

#define CLR_INVALID 0xFFFFFFFF

#define BS_SOLID 0
#define BS_NULL 1
#define BS_HOLLOW BS_NULL
#define BS_HATCHED 2
#define BS_PATTERN 3
#define BS_INDEXED 4
#define BS_DIBPATTERN 5
#define BS_DIBPATTERNPT 6
#define BS_PATTERN8X8 7
#define BS_DIBPATTERN8X8 8
#define BS_MONOPATTERN 9

#define HS_HORIZONTAL 0
#define HS_VERTICAL 1
#define HS_FDIAGONAL 2
#define HS_BDIAGONAL 3
#define HS_CROSS 4
#define HS_DIAGCROSS 5

#define PS_SOLID 0
#define PS_DASH 1
#define PS_DOT 2
#define PS_DASHDOT 3
#define PS_DASHDOTDOT 4
#define PS_NULL 5
#define PS_INSIDEFRAME 6
#define PS_USERSTYLE 7
#define PS_ALTERNATE 8
#define PS_STYLE_MASK 0x0000000F

#define PS_ENDCAP_ROUND 0x00000000
#define PS_ENDCAP_SQUARE 0x00000100
#define PS_ENDCAP_FLAT 0x00000200
#define PS_ENDCAP_MASK 0x00000F00

#define PS_JOIN_ROUND 0x00000000
#define PS_JOIN_BEVEL 0x00001000
#define PS_JOIN_MITER 0x00002000
#define PS_JOIN_MASK 0x0000F000

#define PS_COSMETIC 0x00000000
#define PS_GEOMETRIC 0x00010000
#define PS_TYPE_MASK 0x000F0000

#define AD_COUNTERCLOCKWISE 1
#define AD_CLOCKWISE 2

#define DRIVERVERSION 0
#define TECHNOLOGY 2
#define HORZSIZE 4
#define VERTSIZE 6
#define HORZRES 8
#define VERTRES 10
#define BITSPIXEL 12
#define PLANES 14
#define NUMBRUSHES 16
#define NUMPENS 18
#define NUMMARKERS 20
#define NUMFONTS 22
#define NUMCOLORS 24
#define PDEVICESIZE 26
#define CURVECAPS 28
#define LINECAPS 30
#define POLYGONALCAPS 32
#define TEXTCAPS 34
#define CLIPCAPS 36
#define RASTERCAPS 38
#define ASPECTX 40
#define ASPECTY 42
#define ASPECTXY 44

#define LOGPIXELSX 88
#define LOGPIXELSY 90

#define SIZEPALETTE 104
#define NUMRESERVED 106
#define COLORRES 108

#define PHYSICALWIDTH 110
#define PHYSICALHEIGHT 111
#define PHYSICALOFFSETX 112
#define PHYSICALOFFSETY 113
#define SCALINGFACTORX 114
#define SCALINGFACTORY 115

#define VREFRESH 116

#define DESKTOPVERTRES 117

#define DESKTOPHORZRES 118

#define BLTALIGNMENT 119

#define SHADEBLENDCAPS 120
#define COLORMGMTCAPS 121

#ifndef NOGDICAPMASKS
#define DT_PLOTTER 0
#define DT_RASDISPLAY 1
#define DT_RASPRINTER 2
#define DT_RASCAMERA 3
#define DT_CHARSTREAM 4
#define DT_METAFILE 5
#define DT_DISPFILE 6

#define CC_NONE 0
#define CC_CIRCLES 1
#define CC_PIE 2
#define CC_CHORD 4
#define CC_ELLIPSES 8
#define CC_WIDE 16
#define CC_STYLED 32
#define CC_WIDESTYLED 64
#define CC_INTERIORS 128
#define CC_ROUNDRECT 256

#define LC_NONE 0
#define LC_POLYLINE 2
#define LC_MARKER 4
#define LC_POLYMARKER 8
#define LC_WIDE 16
#define LC_STYLED 32
#define LC_WIDESTYLED 64
#define LC_INTERIORS 128

#define PC_NONE 0
#define PC_POLYGON 1
#define PC_RECTANGLE 2
#define PC_WINDPOLYGON 4
#define PC_TRAPEZOID 4
#define PC_SCANLINE 8
#define PC_WIDE 16
#define PC_STYLED 32
#define PC_WIDESTYLED 64
#define PC_INTERIORS 128
#define PC_POLYPOLYGON 256
#define PC_PATHS 512

#define CP_NONE 0
#define CP_RECTANGLE 1
#define CP_REGION 2

#define TC_OP_CHARACTER 0x00000001
#define TC_OP_STROKE 0x00000002
#define TC_CP_STROKE 0x00000004
#define TC_CR_90 0x00000008
#define TC_CR_ANY 0x00000010
#define TC_SF_X_YINDEP 0x00000020
#define TC_SA_DOUBLE 0x00000040
#define TC_SA_INTEGER 0x00000080
#define TC_SA_CONTIN 0x00000100
#define TC_EA_DOUBLE 0x00000200
#define TC_IA_ABLE 0x00000400
#define TC_UA_ABLE 0x00000800
#define TC_SO_ABLE 0x00001000
#define TC_RA_ABLE 0x00002000
#define TC_VA_ABLE 0x00004000
#define TC_RESERVED 0x00008000
#define TC_SCROLLBLT 0x00010000
#endif

#define RC_NONE
#define RC_BITBLT 1
#define RC_BANDING 2
#define RC_SCALING 4
#define RC_BITMAP64 8
#define RC_GDI20_OUTPUT 0x0010
#define RC_GDI20_STATE 0x0020
#define RC_SAVEBITMAP 0x0040
#define RC_DI_BITMAP 0x0080
#define RC_PALETTE 0x0100
#define RC_DIBTODEV 0x0200
#define RC_BIGFONT 0x0400
#define RC_STRETCHBLT 0x0800
#define RC_FLOODFILL 0x1000
#define RC_STRETCHDIB 0x2000
#define RC_OP_DX_OUTPUT 0x4000
#define RC_DEVBITS 0x8000

#define SB_NONE 0x00000000
#define SB_CONST_ALPHA 0x00000001
#define SB_PIXEL_ALPHA 0x00000002
#define SB_PREMULT_ALPHA 0x00000004

#define SB_GRAD_RECT 0x00000010
#define SB_GRAD_TRI 0x00000020

#define CM_NONE 0x00000000
#define CM_DEVICE_ICM 0x00000001
#define CM_GAMMA_RAMP 0x00000002
#define CM_CMYK_COLOR 0x00000004

#define DIB_RGB_COLORS 0
#define DIB_PAL_COLORS 1

#define SYSPAL_ERROR 0
#define SYSPAL_STATIC 1
#define SYSPAL_NOSTATIC 2
#define SYSPAL_NOSTATIC256 3

#define CBM_INIT 0x04L

#define FLOODFILLBORDER 0
#define FLOODFILLSURFACE 1

#define CCHDEVICENAME 32

#define CCHFORMNAME 32

  typedef struct _devicemodeA {
    BYTE dmDeviceName[CCHDEVICENAME];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    __C89_NAMELESS union {
      __C89_NAMELESS struct {
	short dmOrientation;
	short dmPaperSize;
	short dmPaperLength;
	short dmPaperWidth;
	short dmScale;
	short dmCopies;
	short dmDefaultSource;
	short dmPrintQuality;
      };
      struct {
	POINTL dmPosition;
	DWORD dmDisplayOrientation;
	DWORD dmDisplayFixedOutput;
      };
    };
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[CCHFORMNAME];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    __C89_NAMELESS union {
      DWORD dmDisplayFlags;
      DWORD dmNup;
    };
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
  } DEVMODEA,*PDEVMODEA,*NPDEVMODEA,*LPDEVMODEA;

  typedef struct _devicemodeW {
    WCHAR dmDeviceName[CCHDEVICENAME];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    __C89_NAMELESS union {
      __C89_NAMELESS struct {
	short dmOrientation;
	short dmPaperSize;
	short dmPaperLength;
	short dmPaperWidth;
	short dmScale;
	short dmCopies;
	short dmDefaultSource;
	short dmPrintQuality;
      };
      __C89_NAMELESS struct {
	POINTL dmPosition;
	DWORD dmDisplayOrientation;
	DWORD dmDisplayFixedOutput;
      };
    };
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[CCHFORMNAME];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    __C89_NAMELESS union {
      DWORD dmDisplayFlags;
      DWORD dmNup;
    };
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
  } DEVMODEW,*PDEVMODEW,*NPDEVMODEW,*LPDEVMODEW;

  __MINGW_TYPEDEF_AW(DEVMODE)
  __MINGW_TYPEDEF_AW(PDEVMODE)
  __MINGW_TYPEDEF_AW(NPDEVMODE)
  __MINGW_TYPEDEF_AW(LPDEVMODE)

#define DM_SPECVERSION 0x0401

#define DM_ORIENTATION 0x00000001L
#define DM_PAPERSIZE 0x00000002L
#define DM_PAPERLENGTH 0x00000004L
#define DM_PAPERWIDTH 0x00000008L
#define DM_SCALE 0x00000010L
#define DM_POSITION 0x00000020L
#define DM_NUP 0x00000040L
#define DM_DISPLAYORIENTATION 0x00000080L
#define DM_COPIES 0x00000100L
#define DM_DEFAULTSOURCE 0x00000200L
#define DM_PRINTQUALITY 0x00000400L
#define DM_COLOR 0x00000800L
#define DM_DUPLEX 0x00001000L
#define DM_YRESOLUTION 0x00002000L
#define DM_TTOPTION 0x00004000L
#define DM_COLLATE 0x00008000L
#define DM_FORMNAME 0x00010000L
#define DM_LOGPIXELS 0x00020000L
#define DM_BITSPERPEL 0x00040000L
#define DM_PELSWIDTH 0x00080000L
#define DM_PELSHEIGHT 0x00100000L
#define DM_DISPLAYFLAGS 0x00200000L
#define DM_DISPLAYFREQUENCY 0x00400000L
#define DM_ICMMETHOD 0x00800000L
#define DM_ICMINTENT 0x01000000L
#define DM_MEDIATYPE 0x02000000L
#define DM_DITHERTYPE 0x04000000L
#define DM_PANNINGWIDTH 0x08000000L
#define DM_PANNINGHEIGHT 0x10000000L
#define DM_DISPLAYFIXEDOUTPUT 0x20000000L

#define DMORIENT_PORTRAIT 1
#define DMORIENT_LANDSCAPE 2

#define DMPAPER_FIRST DMPAPER_LETTER
#define DMPAPER_LETTER 1
#define DMPAPER_LETTERSMALL 2
#define DMPAPER_TABLOID 3
#define DMPAPER_LEDGER 4
#define DMPAPER_LEGAL 5
#define DMPAPER_STATEMENT 6
#define DMPAPER_EXECUTIVE 7
#define DMPAPER_A3 8
#define DMPAPER_A4 9
#define DMPAPER_A4SMALL 10
#define DMPAPER_A5 11
#define DMPAPER_B4 12
#define DMPAPER_B5 13
#define DMPAPER_FOLIO 14
#define DMPAPER_QUARTO 15
#define DMPAPER_10X14 16
#define DMPAPER_11X17 17
#define DMPAPER_NOTE 18
#define DMPAPER_ENV_9 19
#define DMPAPER_ENV_10 20
#define DMPAPER_ENV_11 21
#define DMPAPER_ENV_12 22
#define DMPAPER_ENV_14 23
#define DMPAPER_CSHEET 24
#define DMPAPER_DSHEET 25
#define DMPAPER_ESHEET 26
#define DMPAPER_ENV_DL 27
#define DMPAPER_ENV_C5 28
#define DMPAPER_ENV_C3 29
#define DMPAPER_ENV_C4 30
#define DMPAPER_ENV_C6 31
#define DMPAPER_ENV_C65 32
#define DMPAPER_ENV_B4 33
#define DMPAPER_ENV_B5 34
#define DMPAPER_ENV_B6 35
#define DMPAPER_ENV_ITALY 36
#define DMPAPER_ENV_MONARCH 37
#define DMPAPER_ENV_PERSONAL 38
#define DMPAPER_FANFOLD_US 39
#define DMPAPER_FANFOLD_STD_GERMAN 40
#define DMPAPER_FANFOLD_LGL_GERMAN 41
#define DMPAPER_ISO_B4 42
#define DMPAPER_JAPANESE_POSTCARD 43
#define DMPAPER_9X11 44
#define DMPAPER_10X11 45
#define DMPAPER_15X11 46
#define DMPAPER_ENV_INVITE 47
#define DMPAPER_RESERVED_48 48
#define DMPAPER_RESERVED_49 49
#define DMPAPER_LETTER_EXTRA 50
#define DMPAPER_LEGAL_EXTRA 51
#define DMPAPER_TABLOID_EXTRA 52
#define DMPAPER_A4_EXTRA 53
#define DMPAPER_LETTER_TRANSVERSE 54
#define DMPAPER_A4_TRANSVERSE 55
#define DMPAPER_LETTER_EXTRA_TRANSVERSE 56
#define DMPAPER_A_PLUS 57
#define DMPAPER_B_PLUS 58
#define DMPAPER_LETTER_PLUS 59
#define DMPAPER_A4_PLUS 60
#define DMPAPER_A5_TRANSVERSE 61
#define DMPAPER_B5_TRANSVERSE 62
#define DMPAPER_A3_EXTRA 63
#define DMPAPER_A5_EXTRA 64
#define DMPAPER_B5_EXTRA 65
#define DMPAPER_A2 66
#define DMPAPER_A3_TRANSVERSE 67
#define DMPAPER_A3_EXTRA_TRANSVERSE 68
#define DMPAPER_DBL_JAPANESE_POSTCARD 69
#define DMPAPER_A6 70
#define DMPAPER_JENV_KAKU2 71
#define DMPAPER_JENV_KAKU3 72
#define DMPAPER_JENV_CHOU3 73
#define DMPAPER_JENV_CHOU4 74
#define DMPAPER_LETTER_ROTATED 75
#define DMPAPER_A3_ROTATED 76
#define DMPAPER_A4_ROTATED 77
#define DMPAPER_A5_ROTATED 78
#define DMPAPER_B4_JIS_ROTATED 79
#define DMPAPER_B5_JIS_ROTATED 80
#define DMPAPER_JAPANESE_POSTCARD_ROTATED 81
#define DMPAPER_DBL_JAPANESE_POSTCARD_ROTATED 82
#define DMPAPER_A6_ROTATED 83
#define DMPAPER_JENV_KAKU2_ROTATED 84
#define DMPAPER_JENV_KAKU3_ROTATED 85
#define DMPAPER_JENV_CHOU3_ROTATED 86
#define DMPAPER_JENV_CHOU4_ROTATED 87
#define DMPAPER_B6_JIS 88
#define DMPAPER_B6_JIS_ROTATED 89
#define DMPAPER_12X11 90
#define DMPAPER_JENV_YOU4 91
#define DMPAPER_JENV_YOU4_ROTATED 92
#define DMPAPER_P16K 93
#define DMPAPER_P32K 94
#define DMPAPER_P32KBIG 95
#define DMPAPER_PENV_1 96
#define DMPAPER_PENV_2 97
#define DMPAPER_PENV_3 98
#define DMPAPER_PENV_4 99
#define DMPAPER_PENV_5 100
#define DMPAPER_PENV_6 101
#define DMPAPER_PENV_7 102
#define DMPAPER_PENV_8 103
#define DMPAPER_PENV_9 104
#define DMPAPER_PENV_10 105
#define DMPAPER_P16K_ROTATED 106
#define DMPAPER_P32K_ROTATED 107
#define DMPAPER_P32KBIG_ROTATED 108
#define DMPAPER_PENV_1_ROTATED 109
#define DMPAPER_PENV_2_ROTATED 110
#define DMPAPER_PENV_3_ROTATED 111
#define DMPAPER_PENV_4_ROTATED 112
#define DMPAPER_PENV_5_ROTATED 113
#define DMPAPER_PENV_6_ROTATED 114
#define DMPAPER_PENV_7_ROTATED 115
#define DMPAPER_PENV_8_ROTATED 116
#define DMPAPER_PENV_9_ROTATED 117
#define DMPAPER_PENV_10_ROTATED 118

#define DMPAPER_LAST DMPAPER_PENV_10_ROTATED

#define DMPAPER_USER 256

#define DMBIN_FIRST DMBIN_UPPER
#define DMBIN_UPPER 1
#define DMBIN_ONLYONE 1
#define DMBIN_LOWER 2
#define DMBIN_MIDDLE 3
#define DMBIN_MANUAL 4
#define DMBIN_ENVELOPE 5
#define DMBIN_ENVMANUAL 6
#define DMBIN_AUTO 7
#define DMBIN_TRACTOR 8
#define DMBIN_SMALLFMT 9
#define DMBIN_LARGEFMT 10
#define DMBIN_LARGECAPACITY 11
#define DMBIN_CASSETTE 14
#define DMBIN_FORMSOURCE 15
#define DMBIN_LAST DMBIN_FORMSOURCE

#define DMBIN_USER 256

#define DMRES_DRAFT (-1)
#define DMRES_LOW (-2)
#define DMRES_MEDIUM (-3)
#define DMRES_HIGH (-4)

#define DMCOLOR_MONOCHROME 1
#define DMCOLOR_COLOR 2

#define DMDUP_SIMPLEX 1
#define DMDUP_VERTICAL 2
#define DMDUP_HORIZONTAL 3

#define DMTT_BITMAP 1
#define DMTT_DOWNLOAD 2
#define DMTT_SUBDEV 3
#define DMTT_DOWNLOAD_OUTLINE 4

#define DMCOLLATE_FALSE 0
#define DMCOLLATE_TRUE 1

#define DMDO_DEFAULT 0
#define DMDO_90 1
#define DMDO_180 2
#define DMDO_270 3

#define DMDFO_DEFAULT 0
#define DMDFO_STRETCH 1
#define DMDFO_CENTER 2

#define DMDISPLAYFLAGS_TEXTMODE 0x00000004

#define DMNUP_SYSTEM 1
#define DMNUP_ONEUP 2

#define DMICMMETHOD_NONE 1
#define DMICMMETHOD_SYSTEM 2
#define DMICMMETHOD_DRIVER 3
#define DMICMMETHOD_DEVICE 4

#define DMICMMETHOD_USER 256

#define DMICM_SATURATE 1
#define DMICM_CONTRAST 2
#define DMICM_COLORIMETRIC 3
#define DMICM_ABS_COLORIMETRIC 4

#define DMICM_USER 256

#define DMMEDIA_STANDARD 1
#define DMMEDIA_TRANSPARENCY 2
#define DMMEDIA_GLOSSY 3

#define DMMEDIA_USER 256

#define DMDITHER_NONE 1
#define DMDITHER_COARSE 2
#define DMDITHER_FINE 3
#define DMDITHER_LINEART 4
#define DMDITHER_ERRORDIFFUSION 5
#define DMDITHER_RESERVED6 6
#define DMDITHER_RESERVED7 7
#define DMDITHER_RESERVED8 8
#define DMDITHER_RESERVED9 9
#define DMDITHER_GRAYSCALE 10

#define DMDITHER_USER 256

  typedef struct _DISPLAY_DEVICEA {
    DWORD cb;
    CHAR DeviceName[32];
    CHAR DeviceString[128];
    DWORD StateFlags;
    CHAR DeviceID[128];
    CHAR DeviceKey[128];
  } DISPLAY_DEVICEA,*PDISPLAY_DEVICEA,*LPDISPLAY_DEVICEA;
  typedef struct _DISPLAY_DEVICEW {
    DWORD cb;
    WCHAR DeviceName[32];
    WCHAR DeviceString[128];
    DWORD StateFlags;
    WCHAR DeviceID[128];
    WCHAR DeviceKey[128];
  } DISPLAY_DEVICEW,*PDISPLAY_DEVICEW,*LPDISPLAY_DEVICEW;

  __MINGW_TYPEDEF_AW(DISPLAY_DEVICE)
  __MINGW_TYPEDEF_AW(PDISPLAY_DEVICE)
  __MINGW_TYPEDEF_AW(LPDISPLAY_DEVICE)

#define DISPLAY_DEVICE_ATTACHED_TO_DESKTOP 0x00000001
#define DISPLAY_DEVICE_MULTI_DRIVER 0x00000002
#define DISPLAY_DEVICE_PRIMARY_DEVICE 0x00000004
#define DISPLAY_DEVICE_MIRRORING_DRIVER 0x00000008
#define DISPLAY_DEVICE_VGA_COMPATIBLE 0x00000010
#define DISPLAY_DEVICE_REMOVABLE 0x00000020
#define DISPLAY_DEVICE_MODESPRUNED 0x08000000
#define DISPLAY_DEVICE_REMOTE 0x04000000
#define DISPLAY_DEVICE_DISCONNECT 0x02000000

#define DISPLAY_DEVICE_ACTIVE 0x00000001
#define DISPLAY_DEVICE_ATTACHED 0x00000002

#define RDH_RECTANGLES 1

  typedef struct _RGNDATAHEADER {
    DWORD dwSize;
    DWORD iType;
    DWORD nCount;
    DWORD nRgnSize;
    RECT rcBound;
  } RGNDATAHEADER,*PRGNDATAHEADER;

  typedef struct _RGNDATA {
    RGNDATAHEADER rdh;
    char Buffer[1];
  } RGNDATA,*PRGNDATA,*NPRGNDATA,*LPRGNDATA;

#define SYSRGN 4

  typedef struct _ABC {
    int abcA;
    UINT abcB;
    int abcC;
  } ABC,*PABC,*NPABC,*LPABC;

  typedef struct _ABCFLOAT {
    FLOAT abcfA;
    FLOAT abcfB;
    FLOAT abcfC;
  } ABCFLOAT,*PABCFLOAT,*NPABCFLOAT,*LPABCFLOAT;

#ifndef NOTEXTMETRIC

  typedef struct _OUTLINETEXTMETRICA {
    UINT otmSize;
    TEXTMETRICA otmTextMetrics;
    BYTE otmFiller;
    PANOSE otmPanoseNumber;
    UINT otmfsSelection;
    UINT otmfsType;
    int otmsCharSlopeRise;
    int otmsCharSlopeRun;
    int otmItalicAngle;
    UINT otmEMSquare;
    int otmAscent;
    int otmDescent;
    UINT otmLineGap;
    UINT otmsCapEmHeight;
    UINT otmsXHeight;
    RECT otmrcFontBox;
    int otmMacAscent;
    int otmMacDescent;
    UINT otmMacLineGap;
    UINT otmusMinimumPPEM;
    POINT otmptSubscriptSize;
    POINT otmptSubscriptOffset;
    POINT otmptSuperscriptSize;
    POINT otmptSuperscriptOffset;
    UINT otmsStrikeoutSize;
    int otmsStrikeoutPosition;
    int otmsUnderscoreSize;
    int otmsUnderscorePosition;
    PSTR otmpFamilyName;
    PSTR otmpFaceName;
    PSTR otmpStyleName;
    PSTR otmpFullName;
  } OUTLINETEXTMETRICA,*POUTLINETEXTMETRICA,*NPOUTLINETEXTMETRICA,*LPOUTLINETEXTMETRICA;

  typedef struct _OUTLINETEXTMETRICW {
    UINT otmSize;
    TEXTMETRICW otmTextMetrics;
    BYTE otmFiller;
    PANOSE otmPanoseNumber;
    UINT otmfsSelection;
    UINT otmfsType;
    int otmsCharSlopeRise;
    int otmsCharSlopeRun;
    int otmItalicAngle;
    UINT otmEMSquare;
    int otmAscent;
    int otmDescent;
    UINT otmLineGap;
    UINT otmsCapEmHeight;
    UINT otmsXHeight;
    RECT otmrcFontBox;
    int otmMacAscent;
    int otmMacDescent;
    UINT otmMacLineGap;
    UINT otmusMinimumPPEM;
    POINT otmptSubscriptSize;
    POINT otmptSubscriptOffset;
    POINT otmptSuperscriptSize;
    POINT otmptSuperscriptOffset;
    UINT otmsStrikeoutSize;
    int otmsStrikeoutPosition;
    int otmsUnderscoreSize;
    int otmsUnderscorePosition;
    PSTR otmpFamilyName;
    PSTR otmpFaceName;
    PSTR otmpStyleName;
    PSTR otmpFullName;
  } OUTLINETEXTMETRICW,*POUTLINETEXTMETRICW,*NPOUTLINETEXTMETRICW,*LPOUTLINETEXTMETRICW;

  __MINGW_TYPEDEF_AW(OUTLINETEXTMETRIC)
  __MINGW_TYPEDEF_AW(POUTLINETEXTMETRIC)
  __MINGW_TYPEDEF_AW(NPOUTLINETEXTMETRIC)
  __MINGW_TYPEDEF_AW(LPOUTLINETEXTMETRIC)
#endif

  typedef struct tagPOLYTEXTA {
    int x;
    int y;
    UINT n;
    LPCSTR lpstr;
    UINT uiFlags;
    RECT rcl;
    int *pdx;
  } POLYTEXTA,*PPOLYTEXTA,*NPPOLYTEXTA,*LPPOLYTEXTA;

  typedef struct tagPOLYTEXTW {
    int x;
    int y;
    UINT n;
    LPCWSTR lpstr;
    UINT uiFlags;
    RECT rcl;
    int *pdx;
  } POLYTEXTW,*PPOLYTEXTW,*NPPOLYTEXTW,*LPPOLYTEXTW;

  __MINGW_TYPEDEF_AW(POLYTEXT)
  __MINGW_TYPEDEF_AW(PPOLYTEXT)
  __MINGW_TYPEDEF_AW(NPPOLYTEXT)
  __MINGW_TYPEDEF_AW(LPPOLYTEXT)

  typedef struct _FIXED {
    WORD fract;
    short value;
  } FIXED;

  typedef struct _MAT2 {
    FIXED eM11;
    FIXED eM12;
    FIXED eM21;
    FIXED eM22;
  } MAT2,*LPMAT2;

  typedef struct _GLYPHMETRICS {
    UINT gmBlackBoxX;
    UINT gmBlackBoxY;
    POINT gmptGlyphOrigin;
    short gmCellIncX;
    short gmCellIncY;
  } GLYPHMETRICS,*LPGLYPHMETRICS;

#define GGO_METRICS 0
#define GGO_BITMAP 1
#define GGO_NATIVE 2
#define GGO_BEZIER 3

#define GGO_GRAY2_BITMAP 4
#define GGO_GRAY4_BITMAP 5
#define GGO_GRAY8_BITMAP 6
#define GGO_GLYPH_INDEX 0x0080
#define GGO_UNHINTED 0x0100

#define TT_POLYGON_TYPE 24

#define TT_PRIM_LINE 1
#define TT_PRIM_QSPLINE 2
#define TT_PRIM_CSPLINE 3

  typedef struct tagPOINTFX {
    FIXED x;
    FIXED y;
  } POINTFX,*LPPOINTFX;

  typedef struct tagTTPOLYCURVE {
    WORD wType;
    WORD cpfx;
    POINTFX apfx[1];
  } TTPOLYCURVE,*LPTTPOLYCURVE;

  typedef struct tagTTPOLYGONHEADER {
    DWORD cb;
    DWORD dwType;
    POINTFX pfxStart;
  } TTPOLYGONHEADER,*LPTTPOLYGONHEADER;

#define GCP_DBCS 0x0001
#define GCP_REORDER 0x0002
#define GCP_USEKERNING 0x0008
#define GCP_GLYPHSHAPE 0x0010
#define GCP_LIGATE 0x0020

#define GCP_DIACRITIC 0x0100
#define GCP_KASHIDA 0x0400
#define GCP_ERROR 0x8000
#define FLI_MASK 0x103B

#define GCP_JUSTIFY 0x00010000L

#define FLI_GLYPHS 0x00040000L
#define GCP_CLASSIN 0x00080000L
#define GCP_MAXEXTENT 0x00100000L
#define GCP_JUSTIFYIN 0x00200000L
#define GCP_DISPLAYZWG 0x00400000L
#define GCP_SYMSWAPOFF 0x00800000L
#define GCP_NUMERICOVERRIDE 0x01000000L
#define GCP_NEUTRALOVERRIDE 0x02000000L
#define GCP_NUMERICSLATIN 0x04000000L
#define GCP_NUMERICSLOCAL 0x08000000L

#define GCPCLASS_LATIN 1
#define GCPCLASS_HEBREW 2
#define GCPCLASS_ARABIC 2
#define GCPCLASS_NEUTRAL 3
#define GCPCLASS_LOCALNUMBER 4
#define GCPCLASS_LATINNUMBER 5
#define GCPCLASS_LATINNUMERICTERMINATOR 6
#define GCPCLASS_LATINNUMERICSEPARATOR 7
#define GCPCLASS_NUMERICSEPARATOR 8
#define GCPCLASS_PREBOUNDLTR 0x80
#define GCPCLASS_PREBOUNDRTL 0x40
#define GCPCLASS_POSTBOUNDLTR 0x20
#define GCPCLASS_POSTBOUNDRTL 0x10

#define GCPGLYPH_LINKBEFORE 0x8000
#define GCPGLYPH_LINKAFTER 0x4000

  typedef struct tagGCP_RESULTSA {
    DWORD lStructSize;
    LPSTR lpOutString;
    UINT *lpOrder;
    int *lpDx;
    int *lpCaretPos;
    LPSTR lpClass;
    LPWSTR lpGlyphs;
    UINT nGlyphs;
    int nMaxFit;
  } GCP_RESULTSA,*LPGCP_RESULTSA;
  typedef struct tagGCP_RESULTSW {
    DWORD lStructSize;
    LPWSTR lpOutString;
    UINT *lpOrder;
    int *lpDx;
    int *lpCaretPos;
    LPSTR lpClass;
    LPWSTR lpGlyphs;
    UINT nGlyphs;
    int nMaxFit;
  } GCP_RESULTSW,*LPGCP_RESULTSW;

  __MINGW_TYPEDEF_AW(GCP_RESULTS)
  __MINGW_TYPEDEF_AW(LPGCP_RESULTS)

  typedef struct _RASTERIZER_STATUS {
    short nSize;
    short wFlags;
    short nLanguageID;
  } RASTERIZER_STATUS,*LPRASTERIZER_STATUS;

#define TT_AVAILABLE 0x0001
#define TT_ENABLED 0x0002

  typedef struct tagPIXELFORMATDESCRIPTOR {
    WORD nSize;
    WORD nVersion;
    DWORD dwFlags;
    BYTE iPixelType;
    BYTE cColorBits;
    BYTE cRedBits;
    BYTE cRedShift;
    BYTE cGreenBits;
    BYTE cGreenShift;
    BYTE cBlueBits;
    BYTE cBlueShift;
    BYTE cAlphaBits;
    BYTE cAlphaShift;
    BYTE cAccumBits;
    BYTE cAccumRedBits;
    BYTE cAccumGreenBits;
    BYTE cAccumBlueBits;
    BYTE cAccumAlphaBits;
    BYTE cDepthBits;
    BYTE cStencilBits;
    BYTE cAuxBuffers;
    BYTE iLayerType;
    BYTE bReserved;
    DWORD dwLayerMask;
    DWORD dwVisibleMask;
    DWORD dwDamageMask;
  } PIXELFORMATDESCRIPTOR,*PPIXELFORMATDESCRIPTOR,*LPPIXELFORMATDESCRIPTOR;

#define PFD_TYPE_RGBA 0
#define PFD_TYPE_COLORINDEX 1

#define PFD_MAIN_PLANE 0
#define PFD_OVERLAY_PLANE 1
#define PFD_UNDERLAY_PLANE (-1)

#define PFD_DOUBLEBUFFER 0x00000001
#define PFD_STEREO 0x00000002
#define PFD_DRAW_TO_WINDOW 0x00000004
#define PFD_DRAW_TO_BITMAP 0x00000008
#define PFD_SUPPORT_GDI 0x00000010
#define PFD_SUPPORT_OPENGL 0x00000020
#define PFD_GENERIC_FORMAT 0x00000040
#define PFD_NEED_PALETTE 0x00000080
#define PFD_NEED_SYSTEM_PALETTE 0x00000100
#define PFD_SWAP_EXCHANGE 0x00000200
#define PFD_SWAP_COPY 0x00000400
#define PFD_SWAP_LAYER_BUFFERS 0x00000800
#define PFD_GENERIC_ACCELERATED 0x00001000
#define PFD_SUPPORT_DIRECTDRAW 0x00002000

#define PFD_DEPTH_DONTCARE 0x20000000
#define PFD_DOUBLEBUFFER_DONTCARE 0x40000000
#define PFD_STEREO_DONTCARE 0x80000000

#ifndef NOTEXTMETRIC
  typedef int (CALLBACK *OLDFONTENUMPROCA)(CONST LOGFONTA *,CONST TEXTMETRICA *,DWORD,LPARAM);
  typedef int (CALLBACK *OLDFONTENUMPROCW)(CONST LOGFONTW *,CONST TEXTMETRICW *,DWORD,LPARAM);

#define OLDFONTENUMPROC __MINGW_NAME_AW(OLDFONTENUMPROC)
#else
  typedef int (CALLBACK *OLDFONTENUMPROCA)(CONST LOGFONTA *,CONST VOID *,DWORD,LPARAM);
  typedef int (CALLBACK *OLDFONTENUMPROCW)(CONST LOGFONTW *,CONST VOID *,DWORD,LPARAM);

#define OLDFONTENUMPROC __MINGW_NAME_AW(OLDFONTENUMPROC)
#endif

  typedef OLDFONTENUMPROCA FONTENUMPROCA;
  typedef OLDFONTENUMPROCW FONTENUMPROCW;

  __MINGW_TYPEDEF_AW(FONTENUMPROC)

  typedef int (CALLBACK *GOBJENUMPROC)(LPVOID,LPARAM);
  typedef VOID (CALLBACK *LINEDDAPROC)(int,int,LPARAM);

#define AddFontResource __MINGW_NAME_AW(AddFontResource)
#define CopyMetaFile __MINGW_NAME_AW(CopyMetaFile)
#define CreateDC __MINGW_NAME_AW(CreateDC)
#define CreateFontIndirect __MINGW_NAME_AW(CreateFontIndirect)
#define CreateFont __MINGW_NAME_AW(CreateFont)
#define CreateIC __MINGW_NAME_AW(CreateIC)
#define CreateMetaFile __MINGW_NAME_AW(CreateMetaFile)
#define CreateScalableFontResource __MINGW_NAME_AW(CreateScalableFontResource)


  WINGDIAPI int WINAPI AddFontResourceA(LPCSTR);
  WINGDIAPI int WINAPI AddFontResourceW(LPCWSTR);
  WINGDIAPI WINBOOL WINAPI AnimatePalette(HPALETTE hPal,UINT iStartIndex,UINT cEntries,CONST PALETTEENTRY *ppe);
  WINGDIAPI WINBOOL WINAPI Arc(HDC hdc,int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4);
  WINGDIAPI WINBOOL WINAPI BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop);
  WINGDIAPI WINBOOL WINAPI CancelDC(HDC hdc);
  WINGDIAPI WINBOOL WINAPI Chord(HDC hdc,int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4);
  WINGDIAPI int WINAPI ChoosePixelFormat(HDC hdc,CONST PIXELFORMATDESCRIPTOR *ppfd);
  WINGDIAPI HMETAFILE WINAPI CloseMetaFile(HDC hdc);
  WINGDIAPI int WINAPI CombineRgn(HRGN hrgnDst,HRGN hrgnSrc1,HRGN hrgnSrc2,int iMode);
  WINGDIAPI HMETAFILE WINAPI CopyMetaFileA(HMETAFILE,LPCSTR);
  WINGDIAPI HMETAFILE WINAPI CopyMetaFileW(HMETAFILE,LPCWSTR);
  WINGDIAPI HBITMAP WINAPI CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,CONST VOID *lpBits);
  WINGDIAPI HBITMAP WINAPI CreateBitmapIndirect(CONST BITMAP *pbm);
  WINGDIAPI HBRUSH WINAPI CreateBrushIndirect(CONST LOGBRUSH *plbrush);
  WINGDIAPI HBITMAP WINAPI CreateCompatibleBitmap(HDC hdc,int cx,int cy);
  WINGDIAPI HBITMAP WINAPI CreateDiscardableBitmap(HDC hdc,int cx,int cy);
  WINGDIAPI HDC WINAPI CreateCompatibleDC(HDC hdc);
  WINGDIAPI HDC WINAPI CreateDCA(LPCSTR pwszDriver,LPCSTR pwszDevice,LPCSTR pszPort,CONST DEVMODEA *pdm);
  WINGDIAPI HDC WINAPI CreateDCW(LPCWSTR pwszDriver,LPCWSTR pwszDevice,LPCWSTR pszPort,CONST DEVMODEW *pdm);
  WINGDIAPI HBITMAP WINAPI CreateDIBitmap(HDC hdc,CONST BITMAPINFOHEADER *pbmih,DWORD flInit,CONST VOID *pjBits,CONST BITMAPINFO *pbmi,UINT iUsage);
  WINGDIAPI HBRUSH WINAPI CreateDIBPatternBrush(HGLOBAL h,UINT iUsage);
  WINGDIAPI HBRUSH WINAPI CreateDIBPatternBrushPt(CONST VOID *lpPackedDIB,UINT iUsage);
  WINGDIAPI HRGN WINAPI CreateEllipticRgn(int x1,int y1,int x2,int y2);
  WINGDIAPI HRGN WINAPI CreateEllipticRgnIndirect(CONST RECT *lprect);
  WINGDIAPI HFONT WINAPI CreateFontIndirectA(CONST LOGFONTA *lplf);
  WINGDIAPI HFONT WINAPI CreateFontIndirectW(CONST LOGFONTW *lplf);
  WINGDIAPI HFONT WINAPI CreateFontA(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic,DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision,DWORD iQuality,DWORD iPitchAndFamily,LPCSTR pszFaceName);
  WINGDIAPI HFONT WINAPI CreateFontW(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic,DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision,DWORD iQuality,DWORD iPitchAndFamily,LPCWSTR pszFaceName);
  WINGDIAPI HBRUSH WINAPI CreateHatchBrush(int iHatch,COLORREF color);
  WINGDIAPI HDC WINAPI CreateICA(LPCSTR pszDriver,LPCSTR pszDevice,LPCSTR pszPort,CONST DEVMODEA *pdm);
  WINGDIAPI HDC WINAPI CreateICW(LPCWSTR pszDriver,LPCWSTR pszDevice,LPCWSTR pszPort,CONST DEVMODEW *pdm);
  WINGDIAPI HDC WINAPI CreateMetaFileA(LPCSTR pszFile);
  WINGDIAPI HDC WINAPI CreateMetaFileW(LPCWSTR pszFile);
  WINGDIAPI HPALETTE WINAPI CreatePalette(CONST LOGPALETTE *plpal);
  WINGDIAPI HPEN WINAPI CreatePen(int iStyle,int cWidth,COLORREF color);
  WINGDIAPI HPEN WINAPI CreatePenIndirect(CONST LOGPEN *plpen);
  WINGDIAPI HRGN WINAPI CreatePolyPolygonRgn(CONST POINT *pptl,CONST INT *pc,int cPoly,int iMode);
  WINGDIAPI HBRUSH WINAPI CreatePatternBrush(HBITMAP hbm);
  WINGDIAPI HRGN WINAPI CreateRectRgn(int x1,int y1,int x2,int y2);
  WINGDIAPI HRGN WINAPI CreateRectRgnIndirect(CONST RECT *lprect);
  WINGDIAPI HRGN WINAPI CreateRoundRectRgn(int x1,int y1,int x2,int y2,int w,int h);
  WINGDIAPI WINBOOL WINAPI CreateScalableFontResourceA(DWORD fdwHidden,LPCSTR lpszFont,LPCSTR lpszFile,LPCSTR lpszPath);
  WINGDIAPI WINBOOL WINAPI CreateScalableFontResourceW(DWORD fdwHidden,LPCWSTR lpszFont,LPCWSTR lpszFile,LPCWSTR lpszPath);
  WINGDIAPI HBRUSH WINAPI CreateSolidBrush(COLORREF color);
  WINGDIAPI WINBOOL WINAPI DeleteDC(HDC hdc);
  WINGDIAPI WINBOOL WINAPI DeleteMetaFile(HMETAFILE hmf);
  WINGDIAPI WINBOOL WINAPI DeleteObject(HGDIOBJ ho);
  WINGDIAPI int WINAPI DescribePixelFormat(HDC hdc,int iPixelFormat,UINT nBytes,LPPIXELFORMATDESCRIPTOR ppfd);

  typedef UINT (CALLBACK *LPFNDEVMODE)(HWND,HMODULE,LPDEVMODE,LPSTR,LPSTR,LPDEVMODE,LPSTR,UINT);
  typedef DWORD (CALLBACK *LPFNDEVCAPS)(LPSTR,LPSTR,UINT,LPSTR,LPDEVMODE);

#define DM_UPDATE 1
#define DM_COPY 2
#define DM_PROMPT 4
#define DM_MODIFY 8

#define DM_IN_BUFFER DM_MODIFY
#define DM_IN_PROMPT DM_PROMPT
#define DM_OUT_BUFFER DM_COPY
#define DM_OUT_DEFAULT DM_UPDATE

#define DC_FIELDS 1
#define DC_PAPERS 2
#define DC_PAPERSIZE 3
#define DC_MINEXTENT 4
#define DC_MAXEXTENT 5
#define DC_BINS 6
#define DC_DUPLEX 7
#define DC_SIZE 8
#define DC_EXTRA 9
#define DC_VERSION 10
#define DC_DRIVER 11
#define DC_BINNAMES 12
#define DC_ENUMRESOLUTIONS 13
#define DC_FILEDEPENDENCIES 14
#define DC_TRUETYPE 15
#define DC_PAPERNAMES 16
#define DC_ORIENTATION 17
#define DC_COPIES 18
#define DC_BINADJUST 19
#define DC_EMF_COMPLIANT 20
#define DC_DATATYPE_PRODUCED 21
#define DC_COLLATE 22
#define DC_MANUFACTURER 23
#define DC_MODEL 24
#define DC_PERSONALITY 25
#define DC_PRINTRATE 26
#define DC_PRINTRATEUNIT 27
#define PRINTRATEUNIT_PPM 1
#define PRINTRATEUNIT_CPS 2
#define PRINTRATEUNIT_LPM 3
#define PRINTRATEUNIT_IPM 4
#define DC_PRINTERMEM 28
#define DC_MEDIAREADY 29
#define DC_STAPLE 30
#define DC_PRINTRATEPPM 31
#define DC_COLORDEVICE 32
#define DC_NUP 33
#define DC_MEDIATYPENAMES 34
#define DC_MEDIATYPES 35

#define DCTT_BITMAP 0x0000001L
#define DCTT_DOWNLOAD 0x0000002L
#define DCTT_SUBDEV 0x0000004L
#define DCTT_DOWNLOAD_OUTLINE 0x0000008L

#define DCBA_FACEUPNONE 0x0000
#define DCBA_FACEUPCENTER 0x0001
#define DCBA_FACEUPLEFT 0x0002
#define DCBA_FACEUPRIGHT 0x0003
#define DCBA_FACEDOWNNONE 0x0100
#define DCBA_FACEDOWNCENTER 0x0101
#define DCBA_FACEDOWNLEFT 0x0102
#define DCBA_FACEDOWNRIGHT 0x0103

#define DeviceCapabilities __MINGW_NAME_AW(DeviceCapabilities)
#define EnumFontFamiliesEx __MINGW_NAME_AW(EnumFontFamiliesEx)
#define EnumFontFamilies __MINGW_NAME_AW(EnumFontFamilies)
#define EnumFonts __MINGW_NAME_AW(EnumFonts)
#define GetCharWidth __MINGW_NAME_AW(GetCharWidth)
#define GetCharWidth32 __MINGW_NAME_AW(GetCharWidth32)
#define GetCharWidthFloat __MINGW_NAME_AW(GetCharWidthFloat)
#define GetCharABCWidths __MINGW_NAME_AW(GetCharABCWidths)
#define GetCharABCWidthsFloat __MINGW_NAME_AW(GetCharABCWidthsFloat)
#define GetGlyphOutline __MINGW_NAME_AW(GetGlyphOutline)
#define GetMetaFile __MINGW_NAME_AW(GetMetaFile)

  WINSPOOLAPI int WINAPI DeviceCapabilitiesA(LPCSTR pDevice,LPCSTR pPort,WORD fwCapability,LPSTR pOutput,CONST DEVMODEA *pDevMode);
  WINSPOOLAPI int WINAPI DeviceCapabilitiesW(LPCWSTR pDevice,LPCWSTR pPort,WORD fwCapability,LPWSTR pOutput,CONST DEVMODEW *pDevMode);
  WINGDIAPI int WINAPI DrawEscape(HDC hdc,int iEscape,int cjIn,LPCSTR lpIn);
  WINGDIAPI WINBOOL WINAPI Ellipse(HDC hdc,int left,int top,int right,int bottom);
  WINGDIAPI int WINAPI EnumFontFamiliesExA(HDC hdc,LPLOGFONTA lpLogfont,FONTENUMPROCA lpProc,LPARAM lParam,DWORD dwFlags);
  WINGDIAPI int WINAPI EnumFontFamiliesExW(HDC hdc,LPLOGFONTW lpLogfont,FONTENUMPROCW lpProc,LPARAM lParam,DWORD dwFlags);
  WINGDIAPI int WINAPI EnumFontFamiliesA(HDC hdc,LPCSTR lpLogfont,FONTENUMPROCA lpProc,LPARAM lParam);
  WINGDIAPI int WINAPI EnumFontFamiliesW(HDC hdc,LPCWSTR lpLogfont,FONTENUMPROCW lpProc,LPARAM lParam);
  WINGDIAPI int WINAPI EnumFontsA(HDC hdc,LPCSTR lpLogfont,FONTENUMPROCA lpProc,LPARAM lParam);
  WINGDIAPI int WINAPI EnumFontsW(HDC hdc,LPCWSTR lpLogfont,FONTENUMPROCW lpProc,LPARAM lParam);
  WINGDIAPI int WINAPI EnumObjects(HDC hdc,int nType,GOBJENUMPROC lpFunc,LPARAM lParam);
  WINGDIAPI WINBOOL WINAPI EqualRgn(HRGN hrgn1,HRGN hrgn2);
  WINGDIAPI int WINAPI Escape(HDC hdc,int iEscape,int cjIn,LPCSTR pvIn,LPVOID pvOut);
  WINGDIAPI int WINAPI ExtEscape(HDC hdc,int iEscape,int cjInput,LPCSTR lpInData,int cjOutput,LPSTR lpOutData);
  WINGDIAPI int WINAPI ExcludeClipRect(HDC hdc,int left,int top,int right,int bottom);
  WINGDIAPI HRGN WINAPI ExtCreateRegion(CONST XFORM *lpx,DWORD nCount,CONST RGNDATA *lpData);
  WINGDIAPI WINBOOL WINAPI ExtFloodFill(HDC hdc,int x,int y,COLORREF color,UINT type);
  WINGDIAPI WINBOOL WINAPI FillRgn(HDC hdc,HRGN hrgn,HBRUSH hbr);
  WINGDIAPI WINBOOL WINAPI FloodFill(HDC hdc,int x,int y,COLORREF color);
  WINGDIAPI WINBOOL WINAPI FrameRgn(HDC hdc,HRGN hrgn,HBRUSH hbr,int w,int h);
  WINGDIAPI int WINAPI GetROP2(HDC hdc);
  WINGDIAPI WINBOOL WINAPI GetAspectRatioFilterEx(HDC hdc,LPSIZE lpsize);
  WINGDIAPI COLORREF WINAPI GetBkColor(HDC hdc);
  WINGDIAPI COLORREF WINAPI GetDCBrushColor(HDC hdc);
  WINGDIAPI COLORREF WINAPI GetDCPenColor(HDC hdc);
  WINGDIAPI int WINAPI GetBkMode(HDC hdc);
  WINGDIAPI LONG WINAPI GetBitmapBits(HBITMAP hbit,LONG cb,LPVOID lpvBits);
  WINGDIAPI WINBOOL WINAPI GetBitmapDimensionEx(HBITMAP hbit,LPSIZE lpsize);
  WINGDIAPI UINT WINAPI GetBoundsRect(HDC hdc,LPRECT lprect,UINT flags);
  WINGDIAPI WINBOOL WINAPI GetBrushOrgEx(HDC hdc,LPPOINT lppt);
  WINGDIAPI WINBOOL WINAPI GetCharWidthA(HDC hdc,UINT iFirst,UINT iLast,LPINT lpBuffer);
  WINGDIAPI WINBOOL WINAPI GetCharWidthW(HDC hdc,UINT iFirst,UINT iLast,LPINT lpBuffer);
  WINGDIAPI WINBOOL WINAPI GetCharWidth32A(HDC hdc,UINT iFirst,UINT iLast,LPINT lpBuffer);
  WINGDIAPI WINBOOL WINAPI GetCharWidth32W(HDC hdc,UINT iFirst,UINT iLast,LPINT lpBuffer);
  WINGDIAPI WINBOOL WINAPI GetCharWidthFloatA(HDC hdc,UINT iFirst,UINT iLast,PFLOAT lpBuffer);
  WINGDIAPI WINBOOL WINAPI GetCharWidthFloatW(HDC hdc,UINT iFirst,UINT iLast,PFLOAT lpBuffer);
  WINGDIAPI WINBOOL WINAPI GetCharABCWidthsA(HDC hdc,UINT wFirst,UINT wLast,LPABC lpABC);
  WINGDIAPI WINBOOL WINAPI GetCharABCWidthsW(HDC hdc,UINT wFirst,UINT wLast,LPABC lpABC);
  WINGDIAPI WINBOOL WINAPI GetCharABCWidthsFloatA(HDC hdc,UINT iFirst,UINT iLast,LPABCFLOAT lpABC);
  WINGDIAPI WINBOOL WINAPI GetCharABCWidthsFloatW(HDC hdc,UINT iFirst,UINT iLast,LPABCFLOAT lpABC);
  WINGDIAPI int WINAPI GetClipBox(HDC hdc,LPRECT lprect);
  WINGDIAPI int WINAPI GetClipRgn(HDC hdc,HRGN hrgn);
  WINGDIAPI int WINAPI GetMetaRgn(HDC hdc,HRGN hrgn);
  WINGDIAPI HGDIOBJ WINAPI GetCurrentObject(HDC hdc,UINT type);
  WINGDIAPI WINBOOL WINAPI GetCurrentPositionEx(HDC hdc,LPPOINT lppt);
  WINGDIAPI int WINAPI GetDeviceCaps(HDC hdc,int index);
  WINGDIAPI int WINAPI GetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,LPVOID lpvBits,LPBITMAPINFO lpbmi,UINT usage);
  WINGDIAPI DWORD WINAPI GetFontData (HDC hdc,DWORD dwTable,DWORD dwOffset,PVOID pvBuffer,DWORD cjBuffer);
  WINGDIAPI DWORD WINAPI GetGlyphOutlineA(HDC hdc,UINT uChar,UINT fuFormat,LPGLYPHMETRICS lpgm,DWORD cjBuffer,LPVOID pvBuffer,CONST MAT2 *lpmat2);
  WINGDIAPI DWORD WINAPI GetGlyphOutlineW(HDC hdc,UINT uChar,UINT fuFormat,LPGLYPHMETRICS lpgm,DWORD cjBuffer,LPVOID pvBuffer,CONST MAT2 *lpmat2);
  WINGDIAPI int WINAPI GetGraphicsMode(HDC hdc);
  WINGDIAPI int WINAPI GetMapMode(HDC hdc);
  WINGDIAPI UINT WINAPI GetMetaFileBitsEx(HMETAFILE hMF,UINT cbBuffer,LPVOID lpData);
  WINGDIAPI HMETAFILE WINAPI GetMetaFileA(LPCSTR lpName);
  WINGDIAPI HMETAFILE WINAPI GetMetaFileW(LPCWSTR lpName);
  WINGDIAPI COLORREF WINAPI GetNearestColor(HDC hdc,COLORREF color);
  WINGDIAPI UINT WINAPI GetNearestPaletteIndex(HPALETTE h,COLORREF color);
  WINGDIAPI DWORD WINAPI GetObjectType(HGDIOBJ h);

#ifndef NOTEXTMETRIC

#define GetOutlineTextMetrics __MINGW_NAME_AW(GetOutlineTextMetrics)

  WINGDIAPI UINT WINAPI GetOutlineTextMetricsA(HDC hdc,UINT cjCopy,LPOUTLINETEXTMETRICA potm);
  WINGDIAPI UINT WINAPI GetOutlineTextMetricsW(HDC hdc,UINT cjCopy,LPOUTLINETEXTMETRICW potm);
#endif

#define GetTextExtentPoint __MINGW_NAME_AW(GetTextExtentPoint)
#define GetTextExtentPoint32 __MINGW_NAME_AW(GetTextExtentPoint32)
#define GetTextExtentExPoint __MINGW_NAME_AW(GetTextExtentExPoint)
#define GetCharacterPlacement __MINGW_NAME_AW(GetCharacterPlacement)

  WINGDIAPI UINT WINAPI GetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries);
  WINGDIAPI COLORREF WINAPI GetPixel(HDC hdc,int x,int y);
  WINGDIAPI int WINAPI GetPixelFormat(HDC hdc);
  WINGDIAPI int WINAPI GetPolyFillMode(HDC hdc);
  WINGDIAPI WINBOOL WINAPI GetRasterizerCaps(LPRASTERIZER_STATUS lpraststat,UINT cjBytes);
  WINGDIAPI int WINAPI GetRandomRgn (HDC hdc,HRGN hrgn,INT i);
  WINGDIAPI DWORD WINAPI GetRegionData(HRGN hrgn,DWORD nCount,LPRGNDATA lpRgnData);
  WINGDIAPI int WINAPI GetRgnBox(HRGN hrgn,LPRECT lprc);
  WINGDIAPI HGDIOBJ WINAPI GetStockObject(int i);
  WINGDIAPI int WINAPI GetStretchBltMode(HDC hdc);
  WINGDIAPI UINT WINAPI GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries);
  WINGDIAPI UINT WINAPI GetSystemPaletteUse(HDC hdc);
  WINGDIAPI int WINAPI GetTextCharacterExtra(HDC hdc);
  WINGDIAPI UINT WINAPI GetTextAlign(HDC hdc);
  WINGDIAPI COLORREF WINAPI GetTextColor(HDC hdc);
  WINGDIAPI WINBOOL WINAPI GetTextExtentPointA(HDC hdc,LPCSTR lpString,int c,LPSIZE lpsz);
  WINGDIAPI WINBOOL WINAPI GetTextExtentPointW(HDC hdc,LPCWSTR lpString,int c,LPSIZE lpsz);
  WINGDIAPI WINBOOL WINAPI GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl);
  WINGDIAPI WINBOOL WINAPI GetTextExtentPoint32W(HDC hdc,LPCWSTR lpString,int c,LPSIZE psizl);
  WINGDIAPI WINBOOL WINAPI GetTextExtentExPointA(HDC hdc,LPCSTR lpszString,int cchString,int nMaxExtent,LPINT lpnFit,LPINT lpnDx,LPSIZE lpSize);
  WINGDIAPI WINBOOL WINAPI GetTextExtentExPointW(HDC hdc,LPCWSTR lpszString,int cchString,int nMaxExtent,LPINT lpnFit,LPINT lpnDx,LPSIZE lpSize);
  WINGDIAPI int WINAPI GetTextCharset(HDC hdc);
  WINGDIAPI int WINAPI GetTextCharsetInfo(HDC hdc,LPFONTSIGNATURE lpSig,DWORD dwFlags);
  WINGDIAPI WINBOOL WINAPI TranslateCharsetInfo(DWORD *lpSrc,LPCHARSETINFO lpCs,DWORD dwFlags);
  WINGDIAPI DWORD WINAPI GetFontLanguageInfo(HDC hdc);
  WINGDIAPI DWORD WINAPI GetCharacterPlacementA(HDC hdc,LPCSTR lpString,int nCount,int nMexExtent,LPGCP_RESULTSA lpResults,DWORD dwFlags);
  WINGDIAPI DWORD WINAPI GetCharacterPlacementW(HDC hdc,LPCWSTR lpString,int nCount,int nMexExtent,LPGCP_RESULTSW lpResults,DWORD dwFlags);

  typedef struct tagWCRANGE {
    WCHAR wcLow;
    USHORT cGlyphs;
  } WCRANGE,*PWCRANGE,*LPWCRANGE;

  typedef struct tagGLYPHSET {
    DWORD cbThis;
    DWORD flAccel;
    DWORD cGlyphsSupported;
    DWORD cRanges;
    WCRANGE ranges[1];
  } GLYPHSET,*PGLYPHSET,*LPGLYPHSET;

#define GS_8BIT_INDICES 0x00000001

#define GGI_MARK_NONEXISTING_GLYPHS 0X0001

#define GetGlyphIndices __MINGW_NAME_AW(GetGlyphIndices)

  WINGDIAPI DWORD WINAPI GetFontUnicodeRanges(HDC hdc,LPGLYPHSET lpgs);
  WINGDIAPI DWORD WINAPI GetGlyphIndicesA(HDC hdc,LPCSTR lpstr,int c,LPWORD pgi,DWORD fl);
  WINGDIAPI DWORD WINAPI GetGlyphIndicesW(HDC hdc,LPCWSTR lpstr,int c,LPWORD pgi,DWORD fl);
  WINGDIAPI WINBOOL WINAPI GetTextExtentPointI(HDC hdc,LPWORD pgiIn,int cgi,LPSIZE psize);
  WINGDIAPI WINBOOL WINAPI GetTextExtentExPointI (HDC hdc,LPWORD lpwszString,int cwchString,int nMaxExtent,LPINT lpnFit,LPINT lpnDx,LPSIZE lpSize);
  WINGDIAPI WINBOOL WINAPI GetCharWidthI(HDC hdc,UINT giFirst,UINT cgi,LPWORD pgi,LPINT piWidths);
  WINGDIAPI WINBOOL WINAPI GetCharABCWidthsI(HDC hdc,UINT giFirst,UINT cgi,LPWORD pgi,LPABC pabc);

#define STAMP_DESIGNVECTOR (0x8000000 + 'd' + ('v' << 8))
#define STAMP_AXESLIST (0x8000000 + 'a' + ('l' << 8))
#define MM_MAX_NUMAXES 16

  typedef struct tagDESIGNVECTOR {
    DWORD dvReserved;
    DWORD dvNumAxes;
    LONG dvValues[MM_MAX_NUMAXES];
  } DESIGNVECTOR,*PDESIGNVECTOR,*LPDESIGNVECTOR;

#define AddFontResourceEx __MINGW_NAME_AW(AddFontResourceEx)
#define RemoveFontResourceEx __MINGW_NAME_AW(RemoveFontResourceEx)

  WINGDIAPI int WINAPI AddFontResourceExA(LPCSTR name,DWORD fl,PVOID res);
  WINGDIAPI int WINAPI AddFontResourceExW(LPCWSTR name,DWORD fl,PVOID res);
  WINGDIAPI WINBOOL WINAPI RemoveFontResourceExA(LPCSTR name,DWORD fl,PVOID pdv);
  WINGDIAPI WINBOOL WINAPI RemoveFontResourceExW(LPCWSTR name,DWORD fl,PVOID pdv);
  WINGDIAPI HANDLE WINAPI AddFontMemResourceEx(PVOID pFileView,DWORD cjSize,PVOID pvResrved,DWORD *pNumFonts);
  WINGDIAPI WINBOOL WINAPI RemoveFontMemResourceEx(HANDLE h);

#define FR_PRIVATE 0x10
#define FR_NOT_ENUM 0x20

#define MM_MAX_AXES_NAMELEN 16

  typedef struct tagAXISINFOA {
    LONG axMinValue;
    LONG axMaxValue;
    BYTE axAxisName[MM_MAX_AXES_NAMELEN];
  } AXISINFOA,*PAXISINFOA,*LPAXISINFOA;

  typedef struct tagAXISINFOW {
    LONG axMinValue;
    LONG axMaxValue;
    WCHAR axAxisName[MM_MAX_AXES_NAMELEN];
  } AXISINFOW,*PAXISINFOW,*LPAXISINFOW;

  __MINGW_TYPEDEF_AW(AXISINFO)
  __MINGW_TYPEDEF_AW(PAXISINFO)
  __MINGW_TYPEDEF_AW(LPAXISINFO)

  typedef struct tagAXESLISTA {
    DWORD axlReserved;
    DWORD axlNumAxes;
    AXISINFOA axlAxisInfo[MM_MAX_NUMAXES];
  } AXESLISTA,*PAXESLISTA,*LPAXESLISTA;

  typedef struct tagAXESLISTW {
    DWORD axlReserved;
    DWORD axlNumAxes;
    AXISINFOW axlAxisInfo[MM_MAX_NUMAXES];
  } AXESLISTW,*PAXESLISTW,*LPAXESLISTW;

  __MINGW_TYPEDEF_AW(AXESLIST)
  __MINGW_TYPEDEF_AW(PAXESLIST)
  __MINGW_TYPEDEF_AW(LPAXESLIST)

  typedef struct tagENUMLOGFONTEXDVA {
    ENUMLOGFONTEXA elfEnumLogfontEx;
    DESIGNVECTOR elfDesignVector;
  } ENUMLOGFONTEXDVA,*PENUMLOGFONTEXDVA,*LPENUMLOGFONTEXDVA;

  typedef struct tagENUMLOGFONTEXDVW {
    ENUMLOGFONTEXW elfEnumLogfontEx;
    DESIGNVECTOR elfDesignVector;
  } ENUMLOGFONTEXDVW,*PENUMLOGFONTEXDVW,*LPENUMLOGFONTEXDVW;

  __MINGW_TYPEDEF_AW(ENUMLOGFONTEXDV)
  __MINGW_TYPEDEF_AW(PENUMLOGFONTEXDV)
  __MINGW_TYPEDEF_AW(LPENUMLOGFONTEXDV)

#define CreateFontIndirectEx __MINGW_NAME_AW(CreateFontIndirectEx)

  WINGDIAPI HFONT WINAPI CreateFontIndirectExA(CONST ENUMLOGFONTEXDVA *);
  WINGDIAPI HFONT WINAPI CreateFontIndirectExW(CONST ENUMLOGFONTEXDVW *);

#ifndef NOTEXTMETRIC
  typedef struct tagENUMTEXTMETRICA {
    NEWTEXTMETRICEXA etmNewTextMetricEx;
    AXESLISTA etmAxesList;
  } ENUMTEXTMETRICA,*PENUMTEXTMETRICA,*LPENUMTEXTMETRICA;
  typedef struct tagENUMTEXTMETRICW
  {
    NEWTEXTMETRICEXW etmNewTextMetricEx;
    AXESLISTW etmAxesList;
  } ENUMTEXTMETRICW,*PENUMTEXTMETRICW,*LPENUMTEXTMETRICW;

  __MINGW_TYPEDEF_AW(ENUMTEXTMETRIC)
  __MINGW_TYPEDEF_AW(PENUMTEXTMETRIC)
  __MINGW_TYPEDEF_AW(LPENUMTEXTMETRIC)
#endif

#define ResetDC __MINGW_NAME_AW(ResetDC)
#define RemoveFontResource __MINGW_NAME_AW(RemoveFontResource)

  WINGDIAPI WINBOOL WINAPI GetViewportExtEx(HDC hdc,LPSIZE lpsize);
  WINGDIAPI WINBOOL WINAPI GetViewportOrgEx(HDC hdc,LPPOINT lppoint);
  WINGDIAPI WINBOOL WINAPI GetWindowExtEx(HDC hdc,LPSIZE lpsize);
  WINGDIAPI WINBOOL WINAPI GetWindowOrgEx(HDC hdc,LPPOINT lppoint);
  WINGDIAPI int WINAPI IntersectClipRect(HDC hdc,int left,int top,int right,int bottom);
  WINGDIAPI WINBOOL WINAPI InvertRgn(HDC hdc,HRGN hrgn);
  WINGDIAPI WINBOOL WINAPI LineDDA(int xStart,int yStart,int xEnd,int yEnd,LINEDDAPROC lpProc,LPARAM data);
  WINGDIAPI WINBOOL WINAPI LineTo(HDC hdc,int x,int y);
  WINGDIAPI WINBOOL WINAPI MaskBlt(HDC hdcDest,int xDest,int yDest,int width,int height,HDC hdcSrc,int xSrc,int ySrc,HBITMAP hbmMask,int xMask,int yMask,DWORD rop);
  WINGDIAPI WINBOOL WINAPI PlgBlt(HDC hdcDest,CONST POINT *lpPoint,HDC hdcSrc,int xSrc,int ySrc,int width,int height,HBITMAP hbmMask,int xMask,int yMask);
  WINGDIAPI int WINAPI OffsetClipRgn(HDC hdc,int x,int y);
  WINGDIAPI int WINAPI OffsetRgn(HRGN hrgn,int x,int y);
  WINGDIAPI WINBOOL WINAPI PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop);
  WINGDIAPI WINBOOL WINAPI Pie(HDC hdc,int left,int top,int right,int bottom,int xr1,int yr1,int xr2,int yr2);
  WINGDIAPI WINBOOL WINAPI PlayMetaFile(HDC hdc,HMETAFILE hmf);
  WINGDIAPI WINBOOL WINAPI PaintRgn(HDC hdc,HRGN hrgn);
  WINGDIAPI WINBOOL WINAPI PolyPolygon(HDC hdc,CONST POINT *apt,CONST INT *asz,int csz);
  WINGDIAPI WINBOOL WINAPI PtInRegion(HRGN hrgn,int x,int y);
  WINGDIAPI WINBOOL WINAPI PtVisible(HDC hdc,int x,int y);
  WINGDIAPI WINBOOL WINAPI RectInRegion(HRGN hrgn,CONST RECT *lprect);
  WINGDIAPI WINBOOL WINAPI RectVisible(HDC hdc,CONST RECT *lprect);
  WINGDIAPI WINBOOL WINAPI Rectangle(HDC hdc,int left,int top,int right,int bottom);
  WINGDIAPI WINBOOL WINAPI RestoreDC(HDC hdc,int nSavedDC);
  WINGDIAPI HDC WINAPI ResetDCA(HDC hdc,CONST DEVMODEA *lpdm);
  WINGDIAPI HDC WINAPI ResetDCW(HDC hdc,CONST DEVMODEW *lpdm);
  WINGDIAPI UINT WINAPI RealizePalette(HDC hdc);
  WINGDIAPI WINBOOL WINAPI RemoveFontResourceA(LPCSTR lpFileName);
  WINGDIAPI WINBOOL WINAPI RemoveFontResourceW(LPCWSTR lpFileName);
  WINGDIAPI WINBOOL WINAPI RoundRect(HDC hdc,int left,int top,int right,int bottom,int width,int height);
  WINGDIAPI WINBOOL WINAPI ResizePalette(HPALETTE hpal,UINT n);
  WINGDIAPI int WINAPI SaveDC(HDC hdc);
  WINGDIAPI int WINAPI SelectClipRgn(HDC hdc,HRGN hrgn);
  WINGDIAPI int WINAPI ExtSelectClipRgn(HDC hdc,HRGN hrgn,int mode);
  WINGDIAPI int WINAPI SetMetaRgn(HDC hdc);
  WINGDIAPI HGDIOBJ WINAPI SelectObject(HDC hdc,HGDIOBJ h);
  WINGDIAPI HPALETTE WINAPI SelectPalette(HDC hdc,HPALETTE hPal,WINBOOL bForceBkgd);
  WINGDIAPI COLORREF WINAPI SetBkColor(HDC hdc,COLORREF color);
  WINGDIAPI COLORREF WINAPI SetDCBrushColor(HDC hdc,COLORREF color);
  WINGDIAPI COLORREF WINAPI SetDCPenColor(HDC hdc,COLORREF color);
  WINGDIAPI int WINAPI SetBkMode(HDC hdc,int mode);
  WINGDIAPI LONG WINAPI SetBitmapBits(HBITMAP hbm,DWORD cb,CONST VOID *pvBits);
  WINGDIAPI UINT WINAPI SetBoundsRect(HDC hdc,CONST RECT *lprect,UINT flags);
  WINGDIAPI int WINAPI SetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,CONST VOID *lpBits,CONST BITMAPINFO *lpbmi,UINT ColorUse);
  WINGDIAPI int WINAPI SetDIBitsToDevice(HDC hdc,int xDest,int yDest,DWORD w,DWORD h,int xSrc,int ySrc,UINT StartScan,UINT cLines,CONST VOID *lpvBits,CONST BITMAPINFO *lpbmi,UINT ColorUse);
  WINGDIAPI DWORD WINAPI SetMapperFlags(HDC hdc,DWORD flags);
  WINGDIAPI int WINAPI SetGraphicsMode(HDC hdc,int iMode);
  WINGDIAPI int WINAPI SetMapMode(HDC hdc,int iMode);
  WINGDIAPI DWORD WINAPI SetLayout(HDC hdc,DWORD l);
  WINGDIAPI DWORD WINAPI GetLayout(HDC hdc);
  WINGDIAPI HMETAFILE WINAPI SetMetaFileBitsEx(UINT cbBuffer,CONST BYTE *lpData);
  WINGDIAPI UINT WINAPI SetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,CONST PALETTEENTRY *pPalEntries);
  WINGDIAPI COLORREF WINAPI SetPixel(HDC hdc,int x,int y,COLORREF color);
  WINGDIAPI WINBOOL WINAPI SetPixelV(HDC hdc,int x,int y,COLORREF color);
  WINGDIAPI WINBOOL WINAPI SetPixelFormat(HDC hdc,int format,CONST PIXELFORMATDESCRIPTOR *ppfd);
  WINGDIAPI int WINAPI SetPolyFillMode(HDC hdc,int mode);
  WINGDIAPI WINBOOL WINAPI StretchBlt(HDC hdcDest,int xDest,int yDest,int wDest,int hDest,HDC hdcSrc,int xSrc,int ySrc,int wSrc,int hSrc,DWORD rop);
  WINGDIAPI WINBOOL WINAPI SetRectRgn(HRGN hrgn,int left,int top,int right,int bottom);
  WINGDIAPI int WINAPI StretchDIBits(HDC hdc,int xDest,int yDest,int DestWidth,int DestHeight,int xSrc,int ySrc,int SrcWidth,int SrcHeight,CONST VOID *lpBits,CONST BITMAPINFO *lpbmi,UINT iUsage,DWORD rop);
  WINGDIAPI int WINAPI SetROP2(HDC hdc,int rop2);
  WINGDIAPI int WINAPI SetStretchBltMode(HDC hdc,int mode);
  WINGDIAPI UINT WINAPI SetSystemPaletteUse(HDC hdc,UINT use);
  WINGDIAPI int WINAPI SetTextCharacterExtra(HDC hdc,int extra);
  WINGDIAPI COLORREF WINAPI SetTextColor(HDC hdc,COLORREF color);
  WINGDIAPI UINT WINAPI SetTextAlign(HDC hdc,UINT align);
  WINGDIAPI WINBOOL WINAPI SetTextJustification(HDC hdc,int extra,int count);
  WINGDIAPI WINBOOL WINAPI UpdateColors(HDC hdc);

  typedef USHORT COLOR16;

  typedef struct _TRIVERTEX {
    LONG x;
    LONG y;
    COLOR16 Red;
    COLOR16 Green;
    COLOR16 Blue;
    COLOR16 Alpha;
  } TRIVERTEX,*PTRIVERTEX,*LPTRIVERTEX;

  typedef struct _GRADIENT_TRIANGLE {
    ULONG Vertex1;
    ULONG Vertex2;
    ULONG Vertex3;
  } GRADIENT_TRIANGLE,*PGRADIENT_TRIANGLE,*LPGRADIENT_TRIANGLE;

  typedef struct _GRADIENT_RECT {
    ULONG UpperLeft;
    ULONG LowerRight;
  } GRADIENT_RECT,*PGRADIENT_RECT,*LPGRADIENT_RECT;

  typedef struct _BLENDFUNCTION {
    BYTE BlendOp;
    BYTE BlendFlags;
    BYTE SourceConstantAlpha;
    BYTE AlphaFormat;
  } BLENDFUNCTION,*PBLENDFUNCTION;

#define AC_SRC_OVER 0x00
#define AC_SRC_ALPHA 0x01

  WINGDIAPI WINBOOL WINAPI AlphaBlend(HDC hdcDest,int xoriginDest,int yoriginDest,int wDest,int hDest,HDC hdcSrc,int xoriginSrc,int yoriginSrc,int wSrc,int hSrc,BLENDFUNCTION ftn);
  WINGDIAPI WINBOOL WINAPI TransparentBlt(HDC hdcDest,int xoriginDest,int yoriginDest,int wDest,int hDest,HDC hdcSrc,int xoriginSrc,int yoriginSrc,int wSrc,int hSrc,UINT crTransparent);

#define GRADIENT_FILL_RECT_H 0x00000000
#define GRADIENT_FILL_RECT_V 0x00000001
#define GRADIENT_FILL_TRIANGLE 0x00000002
#define GRADIENT_FILL_OP_FLAG 0x000000ff

  WINGDIAPI WINBOOL WINAPI GradientFill(HDC hdc,PTRIVERTEX pVertex,ULONG nVertex,PVOID pMesh,ULONG nMesh,ULONG ulMode);

#ifndef NOMETAFILE

#define CopyEnhMetaFile __MINGW_NAME_AW(CopyEnhMetaFile)
#define CreateEnhMetaFile __MINGW_NAME_AW(CreateEnhMetaFile)
#define GetEnhMetaFile __MINGW_NAME_AW(GetEnhMetaFile)
#define GetEnhMetaFileDescription __MINGW_NAME_AW(GetEnhMetaFileDescription)

  WINGDIAPI WINBOOL WINAPI PlayMetaFileRecord(HDC hdc,LPHANDLETABLE lpHandleTable,LPMETARECORD lpMR,UINT noObjs);

  typedef int (CALLBACK *MFENUMPROC)(HDC hdc,HANDLETABLE *lpht,METARECORD *lpMR,int nObj,LPARAM lParam);

  WINGDIAPI WINBOOL WINAPI EnumMetaFile(HDC hdc,HMETAFILE hmf,MFENUMPROC lpProc,LPARAM lParam);

  typedef int (CALLBACK *ENHMFENUMPROC)(HDC hdc,HANDLETABLE *lpht,CONST ENHMETARECORD *lpmr,int hHandles,LPARAM data);

  WINGDIAPI HENHMETAFILE WINAPI CloseEnhMetaFile(HDC hdc);
  WINGDIAPI HENHMETAFILE WINAPI CopyEnhMetaFileA(HENHMETAFILE hEnh,LPCSTR lpFileName);
  WINGDIAPI HENHMETAFILE WINAPI CopyEnhMetaFileW(HENHMETAFILE hEnh,LPCWSTR lpFileName);
  WINGDIAPI HDC WINAPI CreateEnhMetaFileA(HDC hdc,LPCSTR lpFilename,CONST RECT *lprc,LPCSTR lpDesc);
  WINGDIAPI HDC WINAPI CreateEnhMetaFileW(HDC hdc,LPCWSTR lpFilename,CONST RECT *lprc,LPCWSTR lpDesc);
  WINGDIAPI WINBOOL WINAPI DeleteEnhMetaFile(HENHMETAFILE hmf);
  WINGDIAPI WINBOOL WINAPI EnumEnhMetaFile(HDC hdc,HENHMETAFILE hmf,ENHMFENUMPROC lpProc,LPVOID lpParam,CONST RECT *lpRect);
  WINGDIAPI HENHMETAFILE WINAPI GetEnhMetaFileA(LPCSTR lpName);
  WINGDIAPI HENHMETAFILE WINAPI GetEnhMetaFileW(LPCWSTR lpName);
  WINGDIAPI UINT WINAPI GetEnhMetaFileBits(HENHMETAFILE hEMF,UINT nSize,LPBYTE lpData);
  WINGDIAPI UINT WINAPI GetEnhMetaFileDescriptionA(HENHMETAFILE hemf,UINT cchBuffer,LPSTR lpDescription);
  WINGDIAPI UINT WINAPI GetEnhMetaFileDescriptionW(HENHMETAFILE hemf,UINT cchBuffer,LPWSTR lpDescription);
  WINGDIAPI UINT WINAPI GetEnhMetaFileHeader(HENHMETAFILE hemf,UINT nSize,LPENHMETAHEADER lpEnhMetaHeader);
  WINGDIAPI UINT WINAPI GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf,UINT nNumEntries,LPPALETTEENTRY lpPaletteEntries);
  WINGDIAPI UINT WINAPI GetEnhMetaFilePixelFormat(HENHMETAFILE hemf,UINT cbBuffer,PIXELFORMATDESCRIPTOR *ppfd);
  WINGDIAPI UINT WINAPI GetWinMetaFileBits(HENHMETAFILE hemf,UINT cbData16,LPBYTE pData16,INT iMapMode,HDC hdcRef);
  WINGDIAPI WINBOOL WINAPI PlayEnhMetaFile(HDC hdc,HENHMETAFILE hmf,CONST RECT *lprect);
  WINGDIAPI WINBOOL WINAPI PlayEnhMetaFileRecord(HDC hdc,LPHANDLETABLE pht,CONST ENHMETARECORD *pmr,UINT cht);
  WINGDIAPI HENHMETAFILE WINAPI SetEnhMetaFileBits(UINT nSize,CONST BYTE *pb);
  WINGDIAPI HENHMETAFILE WINAPI SetWinMetaFileBits(UINT nSize,CONST BYTE *lpMeta16Data,HDC hdcRef,CONST METAFILEPICT *lpMFP);
  WINGDIAPI WINBOOL WINAPI GdiComment(HDC hdc,UINT nSize,CONST BYTE *lpData);
#endif

#ifndef NOTEXTMETRIC
#define GetTextMetrics __MINGW_NAME_AW(GetTextMetrics)

  WINGDIAPI WINBOOL WINAPI GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm);
  WINGDIAPI WINBOOL WINAPI GetTextMetricsW(HDC hdc,LPTEXTMETRICW lptm);
#endif

  typedef struct tagDIBSECTION {
    BITMAP dsBm;
    BITMAPINFOHEADER dsBmih;
    DWORD dsBitfields[3];
    HANDLE dshSection;
    DWORD dsOffset;
  } DIBSECTION,*LPDIBSECTION,*PDIBSECTION;

  WINGDIAPI WINBOOL WINAPI AngleArc(HDC hdc,int x,int y,DWORD r,FLOAT StartAngle,FLOAT SweepAngle);
  WINGDIAPI WINBOOL WINAPI PolyPolyline(HDC hdc,CONST POINT *apt,CONST DWORD *asz,DWORD csz);
  WINGDIAPI WINBOOL WINAPI GetWorldTransform(HDC hdc,LPXFORM lpxf);
  WINGDIAPI WINBOOL WINAPI SetWorldTransform(HDC hdc,CONST XFORM *lpxf);
  WINGDIAPI WINBOOL WINAPI ModifyWorldTransform(HDC hdc,CONST XFORM *lpxf,DWORD mode);
  WINGDIAPI WINBOOL WINAPI CombineTransform(LPXFORM lpxfOut,CONST XFORM *lpxf1,CONST XFORM *lpxf2);
  WINGDIAPI HBITMAP WINAPI CreateDIBSection(HDC hdc,CONST BITMAPINFO *lpbmi,UINT usage,VOID **ppvBits,HANDLE hSection,DWORD offset);
  WINGDIAPI UINT WINAPI GetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq);
  WINGDIAPI UINT WINAPI SetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,CONST RGBQUAD *prgbq);

#define CA_NEGATIVE 0x0001
#define CA_LOG_FILTER 0x0002

#define ILLUMINANT_DEVICE_DEFAULT 0
#define ILLUMINANT_A 1
#define ILLUMINANT_B 2
#define ILLUMINANT_C 3
#define ILLUMINANT_D50 4
#define ILLUMINANT_D55 5
#define ILLUMINANT_D65 6
#define ILLUMINANT_D75 7
#define ILLUMINANT_F2 8
#define ILLUMINANT_MAX_INDEX ILLUMINANT_F2

#define ILLUMINANT_TUNGSTEN ILLUMINANT_A
#define ILLUMINANT_DAYLIGHT ILLUMINANT_C
#define ILLUMINANT_FLUORESCENT ILLUMINANT_F2
#define ILLUMINANT_NTSC ILLUMINANT_C

#define RGB_GAMMA_MIN (WORD)02500
#define RGB_GAMMA_MAX (WORD)65000

#define REFERENCE_WHITE_MIN (WORD)6000
#define REFERENCE_WHITE_MAX (WORD)10000
#define REFERENCE_BLACK_MIN (WORD)0
#define REFERENCE_BLACK_MAX (WORD)4000

#define COLOR_ADJ_MIN (SHORT)-100
#define COLOR_ADJ_MAX (SHORT)100

  typedef struct tagCOLORADJUSTMENT {
    WORD caSize;
    WORD caFlags;
    WORD caIlluminantIndex;
    WORD caRedGamma;
    WORD caGreenGamma;
    WORD caBlueGamma;
    WORD caReferenceBlack;
    WORD caReferenceWhite;
    SHORT caContrast;
    SHORT caBrightness;
    SHORT caColorfulness;
    SHORT caRedGreenTint;
  } COLORADJUSTMENT,*PCOLORADJUSTMENT,*LPCOLORADJUSTMENT;

  WINGDIAPI WINBOOL WINAPI SetColorAdjustment(HDC hdc,CONST COLORADJUSTMENT *lpca);
  WINGDIAPI WINBOOL WINAPI GetColorAdjustment(HDC hdc,LPCOLORADJUSTMENT lpca);
  WINGDIAPI HPALETTE WINAPI CreateHalftonePalette(HDC hdc);

  typedef WINBOOL (CALLBACK *ABORTPROC)(HDC,int);

  typedef struct _DOCINFOA {
    int cbSize;
    LPCSTR lpszDocName;
    LPCSTR lpszOutput;
    LPCSTR lpszDatatype;
    DWORD fwType;
  } DOCINFOA,*LPDOCINFOA;

  typedef struct _DOCINFOW {
    int cbSize;
    LPCWSTR lpszDocName;
    LPCWSTR lpszOutput;
    LPCWSTR lpszDatatype;
    DWORD fwType;
  } DOCINFOW,*LPDOCINFOW;

  __MINGW_TYPEDEF_AW(DOCINFO)
  __MINGW_TYPEDEF_AW(LPDOCINFO)

#define DI_APPBANDING 0x00000001
#define DI_ROPS_READ_DESTINATION 0x00000002

#define StartDoc __MINGW_NAME_AW(StartDoc)
#define GetObject __MINGW_NAME_AW(GetObject)
#define TextOut __MINGW_NAME_AW(TextOut)
#define ExtTextOut __MINGW_NAME_AW(ExtTextOut)
#define PolyTextOut __MINGW_NAME_AW(PolyTextOut)
#define GetTextFace __MINGW_NAME_AW(GetTextFace)

  WINGDIAPI int WINAPI StartDocA(HDC hdc,CONST DOCINFOA *lpdi);
  WINGDIAPI int WINAPI StartDocW(HDC hdc,CONST DOCINFOW *lpdi);
  WINGDIAPI int WINAPI EndDoc(HDC hdc);
  WINGDIAPI int WINAPI StartPage(HDC hdc);
  WINGDIAPI int WINAPI EndPage(HDC hdc);
  WINGDIAPI int WINAPI AbortDoc(HDC hdc);
  WINGDIAPI int WINAPI SetAbortProc(HDC hdc,ABORTPROC lpProc);
  WINGDIAPI WINBOOL WINAPI AbortPath(HDC hdc);
  WINGDIAPI WINBOOL WINAPI ArcTo(HDC hdc,int left,int top,int right,int bottom,int xr1,int yr1,int xr2,int yr2);
  WINGDIAPI WINBOOL WINAPI BeginPath(HDC hdc);
  WINGDIAPI WINBOOL WINAPI CloseFigure(HDC hdc);
  WINGDIAPI WINBOOL WINAPI EndPath(HDC hdc);
  WINGDIAPI WINBOOL WINAPI FillPath(HDC hdc);
  WINGDIAPI WINBOOL WINAPI FlattenPath(HDC hdc);
  WINGDIAPI int WINAPI GetPath(HDC hdc,LPPOINT apt,LPBYTE aj,int cpt);
  WINGDIAPI HRGN WINAPI PathToRegion(HDC hdc);
  WINGDIAPI WINBOOL WINAPI PolyDraw(HDC hdc,CONST POINT *apt,CONST BYTE *aj,int cpt);
  WINGDIAPI WINBOOL WINAPI SelectClipPath(HDC hdc,int mode);
  WINGDIAPI int WINAPI SetArcDirection(HDC hdc,int dir);
  WINGDIAPI WINBOOL WINAPI SetMiterLimit(HDC hdc,FLOAT limit,PFLOAT old);
  WINGDIAPI WINBOOL WINAPI StrokeAndFillPath(HDC hdc);
  WINGDIAPI WINBOOL WINAPI StrokePath(HDC hdc);
  WINGDIAPI WINBOOL WINAPI WidenPath(HDC hdc);
  WINGDIAPI HPEN WINAPI ExtCreatePen(DWORD iPenStyle,DWORD cWidth,CONST LOGBRUSH *plbrush,DWORD cStyle,CONST DWORD *pstyle);
  WINGDIAPI WINBOOL WINAPI GetMiterLimit(HDC hdc,PFLOAT plimit);
  WINGDIAPI int WINAPI GetArcDirection(HDC hdc);
  WINGDIAPI int WINAPI GetObjectA(HANDLE h,int c,LPVOID pv);
  WINGDIAPI int WINAPI GetObjectW(HANDLE h,int c,LPVOID pv);
  WINGDIAPI WINBOOL WINAPI MoveToEx(HDC hdc,int x,int y,LPPOINT lppt);
  WINGDIAPI WINBOOL WINAPI TextOutA(HDC hdc,int x,int y,LPCSTR lpString,int c);
  WINGDIAPI WINBOOL WINAPI TextOutW(HDC hdc,int x,int y,LPCWSTR lpString,int c);
  WINGDIAPI WINBOOL WINAPI ExtTextOutA(HDC hdc,int x,int y,UINT options,CONST RECT *lprect,LPCSTR lpString,UINT c,CONST INT *lpDx);
  WINGDIAPI WINBOOL WINAPI ExtTextOutW(HDC hdc,int x,int y,UINT options,CONST RECT *lprect,LPCWSTR lpString,UINT c,CONST INT *lpDx);
  WINGDIAPI WINBOOL WINAPI PolyTextOutA(HDC hdc,CONST POLYTEXTA *ppt,int nstrings);
  WINGDIAPI WINBOOL WINAPI PolyTextOutW(HDC hdc,CONST POLYTEXTW *ppt,int nstrings);
  WINGDIAPI HRGN WINAPI CreatePolygonRgn(CONST POINT *pptl,int cPoint,int iMode);
  WINGDIAPI WINBOOL WINAPI DPtoLP(HDC hdc,LPPOINT lppt,int c);
  WINGDIAPI WINBOOL WINAPI LPtoDP(HDC hdc,LPPOINT lppt,int c);
  WINGDIAPI WINBOOL WINAPI Polygon(HDC hdc,CONST POINT *apt,int cpt);
  WINGDIAPI WINBOOL WINAPI Polyline(HDC hdc,CONST POINT *apt,int cpt);
  WINGDIAPI WINBOOL WINAPI PolyBezier(HDC hdc,CONST POINT *apt,DWORD cpt);
  WINGDIAPI WINBOOL WINAPI PolyBezierTo(HDC hdc,CONST POINT *apt,DWORD cpt);
  WINGDIAPI WINBOOL WINAPI PolylineTo(HDC hdc,CONST POINT *apt,DWORD cpt);
  WINGDIAPI WINBOOL WINAPI SetViewportExtEx(HDC hdc,int x,int y,LPSIZE lpsz);
  WINGDIAPI WINBOOL WINAPI SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
  WINGDIAPI WINBOOL WINAPI SetWindowExtEx(HDC hdc,int x,int y,LPSIZE lpsz);
  WINGDIAPI WINBOOL WINAPI SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
  WINGDIAPI WINBOOL WINAPI OffsetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
  WINGDIAPI WINBOOL WINAPI OffsetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
  WINGDIAPI WINBOOL WINAPI ScaleViewportExtEx(HDC hdc,int xn,int dx,int yn,int yd,LPSIZE lpsz);
  WINGDIAPI WINBOOL WINAPI ScaleWindowExtEx(HDC hdc,int xn,int xd,int yn,int yd,LPSIZE lpsz);
  WINGDIAPI WINBOOL WINAPI SetBitmapDimensionEx(HBITMAP hbm,int w,int h,LPSIZE lpsz);
  WINGDIAPI WINBOOL WINAPI SetBrushOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
  WINGDIAPI int WINAPI GetTextFaceA(HDC hdc,int c,LPSTR lpName);
  WINGDIAPI int WINAPI GetTextFaceW(HDC hdc,int c,LPWSTR lpName);

#define FONTMAPPER_MAX 10

  typedef struct tagKERNINGPAIR {
    WORD wFirst;
    WORD wSecond;
    int iKernAmount;
  } KERNINGPAIR,*LPKERNINGPAIR;

#define GetKerningPairs __MINGW_NAME_AW(GetKerningPairs)

  WINGDIAPI DWORD WINAPI GetKerningPairsA(HDC hdc,DWORD nPairs,LPKERNINGPAIR lpKernPair);
  WINGDIAPI DWORD WINAPI GetKerningPairsW(HDC hdc,DWORD nPairs,LPKERNINGPAIR lpKernPair);
  WINGDIAPI WINBOOL WINAPI GetDCOrgEx(HDC hdc,LPPOINT lppt);
  WINGDIAPI WINBOOL WINAPI FixBrushOrgEx(HDC hdc,int x,int y,LPPOINT ptl);
  WINGDIAPI WINBOOL WINAPI UnrealizeObject(HGDIOBJ h);
  WINGDIAPI WINBOOL WINAPI GdiFlush();
  WINGDIAPI DWORD WINAPI GdiSetBatchLimit(DWORD dw);
  WINGDIAPI DWORD WINAPI GdiGetBatchLimit();

#define ICM_OFF 1
#define ICM_ON 2
#define ICM_QUERY 3
#define ICM_DONE_OUTSIDEDC 4

  typedef int (CALLBACK *ICMENUMPROCA)(LPSTR,LPARAM);
  typedef int (CALLBACK *ICMENUMPROCW)(LPWSTR,LPARAM);

#define ICMENUMPROC __MINGW_NAME_AW(ICMENUMPROC)
#define EnumICMProfiles __MINGW_NAME_AW(EnumICMProfiles)
#define UpdateICMRegKey __MINGW_NAME_AW(UpdateICMRegKey)
#define GetLogColorSpace __MINGW_NAME_AW(GetLogColorSpace)
#define CreateColorSpace __MINGW_NAME_AW(CreateColorSpace)
#define GetICMProfile __MINGW_NAME_AW(GetICMProfile)
#define SetICMProfile __MINGW_NAME_AW(SetICMProfile)

  WINGDIAPI int WINAPI SetICMMode(HDC hdc,int mode);
  WINGDIAPI WINBOOL WINAPI CheckColorsInGamut(HDC hdc,LPVOID lpRGBTriple,LPVOID dlpBuffer,DWORD nCount);
  WINGDIAPI HCOLORSPACE WINAPI GetColorSpace(HDC hdc);
  WINGDIAPI WINBOOL WINAPI GetLogColorSpaceA(HCOLORSPACE hColorSpace,LPLOGCOLORSPACEA lpBuffer,DWORD nSize);
  WINGDIAPI WINBOOL WINAPI GetLogColorSpaceW(HCOLORSPACE hColorSpace,LPLOGCOLORSPACEW lpBuffer,DWORD nSize);
  WINGDIAPI HCOLORSPACE WINAPI CreateColorSpaceA(LPLOGCOLORSPACEA lplcs);
  WINGDIAPI HCOLORSPACE WINAPI CreateColorSpaceW(LPLOGCOLORSPACEW lplcs);
  WINGDIAPI HCOLORSPACE WINAPI SetColorSpace(HDC hdc,HCOLORSPACE hcs);
  WINGDIAPI WINBOOL WINAPI DeleteColorSpace(HCOLORSPACE hcs);
  WINGDIAPI WINBOOL WINAPI GetICMProfileA(HDC hdc,LPDWORD pBufSize,LPSTR pszFilename);
  WINGDIAPI WINBOOL WINAPI GetICMProfileW(HDC hdc,LPDWORD pBufSize,LPWSTR pszFilename);
  WINGDIAPI WINBOOL WINAPI SetICMProfileA(HDC hdc,LPSTR lpFileName);
  WINGDIAPI WINBOOL WINAPI SetICMProfileW(HDC hdc,LPWSTR lpFileName);
  WINGDIAPI WINBOOL WINAPI GetDeviceGammaRamp(HDC hdc,LPVOID lpRamp);
  WINGDIAPI WINBOOL WINAPI SetDeviceGammaRamp(HDC hdc,LPVOID lpRamp);
  WINGDIAPI WINBOOL WINAPI ColorMatchToTarget(HDC hdc,HDC hdcTarget,DWORD action);
  WINGDIAPI int WINAPI EnumICMProfilesA(HDC hdc,ICMENUMPROCA lpProc,LPARAM lParam);
  WINGDIAPI int WINAPI EnumICMProfilesW(HDC hdc,ICMENUMPROCW lpProc,LPARAM lParam);
  WINGDIAPI WINBOOL WINAPI UpdateICMRegKeyA(DWORD reserved,LPSTR lpszCMID,LPSTR lpszFileName,UINT command);
  WINGDIAPI WINBOOL WINAPI UpdateICMRegKeyW(DWORD reserved,LPWSTR lpszCMID,LPWSTR lpszFileName,UINT command);
  WINGDIAPI WINBOOL WINAPI ColorCorrectPalette(HDC hdc,HPALETTE hPal,DWORD deFirst,DWORD num);

#ifndef NOMETAFILE

#define ENHMETA_SIGNATURE 0x464D4520
#define ENHMETA_STOCK_OBJECT 0x80000000

#define EMR_HEADER 1
#define EMR_POLYBEZIER 2
#define EMR_POLYGON 3
#define EMR_POLYLINE 4
#define EMR_POLYBEZIERTO 5
#define EMR_POLYLINETO 6
#define EMR_POLYPOLYLINE 7
#define EMR_POLYPOLYGON 8
#define EMR_SETWINDOWEXTEX 9
#define EMR_SETWINDOWORGEX 10
#define EMR_SETVIEWPORTEXTEX 11
#define EMR_SETVIEWPORTORGEX 12
#define EMR_SETBRUSHORGEX 13
#define EMR_EOF 14
#define EMR_SETPIXELV 15
#define EMR_SETMAPPERFLAGS 16
#define EMR_SETMAPMODE 17
#define EMR_SETBKMODE 18
#define EMR_SETPOLYFILLMODE 19
#define EMR_SETROP2 20
#define EMR_SETSTRETCHBLTMODE 21
#define EMR_SETTEXTALIGN 22
#define EMR_SETCOLORADJUSTMENT 23
#define EMR_SETTEXTCOLOR 24
#define EMR_SETBKCOLOR 25
#define EMR_OFFSETCLIPRGN 26
#define EMR_MOVETOEX 27
#define EMR_SETMETARGN 28
#define EMR_EXCLUDECLIPRECT 29
#define EMR_INTERSECTCLIPRECT 30
#define EMR_SCALEVIEWPORTEXTEX 31
#define EMR_SCALEWINDOWEXTEX 32
#define EMR_SAVEDC 33
#define EMR_RESTOREDC 34
#define EMR_SETWORLDTRANSFORM 35
#define EMR_MODIFYWORLDTRANSFORM 36
#define EMR_SELECTOBJECT 37
#define EMR_CREATEPEN 38
#define EMR_CREATEBRUSHINDIRECT 39
#define EMR_DELETEOBJECT 40
#define EMR_ANGLEARC 41
#define EMR_ELLIPSE 42
#define EMR_RECTANGLE 43
#define EMR_ROUNDRECT 44
#define EMR_ARC 45
#define EMR_CHORD 46
#define EMR_PIE 47
#define EMR_SELECTPALETTE 48
#define EMR_CREATEPALETTE 49
#define EMR_SETPALETTEENTRIES 50
#define EMR_RESIZEPALETTE 51
#define EMR_REALIZEPALETTE 52
#define EMR_EXTFLOODFILL 53
#define EMR_LINETO 54
#define EMR_ARCTO 55
#define EMR_POLYDRAW 56
#define EMR_SETARCDIRECTION 57
#define EMR_SETMITERLIMIT 58
#define EMR_BEGINPATH 59
#define EMR_ENDPATH 60
#define EMR_CLOSEFIGURE 61
#define EMR_FILLPATH 62
#define EMR_STROKEANDFILLPATH 63
#define EMR_STROKEPATH 64
#define EMR_FLATTENPATH 65
#define EMR_WIDENPATH 66
#define EMR_SELECTCLIPPATH 67
#define EMR_ABORTPATH 68

#define EMR_GDICOMMENT 70
#define EMR_FILLRGN 71
#define EMR_FRAMERGN 72
#define EMR_INVERTRGN 73
#define EMR_PAINTRGN 74
#define EMR_EXTSELECTCLIPRGN 75
#define EMR_BITBLT 76
#define EMR_STRETCHBLT 77
#define EMR_MASKBLT 78
#define EMR_PLGBLT 79
#define EMR_SETDIBITSTODEVICE 80
#define EMR_STRETCHDIBITS 81
#define EMR_EXTCREATEFONTINDIRECTW 82
#define EMR_EXTTEXTOUTA 83
#define EMR_EXTTEXTOUTW 84
#define EMR_POLYBEZIER16 85
#define EMR_POLYGON16 86
#define EMR_POLYLINE16 87
#define EMR_POLYBEZIERTO16 88
#define EMR_POLYLINETO16 89
#define EMR_POLYPOLYLINE16 90
#define EMR_POLYPOLYGON16 91
#define EMR_POLYDRAW16 92
#define EMR_CREATEMONOBRUSH 93
#define EMR_CREATEDIBPATTERNBRUSHPT 94
#define EMR_EXTCREATEPEN 95
#define EMR_POLYTEXTOUTA 96
#define EMR_POLYTEXTOUTW 97

#define EMR_SETICMMODE 98
#define EMR_CREATECOLORSPACE 99
#define EMR_SETCOLORSPACE 100
#define EMR_DELETECOLORSPACE 101
#define EMR_GLSRECORD 102
#define EMR_GLSBOUNDEDRECORD 103
#define EMR_PIXELFORMAT 104
#define EMR_RESERVED_105 105
#define EMR_RESERVED_106 106
#define EMR_RESERVED_107 107
#define EMR_RESERVED_108 108
#define EMR_RESERVED_109 109
#define EMR_RESERVED_110 110
#define EMR_COLORCORRECTPALETTE 111
#define EMR_SETICMPROFILEA 112
#define EMR_SETICMPROFILEW 113
#define EMR_ALPHABLEND 114
#define EMR_SETLAYOUT 115
#define EMR_TRANSPARENTBLT 116
#define EMR_RESERVED_117 117
#define EMR_GRADIENTFILL 118
#define EMR_RESERVED_119 119
#define EMR_RESERVED_120 120
#define EMR_COLORMATCHTOTARGETW 121
#define EMR_CREATECOLORSPACEW 122

#define EMR_MIN 1

#define EMR_MAX 122

  typedef struct tagEMR {
    DWORD iType;
    DWORD nSize;
  } EMR,*PEMR;

  typedef struct tagEMRTEXT {
    POINTL ptlReference;
    DWORD nChars;
    DWORD offString;
    DWORD fOptions;
    RECTL rcl;
    DWORD offDx;
  } EMRTEXT,*PEMRTEXT;

  typedef struct tagABORTPATH {
    EMR emr;
  } EMRABORTPATH,*PEMRABORTPATH,EMRBEGINPATH,*PEMRBEGINPATH,EMRENDPATH,*PEMRENDPATH,EMRCLOSEFIGURE,*PEMRCLOSEFIGURE,EMRFLATTENPATH,*PEMRFLATTENPATH,EMRWIDENPATH,*PEMRWIDENPATH,EMRSETMETARGN,*PEMRSETMETARGN,EMRSAVEDC,*PEMRSAVEDC,EMRREALIZEPALETTE,*PEMRREALIZEPALETTE;

  typedef struct tagEMRSELECTCLIPPATH {
    EMR emr;
    DWORD iMode;
  } EMRSELECTCLIPPATH,*PEMRSELECTCLIPPATH,EMRSETBKMODE,*PEMRSETBKMODE,EMRSETMAPMODE,*PEMRSETMAPMODE,EMRSETLAYOUT,*PEMRSETLAYOUT,
    EMRSETPOLYFILLMODE,*PEMRSETPOLYFILLMODE,EMRSETROP2,*PEMRSETROP2,EMRSETSTRETCHBLTMODE,*PEMRSETSTRETCHBLTMODE,EMRSETICMMODE,
    *PEMRSETICMMODE,EMRSETTEXTALIGN,*PEMRSETTEXTALIGN;

  typedef struct tagEMRSETMITERLIMIT {
    EMR emr;
    FLOAT eMiterLimit;
  } EMRSETMITERLIMIT,*PEMRSETMITERLIMIT;

  typedef struct tagEMRRESTOREDC {
    EMR emr;
    LONG iRelative;
  } EMRRESTOREDC,*PEMRRESTOREDC;

  typedef struct tagEMRSETARCDIRECTION {
    EMR emr;
    DWORD iArcDirection;

  } EMRSETARCDIRECTION,*PEMRSETARCDIRECTION;

  typedef struct tagEMRSETMAPPERFLAGS {
    EMR emr;
    DWORD dwFlags;
  } EMRSETMAPPERFLAGS,*PEMRSETMAPPERFLAGS;

  typedef struct tagEMRSETTEXTCOLOR {
    EMR emr;
    COLORREF crColor;
  } EMRSETBKCOLOR,*PEMRSETBKCOLOR,EMRSETTEXTCOLOR,*PEMRSETTEXTCOLOR;

  typedef struct tagEMRSELECTOBJECT {
    EMR emr;
    DWORD ihObject;
  } EMRSELECTOBJECT,*PEMRSELECTOBJECT,EMRDELETEOBJECT,*PEMRDELETEOBJECT;

  typedef struct tagEMRSELECTPALETTE {
    EMR emr;
    DWORD ihPal;
  } EMRSELECTPALETTE,*PEMRSELECTPALETTE;

  typedef struct tagEMRRESIZEPALETTE {
    EMR emr;
    DWORD ihPal;
    DWORD cEntries;
  } EMRRESIZEPALETTE,*PEMRRESIZEPALETTE;

  typedef struct tagEMRSETPALETTEENTRIES {
    EMR emr;
    DWORD ihPal;
    DWORD iStart;
    DWORD cEntries;
    PALETTEENTRY aPalEntries[1];
  } EMRSETPALETTEENTRIES,*PEMRSETPALETTEENTRIES;

  typedef struct tagEMRSETCOLORADJUSTMENT {
    EMR emr;
    COLORADJUSTMENT ColorAdjustment;
  } EMRSETCOLORADJUSTMENT,*PEMRSETCOLORADJUSTMENT;

  typedef struct tagEMRGDICOMMENT {
    EMR emr;
    DWORD cbData;
    BYTE Data[1];
  } EMRGDICOMMENT,*PEMRGDICOMMENT;

  typedef struct tagEMREOF {
    EMR emr;
    DWORD nPalEntries;
    DWORD offPalEntries;
    DWORD nSizeLast;
  } EMREOF,*PEMREOF;

  typedef struct tagEMRLINETO {
    EMR emr;
    POINTL ptl;
  } EMRLINETO,*PEMRLINETO,EMRMOVETOEX,*PEMRMOVETOEX;

  typedef struct tagEMROFFSETCLIPRGN {
    EMR emr;
    POINTL ptlOffset;
  } EMROFFSETCLIPRGN,*PEMROFFSETCLIPRGN;

  typedef struct tagEMRFILLPATH {
    EMR emr;
    RECTL rclBounds;
  } EMRFILLPATH,*PEMRFILLPATH,EMRSTROKEANDFILLPATH,*PEMRSTROKEANDFILLPATH,EMRSTROKEPATH,*PEMRSTROKEPATH;

  typedef struct tagEMREXCLUDECLIPRECT {
    EMR emr;
    RECTL rclClip;
  } EMREXCLUDECLIPRECT,*PEMREXCLUDECLIPRECT,EMRINTERSECTCLIPRECT,*PEMRINTERSECTCLIPRECT;

  typedef struct tagEMRSETVIEWPORTORGEX {
    EMR emr;
    POINTL ptlOrigin;
  } EMRSETVIEWPORTORGEX,*PEMRSETVIEWPORTORGEX,EMRSETWINDOWORGEX,*PEMRSETWINDOWORGEX,EMRSETBRUSHORGEX,*PEMRSETBRUSHORGEX;

  typedef struct tagEMRSETVIEWPORTEXTEX {
    EMR emr;
    SIZEL szlExtent;
  } EMRSETVIEWPORTEXTEX,*PEMRSETVIEWPORTEXTEX,EMRSETWINDOWEXTEX,*PEMRSETWINDOWEXTEX;

  typedef struct tagEMRSCALEVIEWPORTEXTEX {
    EMR emr;
    LONG xNum;
    LONG xDenom;
    LONG yNum;
    LONG yDenom;
  } EMRSCALEVIEWPORTEXTEX,*PEMRSCALEVIEWPORTEXTEX,EMRSCALEWINDOWEXTEX,*PEMRSCALEWINDOWEXTEX;

  typedef struct tagEMRSETWORLDTRANSFORM {
    EMR emr;
    XFORM xform;
  } EMRSETWORLDTRANSFORM,*PEMRSETWORLDTRANSFORM;

  typedef struct tagEMRMODIFYWORLDTRANSFORM {
    EMR emr;
    XFORM xform;
    DWORD iMode;
  } EMRMODIFYWORLDTRANSFORM,*PEMRMODIFYWORLDTRANSFORM;

  typedef struct tagEMRSETPIXELV {
    EMR emr;
    POINTL ptlPixel;
    COLORREF crColor;
  } EMRSETPIXELV,*PEMRSETPIXELV;

  typedef struct tagEMREXTFLOODFILL {
    EMR emr;
    POINTL ptlStart;
    COLORREF crColor;
    DWORD iMode;
  } EMREXTFLOODFILL,*PEMREXTFLOODFILL;

  typedef struct tagEMRELLIPSE {
    EMR emr;
    RECTL rclBox;
  } EMRELLIPSE,*PEMRELLIPSE,EMRRECTANGLE,*PEMRRECTANGLE;

  typedef struct tagEMRROUNDRECT {
    EMR emr;
    RECTL rclBox;
    SIZEL szlCorner;
  } EMRROUNDRECT,*PEMRROUNDRECT;

  typedef struct tagEMRARC {
    EMR emr;
    RECTL rclBox;
    POINTL ptlStart;
    POINTL ptlEnd;
  } EMRARC,*PEMRARC,EMRARCTO,*PEMRARCTO,EMRCHORD,*PEMRCHORD,EMRPIE,*PEMRPIE;

  typedef struct tagEMRANGLEARC {
    EMR emr;
    POINTL ptlCenter;
    DWORD nRadius;
    FLOAT eStartAngle;
    FLOAT eSweepAngle;
  } EMRANGLEARC,*PEMRANGLEARC;

  typedef struct tagEMRPOLYLINE {
    EMR emr;
    RECTL rclBounds;
    DWORD cptl;
    POINTL aptl[1];
  } EMRPOLYLINE,*PEMRPOLYLINE,EMRPOLYBEZIER,*PEMRPOLYBEZIER,EMRPOLYGON,*PEMRPOLYGON,EMRPOLYBEZIERTO,*PEMRPOLYBEZIERTO,EMRPOLYLINETO,*PEMRPOLYLINETO;

  typedef struct tagEMRPOLYLINE16 {
    EMR emr;
    RECTL rclBounds;
    DWORD cpts;
    POINTS apts[1];
  } EMRPOLYLINE16,*PEMRPOLYLINE16,EMRPOLYBEZIER16,*PEMRPOLYBEZIER16,EMRPOLYGON16,*PEMRPOLYGON16,EMRPOLYBEZIERTO16,*PEMRPOLYBEZIERTO16,EMRPOLYLINETO16,*PEMRPOLYLINETO16;

  typedef struct tagEMRPOLYDRAW {
    EMR emr;
    RECTL rclBounds;
    DWORD cptl;
    POINTL aptl[1];
    BYTE abTypes[1];
  } EMRPOLYDRAW,*PEMRPOLYDRAW;

  typedef struct tagEMRPOLYDRAW16 {
    EMR emr;
    RECTL rclBounds;
    DWORD cpts;
    POINTS apts[1];
    BYTE abTypes[1];
  } EMRPOLYDRAW16,*PEMRPOLYDRAW16;

  typedef struct tagEMRPOLYPOLYLINE {
    EMR emr;
    RECTL rclBounds;
    DWORD nPolys;
    DWORD cptl;
    DWORD aPolyCounts[1];
    POINTL aptl[1];
  } EMRPOLYPOLYLINE,*PEMRPOLYPOLYLINE,EMRPOLYPOLYGON,*PEMRPOLYPOLYGON;

  typedef struct tagEMRPOLYPOLYLINE16 {
    EMR emr;
    RECTL rclBounds;
    DWORD nPolys;
    DWORD cpts;
    DWORD aPolyCounts[1];
    POINTS apts[1];
  } EMRPOLYPOLYLINE16,*PEMRPOLYPOLYLINE16,EMRPOLYPOLYGON16,*PEMRPOLYPOLYGON16;

  typedef struct tagEMRINVERTRGN {
    EMR emr;
    RECTL rclBounds;
    DWORD cbRgnData;
    BYTE RgnData[1];
  } EMRINVERTRGN,*PEMRINVERTRGN,EMRPAINTRGN,*PEMRPAINTRGN;

  typedef struct tagEMRFILLRGN {
    EMR emr;
    RECTL rclBounds;
    DWORD cbRgnData;
    DWORD ihBrush;
    BYTE RgnData[1];
  } EMRFILLRGN,*PEMRFILLRGN;

  typedef struct tagEMRFRAMERGN {
    EMR emr;
    RECTL rclBounds;
    DWORD cbRgnData;
    DWORD ihBrush;
    SIZEL szlStroke;
    BYTE RgnData[1];
  } EMRFRAMERGN,*PEMRFRAMERGN;

  typedef struct tagEMREXTSELECTCLIPRGN {
    EMR emr;
    DWORD cbRgnData;
    DWORD iMode;
    BYTE RgnData[1];
  } EMREXTSELECTCLIPRGN,*PEMREXTSELECTCLIPRGN;

  typedef struct tagEMREXTTEXTOUTA {
    EMR emr;
    RECTL rclBounds;
    DWORD iGraphicsMode;
    FLOAT exScale;
    FLOAT eyScale;
    EMRTEXT emrtext;
  } EMREXTTEXTOUTA,*PEMREXTTEXTOUTA,EMREXTTEXTOUTW,*PEMREXTTEXTOUTW;

  typedef struct tagEMRPOLYTEXTOUTA {
    EMR emr;
    RECTL rclBounds;
    DWORD iGraphicsMode;
    FLOAT exScale;
    FLOAT eyScale;
    LONG cStrings;
    EMRTEXT aemrtext[1];
  } EMRPOLYTEXTOUTA,*PEMRPOLYTEXTOUTA,EMRPOLYTEXTOUTW,*PEMRPOLYTEXTOUTW;

  typedef struct tagEMRBITBLT {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
  } EMRBITBLT,*PEMRBITBLT;

  typedef struct tagEMRSTRETCHBLT {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG cxSrc;
    LONG cySrc;
  } EMRSTRETCHBLT,*PEMRSTRETCHBLT;

  typedef struct tagEMRMASKBLT {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG xMask;
    LONG yMask;
    DWORD iUsageMask;
    DWORD offBmiMask;
    DWORD cbBmiMask;
    DWORD offBitsMask;
    DWORD cbBitsMask;
  } EMRMASKBLT,*PEMRMASKBLT;

  typedef struct tagEMRPLGBLT {
    EMR emr;
    RECTL rclBounds;
    POINTL aptlDest[3];
    LONG xSrc;
    LONG ySrc;
    LONG cxSrc;
    LONG cySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG xMask;
    LONG yMask;
    DWORD iUsageMask;
    DWORD offBmiMask;
    DWORD cbBmiMask;
    DWORD offBitsMask;
    DWORD cbBitsMask;
  } EMRPLGBLT,*PEMRPLGBLT;

  typedef struct tagEMRSETDIBITSTODEVICE {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG xSrc;
    LONG ySrc;
    LONG cxSrc;
    LONG cySrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    DWORD iUsageSrc;
    DWORD iStartScan;
    DWORD cScans;
  } EMRSETDIBITSTODEVICE,*PEMRSETDIBITSTODEVICE;

  typedef struct tagEMRSTRETCHDIBITS {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG xSrc;
    LONG ySrc;
    LONG cxSrc;
    LONG cySrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    DWORD iUsageSrc;
    DWORD dwRop;
    LONG cxDest;
    LONG cyDest;
  } EMRSTRETCHDIBITS,*PEMRSTRETCHDIBITS;

  typedef struct tagEMREXTCREATEFONTINDIRECTW {
    EMR emr;
    DWORD ihFont;
    EXTLOGFONTW elfw;
  } EMREXTCREATEFONTINDIRECTW,*PEMREXTCREATEFONTINDIRECTW;

  typedef struct tagEMRCREATEPALETTE {
    EMR emr;
    DWORD ihPal;
    LOGPALETTE lgpl;
  } EMRCREATEPALETTE,*PEMRCREATEPALETTE;

  typedef struct tagEMRCREATEPEN {
    EMR emr;
    DWORD ihPen;
    LOGPEN lopn;
  } EMRCREATEPEN,*PEMRCREATEPEN;

  typedef struct tagEMREXTCREATEPEN {
    EMR emr;
    DWORD ihPen;
    DWORD offBmi;
    DWORD cbBmi;
    DWORD offBits;
    DWORD cbBits;
    EXTLOGPEN elp;
  } EMREXTCREATEPEN,*PEMREXTCREATEPEN;

  typedef struct tagEMRCREATEBRUSHINDIRECT {
    EMR emr;
    DWORD ihBrush;
    LOGBRUSH32 lb;
  } EMRCREATEBRUSHINDIRECT,*PEMRCREATEBRUSHINDIRECT;

  typedef struct tagEMRCREATEMONOBRUSH {
    EMR emr;
    DWORD ihBrush;
    DWORD iUsage;
    DWORD offBmi;
    DWORD cbBmi;
    DWORD offBits;
    DWORD cbBits;
  } EMRCREATEMONOBRUSH,*PEMRCREATEMONOBRUSH;

  typedef struct tagEMRCREATEDIBPATTERNBRUSHPT {
    EMR emr;
    DWORD ihBrush;
    DWORD iUsage;
    DWORD offBmi;
    DWORD cbBmi;
    DWORD offBits;
    DWORD cbBits;
  } EMRCREATEDIBPATTERNBRUSHPT,*PEMRCREATEDIBPATTERNBRUSHPT;

  typedef struct tagEMRFORMAT {
    DWORD dSignature;
    DWORD nVersion;
    DWORD cbData;
    DWORD offData;
  } EMRFORMAT,*PEMRFORMAT;

  typedef struct tagEMRGLSRECORD {
    EMR emr;
    DWORD cbData;
    BYTE Data[1];
  } EMRGLSRECORD,*PEMRGLSRECORD;

  typedef struct tagEMRGLSBOUNDEDRECORD {
    EMR emr;
    RECTL rclBounds;
    DWORD cbData;
    BYTE Data[1];
  } EMRGLSBOUNDEDRECORD,*PEMRGLSBOUNDEDRECORD;

  typedef struct tagEMRPIXELFORMAT {
    EMR emr;
    PIXELFORMATDESCRIPTOR pfd;
  } EMRPIXELFORMAT,*PEMRPIXELFORMAT;

  typedef struct tagEMRCREATECOLORSPACE {
    EMR emr;
    DWORD ihCS;
    LOGCOLORSPACEA lcs;
  } EMRCREATECOLORSPACE,*PEMRCREATECOLORSPACE;

  typedef struct tagEMRSETCOLORSPACE {
    EMR emr;
    DWORD ihCS;
  } EMRSETCOLORSPACE,*PEMRSETCOLORSPACE,EMRSELECTCOLORSPACE,*PEMRSELECTCOLORSPACE,EMRDELETECOLORSPACE,*PEMRDELETECOLORSPACE;

  typedef struct tagEMREXTESCAPE {
    EMR emr;
    INT iEscape;
    INT cbEscData;
    BYTE EscData[1];
  } EMREXTESCAPE,*PEMREXTESCAPE,EMRDRAWESCAPE,*PEMRDRAWESCAPE;

  typedef struct tagEMRNAMEDESCAPE {
    EMR emr;
    INT iEscape;
    INT cbDriver;
    INT cbEscData;
    BYTE EscData[1];
  } EMRNAMEDESCAPE,*PEMRNAMEDESCAPE;

#define SETICMPROFILE_EMBEDED 0x00000001

  typedef struct tagEMRSETICMPROFILE {
    EMR emr;
    DWORD dwFlags;
    DWORD cbName;
    DWORD cbData;
    BYTE Data[1];
  } EMRSETICMPROFILE,*PEMRSETICMPROFILE,EMRSETICMPROFILEA,*PEMRSETICMPROFILEA,EMRSETICMPROFILEW,*PEMRSETICMPROFILEW;

#define CREATECOLORSPACE_EMBEDED 0x00000001

  typedef struct tagEMRCREATECOLORSPACEW {
    EMR emr;
    DWORD ihCS;
    LOGCOLORSPACEW lcs;
    DWORD dwFlags;
    DWORD cbData;
    BYTE Data[1];
  } EMRCREATECOLORSPACEW,*PEMRCREATECOLORSPACEW;

#define COLORMATCHTOTARGET_EMBEDED 0x00000001

  typedef struct tagCOLORMATCHTOTARGET {
    EMR emr;
    DWORD dwAction;
    DWORD dwFlags;
    DWORD cbName;
    DWORD cbData;
    BYTE Data[1];
  } EMRCOLORMATCHTOTARGET,*PEMRCOLORMATCHTOTARGET;

  typedef struct tagCOLORCORRECTPALETTE {
    EMR emr;
    DWORD ihPalette;
    DWORD nFirstEntry;
    DWORD nPalEntries;
    DWORD nReserved;
  } EMRCOLORCORRECTPALETTE,*PEMRCOLORCORRECTPALETTE;

  typedef struct tagEMRALPHABLEND {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG cxSrc;
    LONG cySrc;
  } EMRALPHABLEND,*PEMRALPHABLEND;

  typedef struct tagEMRGRADIENTFILL {
    EMR emr;
    RECTL rclBounds;
    DWORD nVer;
    DWORD nTri;
    ULONG ulMode;
    TRIVERTEX Ver[1];
  } EMRGRADIENTFILL,*PEMRGRADIENTFILL;

  typedef struct tagEMRTRANSPARENTBLT {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG cxSrc;
    LONG cySrc;
  } EMRTRANSPARENTBLT,*PEMRTRANSPARENTBLT;

#define GDICOMMENT_IDENTIFIER 0x43494447
#define GDICOMMENT_WINDOWS_METAFILE 0x80000001
#define GDICOMMENT_BEGINGROUP 0x00000002
#define GDICOMMENT_ENDGROUP 0x00000003
#define GDICOMMENT_MULTIFORMATS 0x40000004
#define EPS_SIGNATURE 0x46535045
#define GDICOMMENT_UNICODE_STRING 0x00000040
#define GDICOMMENT_UNICODE_END 0x00000080
#endif

#define wglUseFontBitmaps __MINGW_NAME_AW(wglUseFontBitmaps)

  WINGDIAPI WINBOOL WINAPI wglCopyContext(HGLRC,HGLRC,UINT);
  WINGDIAPI HGLRC WINAPI wglCreateContext(HDC);
  WINGDIAPI HGLRC WINAPI wglCreateLayerContext(HDC,int);
  WINGDIAPI WINBOOL WINAPI wglDeleteContext(HGLRC);
  WINGDIAPI HGLRC WINAPI wglGetCurrentContext(VOID);
  WINGDIAPI HDC WINAPI wglGetCurrentDC(VOID);
  WINGDIAPI PROC WINAPI wglGetProcAddress(LPCSTR);
  WINGDIAPI WINBOOL WINAPI wglMakeCurrent(HDC,HGLRC);
  WINGDIAPI WINBOOL WINAPI wglShareLists(HGLRC,HGLRC);
  WINGDIAPI WINBOOL WINAPI wglUseFontBitmapsA(HDC,DWORD,DWORD,DWORD);
  WINGDIAPI WINBOOL WINAPI wglUseFontBitmapsW(HDC,DWORD,DWORD,DWORD);
  WINGDIAPI WINBOOL WINAPI SwapBuffers(HDC);

  typedef struct _POINTFLOAT {
    FLOAT x;
    FLOAT y;
  } POINTFLOAT,*PPOINTFLOAT;

  typedef struct _GLYPHMETRICSFLOAT {
    FLOAT gmfBlackBoxX;
    FLOAT gmfBlackBoxY;
    POINTFLOAT gmfptGlyphOrigin;
    FLOAT gmfCellIncX;
    FLOAT gmfCellIncY;
  } GLYPHMETRICSFLOAT,*PGLYPHMETRICSFLOAT,*LPGLYPHMETRICSFLOAT;

#define WGL_FONT_LINES 0
#define WGL_FONT_POLYGONS 1

#define wglUseFontOutlines __MINGW_NAME_AW(wglUseFontOutlines)

  WINGDIAPI WINBOOL WINAPI wglUseFontOutlinesA(HDC,DWORD,DWORD,DWORD,FLOAT,FLOAT,int,LPGLYPHMETRICSFLOAT);
  WINGDIAPI WINBOOL WINAPI wglUseFontOutlinesW(HDC,DWORD,DWORD,DWORD,FLOAT,FLOAT,int,LPGLYPHMETRICSFLOAT);

  typedef struct tagLAYERPLANEDESCRIPTOR {
    WORD nSize;
    WORD nVersion;
    DWORD dwFlags;
    BYTE iPixelType;
    BYTE cColorBits;
    BYTE cRedBits;
    BYTE cRedShift;
    BYTE cGreenBits;
    BYTE cGreenShift;
    BYTE cBlueBits;
    BYTE cBlueShift;
    BYTE cAlphaBits;
    BYTE cAlphaShift;
    BYTE cAccumBits;
    BYTE cAccumRedBits;
    BYTE cAccumGreenBits;
    BYTE cAccumBlueBits;
    BYTE cAccumAlphaBits;
    BYTE cDepthBits;
    BYTE cStencilBits;
    BYTE cAuxBuffers;
    BYTE iLayerPlane;
    BYTE bReserved;
    COLORREF crTransparent;
  } LAYERPLANEDESCRIPTOR,*PLAYERPLANEDESCRIPTOR,*LPLAYERPLANEDESCRIPTOR;

#define LPD_DOUBLEBUFFER 0x00000001
#define LPD_STEREO 0x00000002
#define LPD_SUPPORT_GDI 0x00000010
#define LPD_SUPPORT_OPENGL 0x00000020
#define LPD_SHARE_DEPTH 0x00000040
#define LPD_SHARE_STENCIL 0x00000080
#define LPD_SHARE_ACCUM 0x00000100
#define LPD_SWAP_EXCHANGE 0x00000200
#define LPD_SWAP_COPY 0x00000400
#define LPD_TRANSPARENT 0x00001000

#define LPD_TYPE_RGBA 0
#define LPD_TYPE_COLORINDEX 1

#define WGL_SWAP_MAIN_PLANE 0x00000001
#define WGL_SWAP_OVERLAY1 0x00000002
#define WGL_SWAP_OVERLAY2 0x00000004
#define WGL_SWAP_OVERLAY3 0x00000008
#define WGL_SWAP_OVERLAY4 0x00000010
#define WGL_SWAP_OVERLAY5 0x00000020
#define WGL_SWAP_OVERLAY6 0x00000040
#define WGL_SWAP_OVERLAY7 0x00000080
#define WGL_SWAP_OVERLAY8 0x00000100
#define WGL_SWAP_OVERLAY9 0x00000200
#define WGL_SWAP_OVERLAY10 0x00000400
#define WGL_SWAP_OVERLAY11 0x00000800
#define WGL_SWAP_OVERLAY12 0x00001000
#define WGL_SWAP_OVERLAY13 0x00002000
#define WGL_SWAP_OVERLAY14 0x00004000
#define WGL_SWAP_OVERLAY15 0x00008000
#define WGL_SWAP_UNDERLAY1 0x00010000
#define WGL_SWAP_UNDERLAY2 0x00020000
#define WGL_SWAP_UNDERLAY3 0x00040000
#define WGL_SWAP_UNDERLAY4 0x00080000
#define WGL_SWAP_UNDERLAY5 0x00100000
#define WGL_SWAP_UNDERLAY6 0x00200000
#define WGL_SWAP_UNDERLAY7 0x00400000
#define WGL_SWAP_UNDERLAY8 0x00800000
#define WGL_SWAP_UNDERLAY9 0x01000000
#define WGL_SWAP_UNDERLAY10 0x02000000
#define WGL_SWAP_UNDERLAY11 0x04000000
#define WGL_SWAP_UNDERLAY12 0x08000000
#define WGL_SWAP_UNDERLAY13 0x10000000
#define WGL_SWAP_UNDERLAY14 0x20000000
#define WGL_SWAP_UNDERLAY15 0x40000000

  WINGDIAPI WINBOOL WINAPI wglDescribeLayerPlane(HDC,int,int,UINT,LPLAYERPLANEDESCRIPTOR);
  WINGDIAPI int WINAPI wglSetLayerPaletteEntries(HDC,int,int,int,CONST COLORREF *);
  WINGDIAPI int WINAPI wglGetLayerPaletteEntries(HDC,int,int,int,COLORREF *);
  WINGDIAPI WINBOOL WINAPI wglRealizeLayerPalette(HDC,int,WINBOOL);
  WINGDIAPI WINBOOL WINAPI wglSwapLayerBuffers(HDC,UINT);

  typedef struct _WGLSWAP {
    HDC hdc;
    UINT uiFlags;
  } WGLSWAP,*PWGLSWAP,*LPWGLSWAP;

#define WGL_SWAPMULTIPLE_MAX 16

  WINGDIAPI DWORD WINAPI wglSwapMultipleBuffers(UINT,CONST WGLSWAP *);
#endif

#ifdef __cplusplus
}
#endif
#endif
