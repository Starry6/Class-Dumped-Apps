@interface AWEIMImpl.StreakFakeTrigger : NSObject
- (void)iesim_onConversationDataSourceMessagesCreated:belongingConversationMap:reason:;
- (void)iesim_didReceiveSendMessageResponse:;
- (void)iesim_didReceiveAsyncSendMessageResponse:;
- (void)handleVoipFinishMessage:withConversationID:timestamp:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
