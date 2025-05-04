@interface AWEIMBaseUnreadMessagesConsumer : AWEIMChatListHintProviderComponentBase
@property (nonatomic) <AWEIMUnreadMessagesConsumerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iesMessagesFromMsgIds:conversationId:;
- (id)targetFilterOptionsForUnreadMessagesInChat:;
- (id)generateHintForConversation:filterOption:;
- (BOOL)handleUnreadMessagesFromDB:conversationId:filterOption:;
- (id)onConversationDataSourceMessagesUpdated:con:;
- (id)onConversationDataSourceMessagesCreated:con:;
- (id)generateHintModelForStrangerConversation:filterOptions:;
- (void)handleFilterOptionToMessages:conversationId:;
- (id)generateHintModelForConversation:filterOptions:;
- (id)generateHintForConversation:filterOptions:;
- (unsigned long long)hash;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setDelegate:;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)enableConsumer;
+ (id)identifier;
@end
