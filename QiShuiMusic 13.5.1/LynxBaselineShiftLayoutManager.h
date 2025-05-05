@interface LynxBaselineShiftLayoutManager : NSLayoutManager
@property (nonatomic) q verticalAlign;
- (id)initWithVerticalAlign:;
- (void)makeCenterOffset:withFont:;
- (void)showCGGlyphs:positions:count:font:textMatrix:attributes:inContext:;
- (void)setVerticalAlign:;
- (long long)verticalAlign;
@end
