@interface CSJGuideLottieView : UIView
@property (nonatomic) CSJLOTAnimationView animationView;
@property (nonatomic) UILabel guideTipsLabel;
@property (nonatomic) NSString guideTips;
- (void)setupLottieView;
- (id)guideTips;
- (id)guideTipsLabel;
- (void)setGuideTips:;
- (void)setGuideTipsLabel:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)animationView;
- (void)setAnimationView:;
@end
