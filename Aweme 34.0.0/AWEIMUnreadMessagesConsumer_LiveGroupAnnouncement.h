@interface AWEIMUnreadMessagesConsumer_LiveGroupAnnouncement : AWEIMBaseUnreadMessagesConsumer
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (BOOL)p_disableHighLightWithCon:;
- (id)targetFilterOptionsForUnreadMessagesInChat:;
- (id)generateHintForConversation:filterOption:;
- (BOOL)handleUnreadMessagesFromDB:conversationId:filterOption:;
- (id)onConversationDataSourceMessagesCreated:con:;
- (BOOL)__canQueryForLiveGroupAnnouncementWithChatModel:;
- (BOOL)__filterAndSortAndCacheMessageFrom:conversationId:filterOption:;
- (id)__filteredLiveGroupAnnouncementMessagesFrom:;
- (BOOL)__canQueryForLiveGroupAnnouncementWithCon:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (BOOL)enableConsumer;
@end
