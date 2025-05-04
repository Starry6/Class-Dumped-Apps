@interface AWEIMMessageListNaviBarTitleChatRelationshipComponent : AWEIMComponentBase
@property (nonatomic) BOOL shouldShowChatRelationship;
@property (nonatomic) UILabel chatRelationshipLabel;
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
- (void)p_updateLocalUserRelationLabelIfNeed;
- (void)p_updateChatRelationshipWithFollowStatus:;
- (BOOL)shouldShowChatRelationship;
- (id)chatRelationshipLabel;
- (void)setShouldShowChatRelationship:;
- (void)setChatRelationshipLabel:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
