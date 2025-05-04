@interface AWEIMUnreadMessageConsumer_liveSpaceAutoSync : AWEIMBaseUnreadMessagesConsumer
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)didClickedHint:cellContext:;
- (BOOL)p_disableHighLightWithCon:;
- (id)targetFilterOptionsForUnreadMessagesInChat:;
- (id)generateHintForConversation:filterOption:;
- (BOOL)handleUnreadMessagesFromDB:conversationId:filterOption:;
- (id)onConversationDataSourceMessagesCreated:con:;
- (long long)hintLineBreakMode;
- (BOOL)__enableLiveVipSpaceAutoSyncWithCon:;
- (id)__targetFilterOption;
- (BOOL)__filterAndCacheMessagesFrom:conversationId:filterOption:;
- (BOOL)__canGenerateHintsForConversation:filterOption:;
+ (BOOL)enableConsumer;
@end
