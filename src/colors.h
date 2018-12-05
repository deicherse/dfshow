#define COMMAND_PAIR    1
#define INFO_PAIR       2
#define INPUT_PAIR      3
#define SELECT_PAIR     4
#define DISPLAY_PAIR    5
#define DANGER_PAIR     6
#define DIR_PAIR        7
#define SLINK_PAIR      8
#define EXE_PAIR        9
#define SUID_PAIR      10
#define SGID_PAIR      11
#define HILITE_PAIR    12
#define ERROR_PAIR     13
#define HEADING_PAIR   14
#define DEADLINK_PAIR  15

#define DEFAULT_COLOR  -1
#define BRIGHT_BLACK    8
#define BRIGHT_RED      9
#define BRIGHT_GREEN   10
#define BRIGHT_YELLOW  11
#define BRIGHT_BLUE    12
#define BRIGHT_MAGENTA 13
#define BRIGHT_CYAN    14
#define BRIGHT_WHITE   15

#define COLORMENU_PAIR_0  50
#define COLORMENU_PAIR_1  51
#define COLORMENU_PAIR_2  52
#define COLORMENU_PAIR_3  53
#define COLORMENU_PAIR_4  54
#define COLORMENU_PAIR_5  55
#define COLORMENU_PAIR_6  56
#define COLORMENU_PAIR_7  57
#define COLORMENU_PAIR_8  58
#define COLORMENU_PAIR_9  59
#define COLORMENU_PAIR_A  60
#define COLORMENU_PAIR_B  61
#define COLORMENU_PAIR_C  62
#define COLORMENU_PAIR_D  63
#define COLORMENU_PAIR_E  64
#define COLORMENU_PAIR_F  65

#define COLORMENU_SELECT   77
#define DEFAULT_BOLD_PAIR  78
#define DEFAULT_COLOR_PAIR 79

typedef struct {
  int foreground;
  int background;
  int bold;
} colorPairs;

void setColorPairs(int pair, int foreground, int background, int bold);
void refreshColors();
int itemLookup(int menuPos);
void theme_menu_inputs();
void setColorMode(int mode);
void setColors(int pair);
void themeBuilder();
