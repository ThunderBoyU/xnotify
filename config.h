static struct Config config = {
	/* fonts, separate different fonts with comma */
	.titlefont = "rissole:size=8:style=bold",
	.bodyfont = "rissole:size=8",

	/* colors */
	.background_color = "#005577",
	.foreground_color = "#ffffff",
	.border_color = "#222222",

	/* geometry and gravity (see the manual) */
	.geometryspec = "0x0+0+15",
	.gravityspec = "NE",

	/* size of border, gaps and image (in pixels) */
	.border_pixels = 2,
	.gap_pixels = 7,
	.image_pixels = 80,     /* if 0, the image will fit the notification */
	.leading_pixels = 5,    /* space between title and body texts */
	.padding_pixels = 10,   /* space around content */
	.max_height = 700,      /* maximum height of a notification, after text wrapping */

	/* text alignment, set to LeftAlignment, CenterAlignment or RightAlignment */
	.alignment = LeftAlignment,

	/* set to nonzero to shrink notification width to its content size */
	.shrink = 0,

	/* whether to wrap text */
	.wrap = 1,

	/* time, in seconds, for a notification to stay alive */
	.sec = 10,

	/* mouse button that makes xnotify prints a notification's CMD: */
	.actionbutton = Button3,
};

/* string to be replaced by truncated text, should be a single unicode character */
#define ELLIPSIS "…"
