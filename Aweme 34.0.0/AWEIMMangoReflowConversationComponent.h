@interface AWEIMMangoReflowConversationComponent : AWEIMComponentBase
- (void)componentDidMounted:;
- (id)messageListEnterChatRequestParamsForRequestSource:;
- (void)updateMessageListEnterChatData:requestSource:;
- (id)appendEnterChatTrackParamsWithRequestSource:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
