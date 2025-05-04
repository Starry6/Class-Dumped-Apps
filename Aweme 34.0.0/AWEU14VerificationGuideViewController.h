@interface AWEU14VerificationGuideViewController : UIViewController
@property (nonatomic) UIView contentView;
@property (nonatomic) <AFDModalViewHelperProtocol> helper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? closeAction;
- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:;
- (void)presentedViewPanFinished;
- (void)p_closeAnimated:completion:;
- (void)p_clickCancelButton:;
- (void)p_clickVerificationButton:;
- (id)init;
- (void)setCloseAction:;
- (void)viewDidLoad;
- (id)contentView;
- (void)setHelper:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)helper;
- (id)closeAction;
+ (id)p_contentViewSize;
+ (id)p_headerImageViewSize;
@end
