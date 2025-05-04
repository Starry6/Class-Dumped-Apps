@interface AWEIMMessageTabLiveObserveComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageTabVisibleConversationInterface> visibleConvService;
@property (nonatomic) <AWELiveModuleService> liveModuleService;
@property (nonatomic) <AWELiveCheckDataManagerService> liveCheckService;
@property (nonatomic) BOOL enableLiveCheck;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (id)liveModuleService;
- (void)setLiveModuleService:;
- (id)liveCheckService;
- (void)setLiveCheckService:;
- (void)chatListDidEndScroll;
- (void)setEnableLiveCheck:;
- (BOOL)enableLiveCheck;
- (void)setVisibleConvService:;
- (void)liveStatusSubscribe;
- (id)visibleConvService;
- (id)p_visibleChatLiveModels;
- (id)p_visibleChatModels;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
