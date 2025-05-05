@interface CEKSliderDotView : UIView
@property (nonatomic) BOOL useLegibilityShadow;
- (void)drawRect:;
- (BOOL)isOpaque;
- (id)initWithFrame:;
- (void)setUseLegibilityShadow:;
- (BOOL)useLegibilityShadow;
@end
