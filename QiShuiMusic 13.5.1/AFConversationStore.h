@interface AFConversationStore : NSObject
@property (nonatomic) NSMutableDictionary conversationsByIdentifier;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)init;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)_registerConversation:withIdentifier:;
- (void)saveConversation:withIdentifier:completionBlock:;
- (void)fetchConversationWithIdentifier:completionBlock:;
- (void)removeConversationWithIdentifier:completionBlock:;
- (id)_conversationsByIdentifier;
@end
