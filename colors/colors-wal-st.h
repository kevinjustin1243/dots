const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#B85E9C", /* red     */
  [2] = "#93758F", /* green   */
  [3] = "#7484A1", /* yellow  */
  [4] = "#AC989D", /* blue    */
  [5] = "#DCADA3", /* magenta */
  [6] = "#D9C9AE", /* cyan    */
  [7] = "#ccc6d0", /* white   */

  /* 8 bright colors */
  [8]  = "#796c85",  /* black   */
  [9]  = "#B85E9C",  /* red     */
  [10] = "#93758F", /* green   */
  [11] = "#7484A1", /* yellow  */
  [12] = "#AC989D", /* blue    */
  [13] = "#DCADA3", /* magenta */
  [14] = "#D9C9AE", /* cyan    */
  [15] = "#ccc6d0", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#ccc6d0", /* foreground */
  [258] = "#ccc6d0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
