@interface AWEIMEmotionCareBotFeedbackManagerComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessage<AWEIMEmotionCareBotFeedbackMessageProtocol> message;
@property (nonatomic) <AWEIMMessageListDataInterface> messageListData;
@property (nonatomic) BOOL effect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterUpdateData;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)didFetchFullDetailUser:fullDetailUser:;
- (void)didFetchMsgWithMessageGroupArray:hasMore:direction:shouldAutoLoadMore:isFirstLoad:;
- (void)setMessageListData:;
- (void)p_refreshFeedbackViewWithMessageGroupArray:;
- (id)messageListData;
- (id)findLastMessageFromArray:;
- (id)message;
- (BOOL)effect;
- (void).cxx_destruct;
- (void)setEffect:;
- (void)setMessage:;
+ (BOOL)canCreateComponentWithContext:;
@end
