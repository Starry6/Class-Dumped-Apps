@interface AWEShareActivityButton : AWEUIButton
@property (nonatomic) CAShapeLayer loadingLayer;
@property (nonatomic) UIView loadingView;
- (id)loadingLayer;
- (void)setLoadingLayer:;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
+ (id)buttonWithType:;
@end
