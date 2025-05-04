@interface AWEIMGreetingGiphyMessageDeleteComponent : AWEIMComponentBase
@property (nonatomic) BOOL hasGreetingMessage;
@property (nonatomic) BOOL shouldCheckHistory;
@property (nonatomic) BOOL dismissOpt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
- (void)didFetchMsgWithMessageGroupArray:hasMore:direction:shouldAutoLoadMore:isFirstLoad:;
- (BOOL)dismissOpt;
- (void)setDismissOpt:;
- (void)markHasGreetingMessage;
- (void)removeGreetingMessageIfNeeded:;
- (void)setHasGreetingMessage:;
- (BOOL)hasGreetingMessage;
- (void)removeGreetingMessage;
- (void)p_deleteMessage:;
- (BOOL)shouldCheckHistory;
- (void)setShouldCheckHistory:;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)p_isTargetMessage:;
+ (id)p_findTargetMessageInGroup:;
@end
