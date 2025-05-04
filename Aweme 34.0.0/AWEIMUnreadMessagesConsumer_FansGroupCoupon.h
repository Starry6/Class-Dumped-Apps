@interface AWEIMUnreadMessagesConsumer_FansGroupCoupon : AWEIMBaseUnreadMessagesConsumer
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)didDisplayedHint:cellContext:;
- (void)didClickedHint:cellContext:;
- (BOOL)p_disableHighLightWithCon:;
- (id)targetFilterOptionsForUnreadMessagesInChat:;
- (id)generateHintForConversation:filterOption:;
- (BOOL)handleUnreadMessagesFromDB:conversationId:filterOption:;
- (id)onConversationDataSourceMessagesCreated:con:;
- (long long)hintLineBreakMode;
- (BOOL)__filterAndCacheMessagesFrom:conversationId:filterOption:;
- (BOOL)hasValidMessageWithConversationId:filterOption:;
- (BOOL)__canQueryForFansGroupCouponWithChat:;
- (BOOL)__canQueryForFansGroupCouponWithCon:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (BOOL)enableConsumer;
@end
