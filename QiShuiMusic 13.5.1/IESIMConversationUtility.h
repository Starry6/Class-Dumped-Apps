@interface IESIMConversationUtility : NSObject
+ (void)asyncGetConversationForIdentifier:completion:;
+ (id)chatFileFolderForUser:;
+ (void)conversationForGroupChatIdentifierWithFetchIfNecessary:willFetchBlock:completion:;
+ (id)conversationIDFor1to1ChatWithPeerID:inInbox:;
+ (id)generateConversationCreateOptions;
+ (id)generateConversationOperateParticipantOptions;
+ (BOOL)isPeerStrangerForConversation:;
+ (id)oneToOneChatPeerIDOfSessionID:;
+ (long long)readIndexOfConversation:;
+ (id)conversationForIdentifier:;
+ (id)processQueue;
@end
