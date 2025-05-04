@interface AWEIMChatListHintProviderDraftComponent : AWEIMChatListHintProviderComponentBase
@property (nonatomic) BOOL enableComputationForStrangerConversation;
- (void)componentDidMounted:;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:;
- (void)updateStrangerConversationCellWhenStrangerChatUpdate:;
- (void)__didUpdateDraft:;
- (void)setEnableComputationForStrangerConversation:;
- (void)__updateDraftHintWithDraftModel:conversationId:;
- (void)__updateDraftHintWithDraftModel:con:;
- (BOOL)enableComputationForStrangerConversation;
- (void)dealloc;
@end
