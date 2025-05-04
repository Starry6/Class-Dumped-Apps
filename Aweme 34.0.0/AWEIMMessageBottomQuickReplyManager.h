@interface AWEIMMessageBottomQuickReplyManager : AWEIMComponentBase
@property (nonatomic) AWEIMLatestKindOfMessageInConversationComponent findTargetMessageComponent;
@property (nonatomic) AWEIMMessage targetMessage;
@property (nonatomic) <AWEIMMessageListDataInterface> messageListData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterUpdateData;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)didFetchMsgWithMessageGroupArray:hasMore:direction:shouldAutoLoadMore:isFirstLoad:;
- (BOOL)p_isTargetMessage:;
- (id)targetMessage;
- (void)setTargetMessage:;
- (void)setMessageListData:;
- (id)messageListData;
- (id)findLastMessageFromArray:;
- (void)p_refreshWithMessageGroupArray:;
- (id)findTargetMessageComponent;
- (void)setFindTargetMessageComponent:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
