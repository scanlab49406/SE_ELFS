#define C901_R1GA028
#define A2
#define DB3210

#include "..\..\include\Types.h"
#include "classes.h"

#define OrangeLED_ID 2
#define RedLED_ID 6
#define GetSignalQuality_Send_SignalID 0x12C00040
#define GetSignalQuality_Receive_SignalID 0x12C007C0
#define MainInput_data 0x4BA2663C
#define MainInput_CurPos_Offset 0x8

void (*DisplayGC_AddRef)(GC*,void *)=(void(*)(GC*,void *))0x143CEE41;
void (*TextObject_SetText)(IRichText * pTextObject,TEXTID strid)=(void(*)(IRichText * pTextObject,TEXTID strid))0x1416F57D;
void (*TextObject_SetFont)(IRichText * pTextObject,void * pFont,const int _0x8000000A,const int _0x7FFFFFF5)=(void(*)(IRichText * pTextObject,void * pFont,const int _0x8000000A,const int _0x7FFFFFF5))0x14172479;
int (*Illumination_LedID_SetLevel_Gradually)(int LED_ID,int level,int fade_time)=(int(*)(int LED_ID,int level,int fade_time))0x143E84BD;
int (*Illumination_LedID_SetLevel)(int LED_ID,int level)=(int(*)(int LED_ID,int level))0x144C65B5;
int (*Illumination_LedID_Off)(int LED_ID)=(int(*)(int LED_ID))0x14337B65;
int (*RichTextLayout_GetTextWidth)(TEXTID strid,IRichTextLayout * pRichTextLayout,IUnknown * pFont)=(int(*)(TEXTID strid,IRichTextLayout * pRichTextLayout,IUnknown * pFont))0x14421A99;
int (*REQUEST_HPHONEBOOK_READSTRING)(const int* sync,void * buf)=(int(*)(const int* sync,void * buf))0x141AC701;
void (*AB_STR_ITEM_Copy)(AB_STR_ITEM * dest,AB_STR_ITEM * source)=(void(*)(AB_STR_ITEM * dest,AB_STR_ITEM * source))0x15278CA1;
void (*Display_SetBrightnessLevel)(int level)=(void(*)(int level))0x154058E5;
TEXTID (*TextID_CreateIntegerID_int)(int num,char * filename,int line_num)=(TEXTID(*)(int num,char * filename,int line_num))0x143D4FA5;
TEXTID (*TextID_Create_int)(const void* wstr,int flag,int len,char * filename,int line_num)=(TEXTID(*)(const void* wstr,int flag,int len,char * filename,int line_num))0x142D6F25;
int (*TextID_GetWString_int)(TEXTID strid,wchar_t * dest,int maxlen,char * filename,int line_num)=(int(*)(TEXTID strid,wchar_t * dest,int maxlen,char * filename,int line_num))0x1416E899;
int (*TextID_GetLength_int)(TEXTID strid,char * filename,int line_num)=(int(*)(TEXTID strid,char * filename,int line_num))0x1416F445;
void (*TextID_Destroy_int)(TEXTID strid,char * filename,int line_num)=(void(*)(TEXTID strid,char * filename,int line_num))0x1416EC2D;
TEXTID (*TextID_Copy_int)(TEXTID strid,char * filename,int line_num)=(int(*)(TEXTID strid,char * filename,int line_num))0x1416E375;
int (*Request_SIM_IMSI_Read)(const int* sync,const int unk,char * imsi,char * error_cause)=(int(*)(const int* sync,const int unk,char * imsi,char * error_cause))0x100DF405;
int (*get_imsi_const)()=(int(*)())0x100E8E49;
int (*Request_SL_GetRadioState)(const int* sync,char * level,char * flag,char * is_error)=(int(*)(const int* sync,char * level,char * flag,char * is_error))0x10559075;
int (*Network_INetworkConnection_GetConnectionInfo)(CONNECTION_INFO_DESC * desc)=(int(*)(CONNECTION_INFO_DESC * desc))0x1423D1E1;
int (*GetChipID_int)()=(int(*)())0x1077388D;
OSBOOLEAN (*get_mem_int)(int,int,void*)=(OSBOOLEAN(*)(int,int,void*))0x101CEAE8;
int (*ConnectionManager_Connection_GetState_int)(char * buf)=(int(*)(char * buf))0x1447FF9D;
void (*TextID_GetString_int)(TEXTID, char* str, int maxlen, int null)=(void(*)(TEXTID, char* str, int maxlen, int null))0x1416E5BD;
void (*Timer_ReSet_int)(u16* timer, int time, TIMERPROC onTimer, LPARAM lparam,char * filename,int line_num)=(void(*)(u16* timer, int time, TIMERPROC onTimer, LPARAM lparam,char * filename,int line_num))0x14169C09;
u16 (*Timer_Set_int)(int time, TIMERPROC onTimer, LPARAM lparam,char * filename,int line_num)=(u16(*)(int time, TIMERPROC onTimer, LPARAM lparam,char * filename,int line_num))0x1423CE6D;
void (*Timer_Kill_int)(u16* timerID,char * filename,int line_num)=(void(*)(u16* timerID,char * filename,int line_num))0x14169EF9;
