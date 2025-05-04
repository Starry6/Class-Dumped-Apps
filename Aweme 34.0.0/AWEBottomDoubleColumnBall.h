@interface AWEBottomDoubleColumnBall : UIView
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel buttonTitle;
@property (nonatomic) NSTimer timer;
@property (nonatomic) Q status;
- (void)foldButton;
- (void)unfoldButton;
- (void)foldLayout;
- (void)unfoldLayout;
- (void)showDobleColumnButton;
- (void)setTimer:;
- (id)timer;
- (void)setStatus:;
- (id)icon;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)buttonTitle;
- (void)setButtonTitle:;
- (void)setupUI;
- (void)setupLayout;
@end
