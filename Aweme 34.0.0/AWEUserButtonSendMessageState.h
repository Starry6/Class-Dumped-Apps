@interface AWEUserButtonSendMessageState : AWEUserButtonState
@property (nonatomic) AWEUserButtonLightInteractionContext context;
- (void)trackQuickReplyWithEventType:;
- (void)trackEnterChatWithCompletion:;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
