@interface IESIMMessageUtility : NSObject
+ (void)asyncGetHasSendMessagesInConversation:userID:intervalSinceNow:belongingInMessageTypes:completion:;
+ (void)asyncGetHasSendMessagesInConversation:userID:intervalSinceNow:excludeMessageTypes:completion:;
+ (void)asyncGetMessageForIdentifier:inConversation:useMessageListMemoryCache:completion:;
+ (void)asyncGetUnreadMessagesFromSender:inConversation:limit:completion:;
+ (id)generatePropertyModify;
+ (BOOL)hasSendMessagesInConversation:userID:intervalSinceNow:belongingInMessageTypes:;
+ (BOOL)hasSendMessagesInConversation:userID:intervalSinceNow:excludeMessageTypes:;
+ (id)messageForIdentifier:inConversation:;
+ (id)messageForIdentifier:inConversation:useMessageListMemoryCache:;
+ (id)messagesBelongingInMessageTypes:inConversation:;
+ (id)messagesBelongingInMessageTypes:inConversation:slideDirection:baseMessage:limit:;
+ (id)messagesWithType:sinceTime:;
+ (id)processQueue;
@end
