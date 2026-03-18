static const char norm_fg[] = "#c4c6c2";
static const char norm_bg[] = "#161e0d";
static const char norm_border[] = "#67705c";

static const char sel_fg[] = "#c4c6c2";
static const char sel_bg[] = "#AE6389";
static const char sel_border[] = "#c4c6c2";

static const char urg_fg[] = "#c4c6c2";
static const char urg_bg[] = "#6B7B89";
static const char urg_border[] = "#6B7B89";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
