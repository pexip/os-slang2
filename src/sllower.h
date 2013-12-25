/* This file was automatically created by ./mktables */
#define SL_TOLOWER_MAX_CHAR 0x10480ul

#define SL_TOLOWER_LOOKUP(x) \
  (((unsigned)(x)>=SL_TOLOWER_MAX_CHAR)?0:(_pSLwc_Tolower_Table[(unsigned)(x)>>7][(unsigned)(x)&0x7F]))

extern const _pSLint32_Type *_pSLwc_Tolower_Table[521];

#ifdef DEFINE_PSLWC_TOLOWER_TABLE
static const _pSLint32_Type Table_00[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_01[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,    32,    32,    32,    32,    32,    32,    32,
  /*0x48-0x4F*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x50-0x57*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x58-0x5F*/    32,    32,    32,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_02[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x48-0x4F*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x50-0x57*/    32,    32,    32,    32,    32,    32,    32,     0,
  /*0x58-0x5F*/    32,    32,    32,    32,    32,    32,    32,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_03[128] =
{
  /*0x00-0x07*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x08-0x0F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x10-0x17*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x18-0x1F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x20-0x27*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x28-0x2F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x30-0x37*/  -199,     0,     1,     0,     1,     0,     1,     0,
  /*0x38-0x3F*/     0,     1,     0,     1,     0,     1,     0,     1,
  /*0x40-0x47*/     0,     1,     0,     1,     0,     1,     0,     1,
  /*0x48-0x4F*/     0,     0,     1,     0,     1,     0,     1,     0,
  /*0x50-0x57*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x58-0x5F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x60-0x67*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x68-0x6F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x70-0x77*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x78-0x7F*/  -121,     1,     0,     1,     0,     1,     0,     0
};

static const _pSLint32_Type Table_04[128] =
{
  /*0x00-0x07*/     0,   210,     1,     0,     1,     0,   206,     1,
  /*0x08-0x0F*/     0,   205,   205,     1,     0,     0,    79,   202,
  /*0x10-0x17*/   203,     1,     0,   205,   207,     0,   211,   209,
  /*0x18-0x1F*/     1,     0,     0,     0,   211,   213,     0,   214,
  /*0x20-0x27*/     1,     0,     1,     0,     1,     0,   218,     1,
  /*0x28-0x2F*/     0,   218,     0,     0,     1,     0,   218,     1,
  /*0x30-0x37*/     0,   217,   217,     1,     0,     1,     0,   219,
  /*0x38-0x3F*/     1,     0,     0,     0,     1,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     2,     1,     0,     2,
  /*0x48-0x4F*/     1,     0,     2,     1,     0,     1,     0,     1,
  /*0x50-0x57*/     0,     1,     0,     1,     0,     1,     0,     1,
  /*0x58-0x5F*/     0,     1,     0,     1,     0,     0,     1,     0,
  /*0x60-0x67*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x68-0x6F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x70-0x77*/     0,     2,     1,     0,     1,     0,   -97,   -56,
  /*0x78-0x7F*/     1,     0,     1,     0,     1,     0,     1,     0
};

static const _pSLint32_Type Table_05[128] =
{
  /*0x00-0x07*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x08-0x0F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x10-0x17*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x18-0x1F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x20-0x27*/  -130,     0,     1,     0,     1,     0,     1,     0,
  /*0x28-0x2F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x30-0x37*/     1,     0,     1,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,  10795,     1,     0,  -163,  10792,     0,
  /*0x40-0x47*/     0,     1,     0,  -195,    69,    71,     1,     0,
  /*0x48-0x4F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_06[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     1,     0,     1,     0,     0,     0,     1,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_07[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,    38,     0,
  /*0x08-0x0F*/    37,    37,    37,     0,    64,     0,    63,    63,
  /*0x10-0x17*/     0,    32,    32,    32,    32,    32,    32,    32,
  /*0x18-0x1F*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x20-0x27*/    32,    32,     0,    32,    32,    32,    32,    32,
  /*0x28-0x2F*/    32,    32,    32,    32,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     8,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x60-0x67*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x68-0x6F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x70-0x77*/     0,     0,     0,     0,   -60,     0,     0,     1,
  /*0x78-0x7F*/     0,    -7,     1,     0,     0,  -130,  -130,  -130
};

static const _pSLint32_Type Table_08[128] =
{
  /*0x00-0x07*/    80,    80,    80,    80,    80,    80,    80,    80,
  /*0x08-0x0F*/    80,    80,    80,    80,    80,    80,    80,    80,
  /*0x10-0x17*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x18-0x1F*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x20-0x27*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x28-0x2F*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x68-0x6F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x70-0x77*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x78-0x7F*/     1,     0,     1,     0,     1,     0,     1,     0
};

static const _pSLint32_Type Table_09[128] =
{
  /*0x00-0x07*/     1,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     1,     0,     1,     0,     1,     0,
  /*0x10-0x17*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x18-0x1F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x20-0x27*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x28-0x2F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x30-0x37*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x38-0x3F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x40-0x47*/    15,     1,     0,     1,     0,     1,     0,     1,
  /*0x48-0x4F*/     0,     1,     0,     1,     0,     1,     0,     0,
  /*0x50-0x57*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x58-0x5F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x60-0x67*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x68-0x6F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x70-0x77*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x78-0x7F*/     1,     0,     1,     0,     1,     0,     1,     0
};

static const _pSLint32_Type Table_10[128] =
{
  /*0x00-0x07*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x08-0x0F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x10-0x17*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x18-0x1F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x20-0x27*/     1,     0,     1,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,    48,    48,    48,    48,    48,    48,    48,
  /*0x38-0x3F*/    48,    48,    48,    48,    48,    48,    48,    48,
  /*0x40-0x47*/    48,    48,    48,    48,    48,    48,    48,    48,
  /*0x48-0x4F*/    48,    48,    48,    48,    48,    48,    48,    48,
  /*0x50-0x57*/    48,    48,    48,    48,    48,    48,    48,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_11[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/  7264,  7264,  7264,  7264,  7264,  7264,  7264,  7264,
  /*0x28-0x2F*/  7264,  7264,  7264,  7264,  7264,  7264,  7264,  7264,
  /*0x30-0x37*/  7264,  7264,  7264,  7264,  7264,  7264,  7264,  7264,
  /*0x38-0x3F*/  7264,  7264,  7264,  7264,  7264,  7264,  7264,  7264,
  /*0x40-0x47*/  7264,  7264,  7264,  7264,  7264,  7264,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_12[128] =
{
  /*0x00-0x07*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x08-0x0F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x10-0x17*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x18-0x1F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x20-0x27*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x28-0x2F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x30-0x37*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x38-0x3F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x40-0x47*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x48-0x4F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x50-0x57*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x58-0x5F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x60-0x67*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x68-0x6F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x70-0x77*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x78-0x7F*/     1,     0,     1,     0,     1,     0,     1,     0
};

static const _pSLint32_Type Table_13[128] =
{
  /*0x00-0x07*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x08-0x0F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x10-0x17*/     1,     0,     1,     0,     1,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0, -7615,     0,
  /*0x20-0x27*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x28-0x2F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x30-0x37*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x38-0x3F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x40-0x47*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x48-0x4F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x50-0x57*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x58-0x5F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x60-0x67*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x68-0x6F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x70-0x77*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x78-0x7F*/     1,     0,     1,     0,     1,     0,     1,     0
};

static const _pSLint32_Type Table_14[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,    -8,     0,    -8,     0,    -8,     0,    -8,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_15[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/    -8,    -8,   -74,   -74,    -9,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/   -86,   -86,   -86,   -86,    -9,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/    -8,    -8,  -100,  -100,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/    -8,    -8,  -112,  -112,    -7,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/  -128,  -128,  -126,  -126,    -9,     0,     0,     0
};

static const _pSLint32_Type Table_16[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0, -7517,     0,
  /*0x28-0x2F*/     0,     0, -8383, -8262,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,    28,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/    16,    16,    16,    16,    16,    16,    16,    16,
  /*0x68-0x6F*/    16,    16,    16,    16,    16,    16,    16,    16,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_17[128] =
{
  /*0x00-0x07*/     0,     0,     0,     1,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_18[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,    26,    26,
  /*0x38-0x3F*/    26,    26,    26,    26,    26,    26,    26,    26,
  /*0x40-0x47*/    26,    26,    26,    26,    26,    26,    26,    26,
  /*0x48-0x4F*/    26,    26,    26,    26,    26,    26,    26,    26,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_19[128] =
{
  /*0x00-0x07*/    48,    48,    48,    48,    48,    48,    48,    48,
  /*0x08-0x0F*/    48,    48,    48,    48,    48,    48,    48,    48,
  /*0x10-0x17*/    48,    48,    48,    48,    48,    48,    48,    48,
  /*0x18-0x1F*/    48,    48,    48,    48,    48,    48,    48,    48,
  /*0x20-0x27*/    48,    48,    48,    48,    48,    48,    48,    48,
  /*0x28-0x2F*/    48,    48,    48,    48,    48,    48,    48,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     1,     0, -10743, -3814, -10727,     0,     0,     1,
  /*0x68-0x6F*/     0,     1,     0,     1,     0, -10780, -10749, -10783,
  /*0x70-0x77*/     0,     0,     1,     0,     0,     1,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_20[128] =
{
  /*0x00-0x07*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x08-0x0F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x10-0x17*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x18-0x1F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x20-0x27*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x28-0x2F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x30-0x37*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x38-0x3F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x40-0x47*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x48-0x4F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x50-0x57*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x58-0x5F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x60-0x67*/     1,     0,     1,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_21[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x48-0x4F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x50-0x57*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x58-0x5F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x60-0x67*/     0,     0,     1,     0,     1,     0,     1,     0,
  /*0x68-0x6F*/     1,     0,     1,     0,     1,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_22[128] =
{
  /*0x00-0x07*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x08-0x0F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x10-0x17*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_23[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     1,     0,     1,     0,     1,     0,
  /*0x28-0x2F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x30-0x37*/     0,     0,     1,     0,     1,     0,     1,     0,
  /*0x38-0x3F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x40-0x47*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x48-0x4F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x50-0x57*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x58-0x5F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x60-0x67*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x68-0x6F*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     1,     0,     1,     0, -35332,     1,     0
};

static const _pSLint32_Type Table_24[128] =
{
  /*0x00-0x07*/     1,     0,     1,     0,     1,     0,     1,     0,
  /*0x08-0x0F*/     0,     0,     0,     1,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_25[128] =
{
  /*0x00-0x07*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x08-0x0F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x10-0x17*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x18-0x1F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x20-0x27*/     0,    32,    32,    32,    32,    32,    32,    32,
  /*0x28-0x2F*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x30-0x37*/    32,    32,    32,    32,    32,    32,    32,    32,
  /*0x38-0x3F*/    32,    32,    32,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

static const _pSLint32_Type Table_26[128] =
{
  /*0x00-0x07*/    40,    40,    40,    40,    40,    40,    40,    40,
  /*0x08-0x0F*/    40,    40,    40,    40,    40,    40,    40,    40,
  /*0x10-0x17*/    40,    40,    40,    40,    40,    40,    40,    40,
  /*0x18-0x1F*/    40,    40,    40,    40,    40,    40,    40,    40,
  /*0x20-0x27*/    40,    40,    40,    40,    40,    40,    40,    40,
  /*0x28-0x2F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x30-0x37*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x38-0x3F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x40-0x47*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x48-0x4F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x50-0x57*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x58-0x5F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x60-0x67*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x68-0x6F*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x70-0x77*/     0,     0,     0,     0,     0,     0,     0,     0,
  /*0x78-0x7F*/     0,     0,     0,     0,     0,     0,     0,     0
};

const _pSLint32_Type *_pSLwc_Tolower_Table[521] =
{
  Table_01,  Table_02,  Table_03,  Table_04,  Table_05,  Table_00,
  Table_06,  Table_07,  Table_08,  Table_09,  Table_10,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_11,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_12,  Table_13,  Table_14,  Table_15,  Table_00,  Table_00,
  Table_16,  Table_17,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_18,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_19,  Table_20,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_21,  Table_22,  Table_23,  Table_24,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_25,  Table_00,  Table_00,  Table_00,  Table_00,  Table_00,
  Table_00,  Table_00,  Table_00,  Table_00,  Table_26
};
#endif /* DEFINE_PSLWC_TOLOWER_TABLE */
