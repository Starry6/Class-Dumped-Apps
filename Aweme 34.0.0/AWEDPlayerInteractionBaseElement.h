@interface AWEDPlayerInteractionBaseElement : AWEBaseElement
@property (nonatomic) AWEDPlayerActionComponent actionButton;
@property (nonatomic) AWEDPlayerGeneralElementConfig elementConfig;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEDPlayerVideoModel videoModel;
@property (nonatomic) <AWEDPlayerActionDelegate> actionDelegate;
@property (nonatomic) BOOL hasSetAppear;
@property (nonatomic) UIView<AWEDPlayerInteractionViewProtocol><AWEDPlayerInteractionDispatchProtocol> container;
@property (nonatomic) UIViewController<AWEDPlayerViewControllerProtocol> viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHide:;
- (id)videoModel;
- (void)setVideoModel:;
- (void)setAppear:;
- (id)elementConfig;
- (void)setElementConfig:;
- (id)activateInfoWithData:;
- (id)actionButtonSize;
- (void)updateForSimplePlayerWithVideoModel:;
- (void)updateDPlayerState:;
- (BOOL)useGeneralActionButton;
- (BOOL)hasSetAppear;
- (void)setHasSetAppear:;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:;
- (id)actionDelegate;
- (void)setModel:;
- (id)container;
- (id)hitTestEdgeInsets;
- (id)edgeInsets;
- (void)viewDidLoad;
- (id)viewController;
- (id)model;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
- (unsigned long long)elementType;
- (void)setActionDelegate:;
- (id)actionButton;
- (void)setActionButton:;
@end
