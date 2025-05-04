@interface AWEIMMessageListNaviBarTitleSilverWingComponent : AWEIMComponentBase
@property (nonatomic) BOOL isSilverWingAI;
@property (nonatomic) UILabel silverWingLabel;
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
- (void)didFetchPeerFullDetailUser:;
- (void)setNaviBarTitleService:;
- (id)naviBarTitleService;
- (void)p_updateWithIsSilverWingChatBot:roleTagStr:;
- (BOOL)isSilverWingAI;
- (void)setIsSilverWingAI:;
- (id)silverWingLabel;
- (void)p_didClickSilverWingLabel;
- (void)setSilverWingLabel:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
