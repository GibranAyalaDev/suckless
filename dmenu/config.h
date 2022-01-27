/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Sauce Code Pro Nerd Font:size=10"
};
static const char *prompt      = " Search ";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	            /*     fg         bg       */
	[SchemeNorm] = { "#dfdfdf", "#1e2127" },
	[SchemeSel] = { "#dfdfdf", "#8ebd6b" },
	[SchemeSelHighlight] = { "#d19a66", "#8ebd6b" },
	[SchemeNormHighlight] = { "#56b6c2", "#1e2127" },
	// [SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = "\?\"&[]";

/* Size of the window border */
static const unsigned int border_width = 2;
