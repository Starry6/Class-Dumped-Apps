@interface AWEIMMangoShareService : NSObject
- (void)showSharePanelWith:;
- (void)handleRouterWithParams:;
- (void)handleReflowRouterWithParams:;
- (void)notifyReflowCompleteWithConversation:messageID:;
- (void)doActionWithTaskID:taskToken:taskGroup:completion:;
- (id)init;
@end
