@interface AWEIMGroupShareCommandNetwork : NSObject
+ (void)fetchGroupShareCommandWithConversationId:completion:;
+ (void)insertGroupShareCommandMessageWithConversationId:completion:;
+ (id)p_insertFailShareCommandMessageWithConversationID:;
@end
