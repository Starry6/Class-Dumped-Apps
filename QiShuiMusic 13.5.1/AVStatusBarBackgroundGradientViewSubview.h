@interface AVStatusBarBackgroundGradientViewSubview : UIView
@property (nonatomic) CAGradientLayer layer;
@property (nonatomic) double gradientOpacity;
- (id)initWithFrame:;
- (double)gradientOpacity;
- (void)setGradientOpacity:;
+ (Class)layerClass;
@end
