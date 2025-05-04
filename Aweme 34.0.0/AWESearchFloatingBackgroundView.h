@interface AWESearchFloatingBackgroundView : UIView
@property (nonatomic) AWESearchFloatingBackgroundImageView imageView;
@property (nonatomic) AWESearchFloatingBackgroundColorView colorView;
@property (nonatomic) UIScrollView horizontalScrollView;
@property (nonatomic) UIScrollView verticalScrollView;
- (double)resultBackgroundViewHeight;
- (void)forceHideBackground:;
- (void)horizontalScrollViewOffsetChanged;
- (void)verticalScrollViewOffsetChanged;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)verticalScrollView;
- (void)setImageView:;
- (id)horizontalScrollView;
- (id)imageView;
- (void)setupUI;
- (id)colorView;
- (void)setColorView:;
- (void)setHorizontalScrollView:;
- (void)setVerticalScrollView:;
@end
