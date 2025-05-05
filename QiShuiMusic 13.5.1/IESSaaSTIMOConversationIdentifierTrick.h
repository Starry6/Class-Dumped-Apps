@interface IESSaaSTIMOConversationIdentifierTrick : NSObject
+ (id)conversationIDFor1to1ChatWithOtherUser:inInbox:;
+ (BOOL)dbExistConversationWithIdentifier:;
+ (long long)otherUserFor1to1ChatConversationIdentifier:;
+ (id)syncCreate1to1ConversationWithUser:inInbox:;
+ (id)syncCreateConversationWithShortIdentifier:inInbox:conversationInfo:;
+ (id)syncCreateGroupChatConversationWithShortIdentifier:inInbox:conversationInfo:;
+ (id)syncCreateLiveChatConversationWithShortIdentifier:inInbox:conversationInfo:;
@end
