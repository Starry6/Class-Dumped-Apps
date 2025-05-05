@interface DDMessageCache : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)removeConversation:;
- (void)_pruneIgnoringFirst:;
- (id)stringWithElement:conversationID:range:;
@end
