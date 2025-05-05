@interface CNRepeatingGradientSeparatorView : UIView
@property (nonatomic) NSArray gradientColors;
@property (nonatomic) UIColor startColor;
@property (nonatomic) UIColor endColor;
@property (nonatomic) q lineCount;
- (long long)lineCount;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (id)gradientColors;
- (void).cxx_destruct;
- (void)setLineCount:;
- (void)_updateGradients;
- (void)setStartColor:;
- (void)setEndColor:;
- (id)startColor;
- (id)endColor;
@end
