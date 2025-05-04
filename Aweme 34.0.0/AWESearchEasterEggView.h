@interface AWESearchEasterEggView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) AWESearchEasterEggAnimationView animationView;
@property (nonatomic) double horizontalOffset;
@property (nonatomic) UIScrollView horizontalScrollView;
- (void)p_removeAnimationView;
- (void)playAnimationWithModel:;
- (void)horizontalScrollViewOffsetChanged;
- (id)initWithFrame:;
- (id)contentView;
- (void)setHorizontalOffset:;
- (void).cxx_destruct;
- (void)setContentView:;
- (double)horizontalOffset;
- (void)layoutSubviews;
- (id)horizontalScrollView;
- (void)setupUI;
- (void)setHorizontalScrollView:;
- (id)animationView;
- (void)setAnimationView:;
- (void)cancelAnimation;
@end
