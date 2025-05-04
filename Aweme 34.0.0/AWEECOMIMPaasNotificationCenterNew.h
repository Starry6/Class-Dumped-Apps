@interface AWEECOMIMPaasNotificationCenterNew : AWEECOMIMPaasNotificationCenter
- (void)messageDidInsert:;
- (void)websocketStateChange:;
- (void)websocketDataReceiver:info:;
- (void)longConnectionReceiveMessageServerMessageID:clientMessageID:conversationID:talkID:;
- (void)receiverMessageResponse:conversation:message:;
- (void)conversationReadStateChange:;
- (void)messageUpdate:;
- (void)p2pMessageNew:conversation:;
- (void)conversationUpdate:;
- (void)conversationListChange:deletedConvs:;
@end
