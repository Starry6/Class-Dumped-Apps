@interface AWEIMChatListHighLightHintInfoCommonComponent : AWEIMChatListHintProviderComponentBase
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)didDisplayedHint:cellContext:;
- (void)didClickedHint:cellContext:;
@end
