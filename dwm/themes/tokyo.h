static char c000000[]                    = "#bc7ad9"; // placeholder value

static char normfgcolor[]                = "#c0caf5";
static char normbgcolor[]                = "#15161E";
static char normbordercolor[]            = "#1a1b26";
static char normfloatcolor[]             = "#15161E";

static char selfgcolor[]                 = "#ffffff";
static char selbgcolor[]                 = "#7aa2f7";
static char selbordercolor[]             = "#7aa2f7";
static char selfloatcolor[]              = "#7aa2f7";

static char titlenormfgcolor[]           = "#c0caf5";
static char titlenormbgcolor[]           = "#15161E";
static char titlenormbordercolor[]       = "#1a1b26";
static char titlenormfloatcolor[]        = "#15161E";

static char titleselfgcolor[]            = "#9ece6a";
static char titleselbgcolor[]            = "#15161E";
static char titleselbordercolor[]        = "#15161E";
static char titleselfloatcolor[]         = "#7aa2f7";

static char tagsnormfgcolor[]            = "#c0caf5";
static char tagsnormbgcolor[]            = "#15161E";
static char tagsnormbordercolor[]        = "#1a1b26";
static char tagsnormfloatcolor[]         = "#15161E";

static char tagsselfgcolor[]             = "#7dcfff";
static char tagsselbgcolor[]             = "#1a1b26";
static char tagsselbordercolor[]         = "#7dcfff";
static char tagsselfloatcolor[]          = "#7dcfff";

static char hidnormfgcolor[]             = "#f7768e";
static char hidselfgcolor[]              = "#7dcfff";
static char hidnormbgcolor[]             = "#15161E";
static char hidselbgcolor[]              = "#15161E";

static char urgfgcolor[]                 = "#c0caf5";
static char urgbgcolor[]                 = "#15161E";
static char urgbordercolor[]             = "#6bb2c0";
static char urgfloatcolor[]              = "#15161E";

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { "#f7768e",        normbgcolor,			normbordercolor,      normfloatcolor },
	[SchemeSel]          = { "#e0af68",        normbordercolor,		selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { "#7dcfff",        normbgcolor,  		titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { "#a9b1d6",        normbordercolor,		titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { "#ebcb8d",        normbgcolor,			tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { "#bb9af7",        normbordercolor,		tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { "#c0caf5",        normbgcolor,			c000000,              c000000 },
	[SchemeHidSel]       = { "#9ece6a",        normbordercolor,		c000000,              c000000 },
	[SchemeUrg]          = { "#7aa2f7",        normbgcolor,			urgbordercolor,       urgfloatcolor },
};