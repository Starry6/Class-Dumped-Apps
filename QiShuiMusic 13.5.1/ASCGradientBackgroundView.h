@interface ASCGradientBackgroundView : UIView
@property (nonatomic) UIView gradientOverlayView;
@property (nonatomic) CAGradientLayer gradientLayer;
- (void)layoutSubviews;
- (id)gradientLayer;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)gradientOverlayView;
+ (double)gradientPercentageOfBounds;
@end
