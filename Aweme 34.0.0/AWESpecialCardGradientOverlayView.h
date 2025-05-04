@interface AWESpecialCardGradientOverlayView : UIView
@property (nonatomic) NSArray gradientColors;
@property (nonatomic) NSArray gradientLocations;
- (void)setupGradient;
- (void)updateColors:locations:;
- (void)setGradientLocations:;
- (id)gradientColors;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setGradientColors:;
- (id)gradientLocations;
@end
