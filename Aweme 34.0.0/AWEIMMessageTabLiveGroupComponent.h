@interface AWEIMMessageTabLiveGroupComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageTabVisibleConversationInterface> visibleConvService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)hostVC_viewWillDisappear;
- (void)setVisibleConvService:;
- (id)visibleConvService;
- (void)possiblyStartPollingLiveGroupInfo;
- (void)stopPollingLiveGroupInfoWithViewDisappeared:;
- (void).cxx_destruct;
- (id)visibleConversations;
@end
