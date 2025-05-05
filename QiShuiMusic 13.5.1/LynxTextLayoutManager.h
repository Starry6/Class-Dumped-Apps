@interface LynxTextLayoutManager : NSLayoutManager
@property (nonatomic) {CGPoint=dd} overflowOffset;
@property (nonatomic) {CGSize=dd} textBoundingRectSize;
@property (nonatomic) q glyphCount;
@property (nonatomic) {CGPoint=dd} preEndPosition;
@property (nonatomic) {_NSRange=QQ} preDrawableRange;
- (void)drawTextClipMaskWithFont:glyphCount:glyphs:maskContext:mutableAttr:positions:size:textMatrix:;
- (id)overflowOffset;
- (id)preDrawableRange;
- (id)preEndPosition;
- (void)setGlyphCount:;
- (void)setOverflowOffset:;
- (void)setPreDrawableRange:;
- (void)setPreEndPosition:;
- (void)setTextBoundingRectSize:;
- (id)textBoundingRectSize;
- (long long)glyphCount;
- (void)drawBackgroundForGlyphRange:atPoint:;
- (void)showCGGlyphs:positions:count:font:matrix:attributes:inContext:;
@end
