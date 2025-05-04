@interface AWEIMActiveUserMessageObserver : NSObject
+ (void)newMessagesWithMessageIdentifiers:belongingConversationMap:;
+ (BOOL)p_isAvailableWithMessage:;
+ (void)p_updateActiveInfoIfNeededWithObserverInfos:;
+ (id)p_denyUidDictionary;
+ (void)updateActiveInfoWithUid:secUid:timestamp:;
+ (BOOL)isAvailable;
@end
