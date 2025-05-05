@interface IESSaaSTIMMessageMarkAsReadOperator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)bumpReadBadgeCountTo:forConversation:;
- (BOOL)bumpReadBadgeCountTo:forConversation:forbidCheck:;
- (BOOL)bumpReadIndexTo:forConversation:;
- (BOOL)bumpReadIndexV2To:forConversation:;
- (void)markAllConversationsAsReadWithSendToServerFlag:;
- (void)markConversationAsRead:tillPullIndex:tillBadgeCount:sendToServer:;
- (void)markStrangerBoxConversationsAsReadWithSendToServerFlag:;
- (void)p_markConversationsAsReadWithReadIndexChangedConversations:readIndexChangedConversationModels:sendToServerFlag:;
- (id)readBadgeCountForConversation:;
- (long long)readIndexForConversation:;
- (long long)readIndexV2ForConversation:;
- (id)reportUnreadQueue;
- (void)unreadCountReport:inbox:;
- (id)init;
+ (id)sharedInstance;
@end
