@interface AWEIMChatListHintProviderKTVGroupPersonCount : AWEIMChatListHintProviderComponentBase
- (void)componentDidMounted:;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:;
@end
