@interface AWEIMMessageTabInitialActiveInfoComponent : AWEIMComponentBase
@property (nonatomic) Q loadType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)setLoadType:;
- (void)p_loadActiveInfoWithType:chatList:;
- (void)p_loadActiveInfoWithChatList:;
- (void)p_loadFirstPageActiveInfo;
- (void)dealloc;
- (unsigned long long)loadType;
+ (BOOL)canCreateComponentWithContext:;
@end
