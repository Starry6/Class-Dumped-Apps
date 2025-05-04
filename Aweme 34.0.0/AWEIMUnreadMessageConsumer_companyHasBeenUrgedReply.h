@interface AWEIMUnreadMessageConsumer_companyHasBeenUrgedReply : AWEIMBaseUnreadMessagesConsumer
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (BOOL)__canQueryForCompanyHasBeenUrgedReplyWithCon:;
- (id)targetFilterOption;
- (BOOL)__canGenerateHintsForConversationId:filterOption:;
- (BOOL)__filterAndCacheMessagesFrom:conversationId:filterOption:checkUnread:;
- (id)__processCreatedOrUpdatedMessages:con:checkUnread:;
- (id)targetFilterOptionsForUnreadMessagesInChat:;
- (id)generateHintForConversation:filterOption:;
- (BOOL)handleUnreadMessagesFromDB:conversationId:filterOption:;
- (id)onConversationDataSourceMessagesUpdated:con:;
- (id)onConversationDataSourceMessagesCreated:con:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (BOOL)enableConsumer;
@end
