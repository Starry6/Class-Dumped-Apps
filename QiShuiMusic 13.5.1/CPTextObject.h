@interface CPTextObject : CPChunk
- (float)maxFontSize;
- (void)calculateMetrics;
- (void)translateObjectYBy:;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;
@end
