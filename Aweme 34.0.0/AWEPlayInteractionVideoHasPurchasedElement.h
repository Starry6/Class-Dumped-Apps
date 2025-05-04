@interface AWEPlayInteractionVideoHasPurchasedElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView outsideContainerView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel hasPurchasedLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)makeConstraint;
- (id)attributedTextWithText:;
- (id)outsideContainerView;
- (id)hasPurchasedLabel;
- (id)trackShowExtraParams;
- (void)setOutsideContainerView:;
- (void)setHasPurchasedLabel:;
- (void)viewDidLoad;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)reset;
+ (id)activateInfoWithContext:;
@end
