@interface AWEEcomSearchPopContainerView : UIView
@property (nonatomic) CALayer shaowLayer;
@property (nonatomic) UIView guidanceView;
- (void)moveTo:;
- (id)shaowLayer;
- (void)setShaowLayer:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)guidanceView;
- (void)setGuidanceView:;
+ (id)makeGradientLayer;
@end
