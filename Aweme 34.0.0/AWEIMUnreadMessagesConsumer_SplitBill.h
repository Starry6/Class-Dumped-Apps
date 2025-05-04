@interface AWEIMUnreadMessagesConsumer_SplitBill : AWEIMBaseUnreadMessagesConsumer
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)didDisplayedHint:cellContext:;
- (void)didClickedHint:cellContext:;
- (id)targetFilterOption;
- (id)targetFilterOptionsForUnreadMessagesInChat:;
- (id)generateHintForConversation:filterOption:;
- (BOOL)handleUnreadMessagesFromDB:conversationId:filterOption:;
- (id)onConversationDataSourceMessagesCreated:con:;
- (BOOL)hasValidMessageWithConversationId:filterOption:;
- (BOOL)canQueryWithCon:;
- (BOOL)hasValidMessageFromMessages:;
- (id)trackingParamsWithCellContext:;
- (BOOL)isRelatedUser:;
- (void)setHasValidMessageWithConversationId:filterOption:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (BOOL)enableConsumer;
@end
