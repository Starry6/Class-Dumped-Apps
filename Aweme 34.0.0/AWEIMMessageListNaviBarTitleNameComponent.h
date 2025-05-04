@interface AWEIMMessageListNaviBarTitleNameComponent : AWEIMComponentBase
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <AWEIMMessageListNaviBarTitleInterface> naviBarTitleService;
@property (nonatomic) NSString lastNameOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)didFetchPeerFullDetailUser:;
- (void)setNaviBarTitleService:;
- (id)naviBarTitleService;
- (void)p_updateText;
- (void)p_binding;
- (void)setLastNameOperator:;
- (id)lastNameOperator;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
+ (BOOL)canCreateComponentWithContext:;
@end
