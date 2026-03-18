/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x161e0dff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc4c6c2ff, 0x161e0dff, 0x67705cff },
	[SchemeSel]  = { 0xc4c6c2ff, 0xAE6389ff, 0x6B7B89ff },
	[SchemeUrg]  = { 0xc4c6c2ff, 0x6B7B89ff, 0xAE6389ff },
};
