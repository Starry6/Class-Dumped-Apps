@interface AWELiveSkylightCatchView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) @? touchBeganBlock;
@property (nonatomic) UIView ignoreView;
- (id)touchBeganBlock;
- (void)setTouchBeganBlock:;
- (id)ignoreView;
- (id)initWithTouchBeganBlock:;
- (void)configGradientWithColors:;
- (void)setIgnoreView:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (id)hitTest:withEvent:;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setupUI;
@end
