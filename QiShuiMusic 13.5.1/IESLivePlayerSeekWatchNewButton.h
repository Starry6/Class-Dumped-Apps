@interface IESLivePlayerSeekWatchNewButton : UIView
@property (nonatomic) UIImageView refreshIcon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton opreationButton;
@property (nonatomic) @? watchNewButtonClickBlock;
- (id)opreationButton;
- (void)setRefreshIcon:;
- (id)loadingAnimation;
- (id)refreshIcon;
- (void)setAccessibility;
- (void)setOpreationButton:;
- (void)setWatchNewButtonClickBlock:;
- (void)watchNewButtonClick;
- (id)watchNewButtonClickBlock;
- (void)stopLoading;
- (void)setTitleLabel:;
- (void)startLoading;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateTitle:;
- (void)createUI;
@end
