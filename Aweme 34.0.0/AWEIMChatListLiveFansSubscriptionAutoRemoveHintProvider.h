@interface AWEIMChatListLiveFansSubscriptionAutoRemoveHintProvider : AWEIMChatListHintProviderComponentBase
@property (nonatomic) AWEIMChatListLiveFansSubscriptionAutoRemoveHintTracker tracker;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:;
- (void)didDisplayedHint:cellContext:;
- (void)didClickedHint:cellContext:;
- (void)asyncUpdateHintVMWithChatModel:;
- (id)__remindTypeForHint:;
- (void)__updateVMForConversationId:content:;
- (void)__updateHintsWithText:chat:;
- (BOOL)p_disableHighLightWithChat:;
- (id)init;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
@end
