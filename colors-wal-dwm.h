static const char norm_fg[] = "#d1d1d1";
static const char norm_bg[] = "#080606";
static const char norm_border[] = "#929292";

static const char sel_fg[] = "#d1d1d1";
static const char sel_bg[] = "#940809";
static const char sel_border[] = "#d1d1d1";

static const char urg_fg[] = "#d1d1d1";
static const char urg_bg[] = "#6B6966";
static const char urg_border[] = "#6B6966";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
