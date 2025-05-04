@interface AWEIMChatListOnlineGreetHintProviderComponent : AWEIMChatListHintProviderComponentBase
- (void)componentDidMounted:;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:;
- (void)updateHintShow:chat:;
- (void)__updateHintWithContent:conversationId:;
- (BOOL)isCompatibleWithSnapshot;
+ (BOOL)canCreateComponentWithContext:;
@end
