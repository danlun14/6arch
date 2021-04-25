#include <stdio.h>
#include <inttypes.h>

#define CHS_HEAD 4
#define CHS_SECTOR 6
#define LARGE_HEAD 8
#define LARGE_SECTOR 6
#define IDECHS_HEAD 4
#define IDECHS_SECTOR 8

typedef struct
{
    uint8_t h;  // head number
    uint8_t s;  // sector number
    uint16_t c; // celinder number
} tCHS;

typedef struct
{
    uint8_t h;  // head number
    uint8_t s;  //sector number
    uint16_t c; // celinder number
} tLARGE;

typedef struct
{
    uint8_t h : 4;
    uint8_t s;
    uint16_t c;
} tIDECHS;
typedef struct
{
    uint32_t s;
} tLBA;

void g_lb2chs(tLBA *lba, tCHS *chs);
void g_lba2large(tLBA *lba, tLARGE *large);
void g_lba2idechs(tLBA *lba, tIDECHS *idechs);
void g_chs2large(tCHS *chs, tLARGE *large);
void g_chs2lba(tCHS *chs, tLBA *lba);
void g_chs2idechs(tCHS *chs, tIDECHS *idechs);
void g_large2chs(tLARGE *large, tCHS *chs);
void g_large2idechs(tLARGE *large, tIDECHS *idechs);
void g_large2lba(tLARGE *large, tLBA *lba);
void g_idechs2chs(tIDECHS *idechs, tCHS *chs);
void g_idechs2lagre(tIDECHS *idechs, tLARGE *large);
void g_idechs2lba(tIDECHS *idechs, tLBA *lba);