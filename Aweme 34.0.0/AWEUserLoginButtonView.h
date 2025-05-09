@interface AWEUserLoginButtonView : UIView
@property (nonatomic) AWEUserLoginButtonModel model;
@property (nonatomic) DYLoginNextActionButton actionButton;
@property (nonatomic) UIView tagBackgroundView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) BOOL breathAnimating;
@property (nonatomic) NSTimer breathTimer;
@property (nonatomic) DUXButton SMSLoginButton;
@property (nonatomic) @? clickAction;
@property (nonatomic) @? breathBlock;
@property (nonatomic) @? clickSMSLoginAction;
@property (nonatomic) BOOL needSecondButton;
- (id)clickAction;
- (void)setClickAction:;
- (void)buttonClicked;
- (id)tagLabel;
- (void)setTagLabel:;
- (id)breathTimer;
- (void)setBreathTimer:;
- (void)setTagBackgroundView:;
- (id)tagBackgroundView;
- (void)loadLottie;
- (BOOL)breathAnimating;
- (void)setBreathAnimating:;
- (void)stopLoadingWithError:;
- (void)buttonStatusChanged:;
- (void)startLoginButtonBreathAnimation;
- (id)SMSLoginButton;
- (void)setSMSLoginButton:;
- (void)setBreathBlock:;
- (void)setNeedSecondButton:;
- (void)setClickSMSLoginAction:;
- (void)initBreathTimerIfNeed;
- (void)setupActionButton:;
- (void)layoutHTSElderlyView;
- (void)layoutGeneralView;
- (BOOL)needSecondButton;
- (void)clickSMSLoginButton:;
- (id)clickSMSLoginAction;
- (id)breathBlock;
- (void)setModel:;
- (id)initWithTitle:;
- (void)dealloc;
- (void)startLoading;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:;
@end
