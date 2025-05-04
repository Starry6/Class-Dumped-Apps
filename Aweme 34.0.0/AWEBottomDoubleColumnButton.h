@interface AWEBottomDoubleColumnButton : UIView
@property (nonatomic) UIImageView playIcon;
@property (nonatomic) UIImageView coverView;
@property (nonatomic) UIImageView arrow;
@property (nonatomic) UILabel buttonTitle;
@property (nonatomic) NSTimer timer;
@property (nonatomic) BOOL shouldShow;
- (id)playIcon;
- (void)setPlayIcon:;
- (void)showAnimation;
- (void)updateWithURLModel:;
- (void)setTimer:;
- (id)timer;
- (void)hideAnimation;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)buttonTitle;
- (void)setButtonTitle:;
- (id)coverView;
- (void)setCoverView:;
- (BOOL)shouldShow;
- (void)setupUI;
- (id)arrow;
- (void)setArrow:;
- (void)setShouldShow:;
@end
