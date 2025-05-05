@interface IESSaaSTIMMessageChecker : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) <IESSaaSTIMMessageStoreProtocol> db;
@property (nonatomic) NSArray checkMessages;
@property (nonatomic) NSObject<OS_dispatch_queue> checkQeueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCheckQeueue:;
- (void)checkInfoMessageIfNeeded;
- (void)checkInfoMessageOldVersionWithConversation:startTime:;
- (id)checkMessages;
- (id)checkQeueue;
- (long long)getCurrentTimeInterval;
- (id)localMessagesWithCheckInfoArray:filterMsgIdSet:convMinIndex:;
- (void)onConversationCheckMessageEnd;
- (void)onConversationCheckMessageEnd:messageIdentifiers:;
- (void)setCheckMessages:;
- (id)db;
- (void).cxx_destruct;
- (void)setDb:;
- (id)conversationID;
- (void)setConversationID:;
- (id)initWithConversationID:;
@end
