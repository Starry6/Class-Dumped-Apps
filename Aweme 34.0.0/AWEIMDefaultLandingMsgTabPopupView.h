@interface AWEIMDefaultLandingMsgTabPopupView : UIViewController
@property (nonatomic) UIView maskView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView bckgrdImgView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIImageView circleView;
@property (nonatomic) UITapGestureRecognizer tapBlankAreaToDismissGesture;
@property (nonatomic) UITapGestureRecognizer tapXToDismissGesture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (BOOL)configWithRouterParamDict:;
- (void)addGestures;
- (id)tapBlankAreaToDismissGesture;
- (void)setTapBlankAreaToDismissGesture:;
- (void)p_dismiss;
- (id)bckgrdImgView;
- (void)postBeforeDismiss;
- (void)gesturesToDismiss;
- (id)tapXToDismissGesture;
- (void)confirmButtonAction:;
- (void)cancelButtonAction:;
- (void)setBckgrdImgView:;
- (void)setTapXToDismissGesture:;
- (void)setCancelButton:;
- (id)maskView;
- (void)setDescriptionLabel:;
- (void)viewDidLoad;
- (id)containerView;
- (void)viewDidDisappear:;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setMaskView:;
- (id)titleLabel;
- (id)descriptionLabel;
- (id)confirmButton;
- (void)setConfirmButton:;
- (id)circleView;
- (void)setCircleView:;
@end
