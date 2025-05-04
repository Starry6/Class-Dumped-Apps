@interface AWEIMMessageListNaviBarTitlePigeonTipComponent : AWEIMComponentBase
@property (nonatomic) BOOL shouldShowPigeonTip;
@property (nonatomic) UILabel pigeonTipLabel;
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
- (void)componentDidMounted:;
- (void)didFetchPeerFullDetailUser:;
- (void)setNaviBarTitleService:;
- (id)naviBarTitleService;
- (id)pigeonTipLabel;
- (BOOL)shouldShowPigeonTip;
- (void)setShouldShowPigeonTip:;
- (void)p_updateWithUser:;
- (void)setPigeonTipLabel:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
