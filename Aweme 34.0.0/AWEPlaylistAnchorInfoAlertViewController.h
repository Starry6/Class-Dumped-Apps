@interface AWEPlaylistAnchorInfoAlertViewController : UIView
@property (nonatomic) LOTAnimationView lottieView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIView customMaskView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton mainButton;
@property (nonatomic) NSString lottiePath;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
- (id)lottieView;
- (void)setLottieView:;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:;
- (id)lottiePath;
- (void)setLottiePath:;
- (void)p_setUpUI;
- (id)customMaskView;
- (void)setCustomMaskView:;
- (void)maskViewTapAction:;
- (void)didClickedMainButton;
- (id)initWithLottiePath:mainTitle:subTitle:;
- (void)didClickedCloseButton;
- (id)contentView;
- (void)setSubTitle:;
- (id)subTitle;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setContentView:;
- (BOOL)showWithCompletion:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setCloseButton:;
- (id)closeButton;
- (id)mainTitle;
- (void)setMainTitle:;
- (id)mainButton;
- (void)setMainButton:;
@end
