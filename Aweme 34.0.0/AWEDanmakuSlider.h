@interface AWEDanmakuSlider : AWENoxusPlayerProgressSlider
@property (nonatomic) q pointCount;
- (id)thumbRectForBounds:trackRect:value:;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (long long)pointCount;
- (void)setPointCount:;
@end
