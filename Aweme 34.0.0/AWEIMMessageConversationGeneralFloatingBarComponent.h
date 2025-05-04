@interface AWEIMMessageConversationGeneralFloatingBarComponent : AWEIMComponentBase
@property (nonatomic) NSMutableDictionary subscribers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)messageListEnterChatRequestParamsForRequestSource:;
- (void)updateMessageListEnterChatData:requestSource:;
- (void)registerGeneralFloatingBarType:handler:;
- (void)handleResponse:;
- (id)subscribers;
- (void).cxx_destruct;
- (void)setSubscribers:;
+ (BOOL)canCreateComponentWithContext:;
@end
