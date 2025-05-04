@interface AWEIMUnreadMessagesConsumer_RedPacket : AWEIMBaseUnreadMessagesConsumer
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)didDisplayedHint:cellContext:;
- (void)didClickedHint:cellContext:;
- (BOOL)p_disableHighLightWithCon:;
- (id)targetFilterOption;
- (id)targetFilterOptionsForUnreadMessagesInChat:;
- (id)generateHintForConversation:filterOption:;
- (BOOL)handleUnreadMessagesFromDB:conversationId:filterOption:;
- (id)onConversationDataSourceMessagesCreated:con:;
- (void)__filterAndCacheMessagesFrom:conversationId:filterOption:;
- (BOOL)hasValidMessageWithConversationId:filterOption:;
- (BOOL)__canQueryForRedPacketWithChatModel:;
- (id)savedMessageWithConversationId:filterOption:;
- (BOOL)shouldShowHintWithIesMessage:;
- (id)trackingParamsWithCellContext:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (BOOL)enableConsumer;
@end
