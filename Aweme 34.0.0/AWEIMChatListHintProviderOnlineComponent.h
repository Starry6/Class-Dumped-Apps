@interface AWEIMChatListHintProviderOnlineComponent : AWEIMChatListHintProviderComponentBase
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:;
- (void)__updateHintWithContent:conversationId:;
- (BOOL)isCompatibleWithSnapshot;
@end
