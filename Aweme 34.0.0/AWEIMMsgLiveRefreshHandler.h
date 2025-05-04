@interface AWEIMMsgLiveRefreshHandler : AWEIMMsgBaseRefreshHandler
@property (nonatomic) <IESIMConversationProtocol> conversation;
@property (nonatomic) NSMutableDictionary cache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q requestInterval;
@property (nonatomic) <AWEIMMessageListComponentCenter> componentCenter;
- (id)initWithComponentCenter:;
- (BOOL)supportRefreshMessage:;
- (BOOL)supportRefreshStrategy:;
- (void)refrshResourceStateFor:forViewModels:strategy:;
- (void)updateLiveAnchorWithViewModel:;
- (void)__updateLiveAnchrsWithViewModels:;
- (void)setCache:;
- (id)cache;
- (void)dealloc;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
@end
