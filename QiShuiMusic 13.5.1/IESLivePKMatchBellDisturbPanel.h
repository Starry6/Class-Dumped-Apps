@interface IESLivePKMatchBellDisturbPanel : IESLiveRevenueInteractPopupViewController
@property (nonatomic) UIButton rejectFlexActivityButton;
@property (nonatomic) UIView seperateLine;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) BOOL isClickedRejectButton;
@property (nonatomic) <IESLivePKAnchorBuilderAction> anchorBuilderAction;
- (id)anchorBuilderAction;
- (BOOL)isClickedRejectButton;
- (void)onClickedCancelButton;
- (void)onClickedRejectButton;
- (void)onSetupNavBar:;
- (id)rejectFlexActivityButton;
- (id)seperateLine;
- (void)setAnchorBuilderAction:;
- (void)setIsClickedRejectButton:;
- (void)setRejectFlexActivityButton:;
- (void)setSeperateLine:;
- (void)trackPanelClicked:;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setCancelButton:;
- (id)cancelButton;
- (void)viewDidLoad;
- (void)setupViews;
@end
