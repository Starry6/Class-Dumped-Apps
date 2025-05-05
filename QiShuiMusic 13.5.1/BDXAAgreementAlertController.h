@interface BDXAAgreementAlertController : BDXABaseViewController
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BDXAButton otherButton;
@property (nonatomic) @? completionBlock;
- (void)dismissWithConfirmState:;
- (BOOL)layoutViewsCustom;
- (void)layoutViewsForBottomSheet;
- (void)layoutViewsForFullscreen;
- (void)luna_mainButtonTapped;
- (void)luna_otherButtonTapped;
- (void)luna_updateWithClickableText:;
- (void)mainButtonTapped;
- (void)otherButtonTapped;
- (void)updateWithClickableText;
- (void)layoutViews;
- (void)setTitleLabel:;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)completionBlock;
- (id)titleLabel;
- (void)viewDidLoad;
- (void)tapAction;
- (void)setOtherButton:;
- (id)otherButton;
+ (void)showFromViewController:completion:;
@end
