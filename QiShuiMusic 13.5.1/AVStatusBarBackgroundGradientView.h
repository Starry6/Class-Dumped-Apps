@interface AVStatusBarBackgroundGradientView : UIView
@property (nonatomic) CABackdropLayer layer;
@property (nonatomic) AVStatusBarBackgroundGradientViewSubview gradientView;
- (void)layoutSubviews;
- (void)setAlpha:;
- (id)gradientView;
- (double)alpha;
- (void).cxx_destruct;
- (void)setGradientView:;
+ (Class)layerClass;
@end
