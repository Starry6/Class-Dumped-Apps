@interface AWEIMMessageListNaviBarTitleNearbyGroupComponent : AWEIMComponentBase
@property (nonatomic) BOOL shouldShowNearbyGroupLabel;
@property (nonatomic) UILabel nearbyGroupLabel;
@property (nonatomic) <AWEIMMessageListNaviBarTitleInterface> naviBarTitleService;
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
- (void)setNaviBarTitleService:;
- (id)naviBarTitleService;
- (void)p_updateNearbyGroupText;
- (void)setShouldShowNearbyGroupLabel:;
- (id)nearbyGroupLabel;
- (BOOL)shouldShowNearbyGroupLabel;
- (void)setNearbyGroupLabel:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
