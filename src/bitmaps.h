#define dir1_width 40
#define dir1_height 16
static unsigned char dir1_bits[] = {
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x00,0xf8,0x00,
 0xc0,0xff,0xff,0xff,0x03,0xc0,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0xf8,0x00,
 0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x00,0xf8,0x00,0xc0,0xff,0xff,0xff,0x03,
 0xc0,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0xf8,0x00,0x00,0x00,0x00,0x3c,0x00,
 0x00,0x00,0x00,0x00,0x00};
#define dir2_width 40
#define dir2_height 16
static unsigned char dir2_bits[] = {
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x00,0xf8,0x00,
 0xc0,0xff,0xff,0xff,0x03,0xc0,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0xf8,0x00,
 0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x3c,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0xc0,0xff,0xff,0xff,0x03,
 0xc0,0xff,0xff,0xff,0x03,0x00,0x1f,0x00,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00};
#define fwd_width 30
#define fwd_height 15
static unsigned char fwd_bits[] = {
 0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0xc0,0x00,0x03,
 0xc0,0xc0,0x03,0x0f,0xc0,0xc0,0x0f,0x3f,0xc0,0xc0,0x3f,0xff,0xc0,0xc0,0x7f,
 0xff,0xc1,0xc0,0x3f,0xff,0xc0,0xc0,0x0f,0x3f,0xc0,0xc0,0x03,0x0f,0xc0,0xc0,
 0x00,0x03,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0
 };
#define loop_width 40
#define loop_height 16
static unsigned char loop_bits[] = {
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x00,0xf8,0x00,
 0xc0,0xff,0xff,0xff,0x03,0xc0,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0xf8,0x00,
 0xc0,0x00,0x00,0x3c,0x02,0xc0,0x00,0x00,0x00,0x03,0xc0,0x00,0x00,0x00,0x03,
 0x00,0x00,0x78,0x00,0x00,0xc0,0x00,0x3e,0x00,0x03,0x80,0x9f,0xff,0xfc,0x01,
 0x00,0x9f,0xff,0xfc,0x00,0x00,0x00,0x3e,0x00,0x00,0x00,0x00,0x78,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00};
#define play_width 30
#define play_height 15
static unsigned char play_bits[] = {
 0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x18,0x00,
 0xc0,0x00,0x78,0x00,0xc0,0x00,0xf8,0x01,0xc0,0x00,0xf8,0x07,0xc0,0x00,0xf8,
 0x0f,0xc0,0x00,0xf8,0x07,0xc0,0x00,0xf8,0x01,0xc0,0x00,0x78,0x00,0xc0,0x00,
 0x18,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0
 };
#define playr_width 30
#define playr_height 15
static unsigned char playr_bits[] = {
 0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x06,
 0xc0,0x00,0x80,0x07,0xc0,0x00,0xe0,0x07,0xc0,0x00,0xf8,0x07,0xc0,0x00,0xfc,
 0x07,0xc0,0x00,0xf8,0x07,0xc0,0x00,0xe0,0x07,0xc0,0x00,0x80,0x07,0xc0,0x00,
 0x00,0x06,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0
 };
#define rew_width 30
#define rew_height 15
static unsigned char rew_bits[] = {
 0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x30,0xc0,
 0xc0,0x00,0x3c,0xf0,0xc0,0x00,0x3f,0xfc,0xc0,0xc0,0x3f,0xff,0xc0,0xe0,0xbf,
 0xff,0xc0,0xc0,0x3f,0xff,0xc0,0x00,0x3f,0xfc,0xc0,0x00,0x3c,0xf0,0xc0,0x00,
 0x30,0xc0,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0
 };
#define step_width 30
#define step_height 15
static unsigned char step_bits[] = {
 0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x80,0x01,0x36,
 0xc0,0x80,0x07,0x36,0xc0,0x80,0x1f,0x36,0xc0,0x80,0x7f,0x36,0xc0,0x80,0xff,
 0x36,0xc0,0x80,0x7f,0x36,0xc0,0x80,0x1f,0x36,0xc0,0x80,0x07,0x36,0xc0,0x80,
 0x01,0x36,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0
 };
#define stepr_width 30
#define stepr_height 15
static unsigned char stepr_bits[] = {
 0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x1b,0x60,
 0xc0,0x00,0x1b,0x78,0xc0,0x00,0x1b,0x7e,0xc0,0x00,0x9b,0x7f,0xc0,0x00,0xdb,
 0x7f,0xc0,0x00,0x9b,0x7f,0xc0,0x00,0x1b,0x7e,0xc0,0x00,0x1b,0x78,0xc0,0x00,
 0x1b,0x60,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0
 };
#define stop_width 30
#define stop_height 15
static unsigned char stop_bits[] = {
 0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0xfe,0x1f,
 0xc0,0x00,0xfe,0x1f,0xc0,0x00,0xfe,0x1f,0xc0,0x00,0xfe,0x1f,0xc0,0x00,0xfe,
 0x1f,0xc0,0x00,0xfe,0x1f,0xc0,0x00,0xfe,0x1f,0xc0,0x00,0xfe,0x1f,0xc0,0x00,
 0xfe,0x1f,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0xc0
 };
