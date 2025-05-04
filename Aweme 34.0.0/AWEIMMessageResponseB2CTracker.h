@interface AWEIMMessageResponseB2CTracker : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageListDataInterface> messageListData;
@property (nonatomic) BOOL currentUserIsCustomer;
@property (nonatomic) BOOL peerUserIsCustomer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)messageListEnterChatRequestParamsForRequestSource:;
- (void)updateMessageListEnterChatData:requestSource:;
- (void)setMessageListData:;
- (id)messageListData;
- (void)setCurrentUserIsCustomer:;
- (void)setPeerUserIsCustomer:;
- (BOOL)currentUserIsCustomer;
- (BOOL)peerUserIsCustomer;
- (void)p_handleTrackMessage:conversationID:;
- (id)sendMethodFromMessage:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
