@interface AWEIMConversationPlatformConfigInteractor : AWEIMComponentBase
@property (nonatomic) NSArray platformChatPanels;
@property (nonatomic) BOOL needRefreshWhenFetchFullUser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)didFetchFullDetailUser:fullDetailUser:;
- (id)platformChatPanels;
- (void)__fetchData;
- (id)vcParent;
- (void)setNeedRefreshWhenFetchFullUser:;
- (void)__prepareLocalDataWithCompletion:;
- (void)setPlatformChatPanels:;
- (void)__updateChatPanels;
- (void)__updateCacheWithJson:;
- (BOOL)needRefreshWhenFetchFullUser;
- (id)init;
- (void).cxx_destruct;
- (id)conversation;
- (void)refreshData;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)enable;
@end
