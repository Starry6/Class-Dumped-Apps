@interface AWEIMChatListHintProviderMentionComponent : AWEIMChatListHintProviderComponentBase
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:;
- (void)didDisplayedHint:cellContext:;
- (void)didClickedHint:cellContext:;
- (BOOL)p_disableHighLightWithChat:;
- (BOOL)isCompatibleWithMention;
@end
