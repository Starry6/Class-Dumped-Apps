@interface AWEIMConversationGroupChainsComponent : AWEIMComponentBase
- (void)componentDidMounted:;
- (void)updateLastTime:;
- (BOOL)isExpiredGroupChains:;
- (void)updateTailShowMessageSet:;
- (BOOL)judgeTailHasShowed:;
- (void)updateFoldStatusSet:;
- (BOOL)isNeedDisplayAll:;
- (void)didReceiveNewMessage:reason:;
- (void)didReceiveSendMessageResponse:message:result:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
