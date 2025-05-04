@interface AWEIMChatListHintProviderUnreadCountComponent : AWEIMChatListHintProviderComponentBase
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:;
+ (BOOL)canCreateComponentWithContext:;
@end
