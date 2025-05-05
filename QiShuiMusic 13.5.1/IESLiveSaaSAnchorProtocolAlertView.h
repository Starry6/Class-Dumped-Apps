@interface IESLiveSaaSAnchorProtocolAlertView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) @? onTapAgree;
@property (nonatomic) @? onTapProtocol;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didTapAgreeButton;
- (void)didTapProtocolButton;
- (id)onTapAgree;
- (id)onTapProtocol;
- (void)setOnTapAgree:;
- (void)setOnTapProtocol:;
- (id)init;
- (void)didMoveToSuperview;
- (id)containerView;
- (void)hide;
- (void)setContainerView:;
- (void)show;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)loadViews;
- (void)didTapSelf;
- (void)didTapCancelButton;
@end
