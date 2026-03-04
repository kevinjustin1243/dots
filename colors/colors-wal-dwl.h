/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x000000ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xccc6d0ff, 0x000000ff, 0x796c85ff },
	[SchemeSel]  = { 0xccc6d0ff, 0x93758Fff, 0xB85E9Cff },
	[SchemeUrg]  = { 0xccc6d0ff, 0xB85E9Cff, 0x93758Fff },
};
