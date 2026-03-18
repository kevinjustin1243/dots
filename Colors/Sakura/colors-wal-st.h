const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#161e0d", /* black   */
  [1] = "#6B7B89", /* red     */
  [2] = "#AE6389", /* green   */
  [3] = "#D86D91", /* yellow  */
  [4] = "#A69D9A", /* blue    */
  [5] = "#D4A0A5", /* magenta */
  [6] = "#D2C0BB", /* cyan    */
  [7] = "#c4c6c2", /* white   */

  /* 8 bright colors */
  [8]  = "#67705c",  /* black   */
  [9]  = "#6B7B89",  /* red     */
  [10] = "#AE6389", /* green   */
  [11] = "#D86D91", /* yellow  */
  [12] = "#A69D9A", /* blue    */
  [13] = "#D4A0A5", /* magenta */
  [14] = "#D2C0BB", /* cyan    */
  [15] = "#c4c6c2", /* white   */

  /* special colors */
  [256] = "#161e0d", /* background */
  [257] = "#c4c6c2", /* foreground */
  [258] = "#c4c6c2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
