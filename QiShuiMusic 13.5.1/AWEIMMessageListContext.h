@interface AWEIMMessageListContext : NSObject
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) AWEIMMessageListConfig config;
- (void)setConfig:;
- (id)conversation;
- (void).cxx_destruct;
- (id)config;
- (void)setConversation:;
- (id)initWithConversation:;
+ (id)contextForCid:;
+ (id)s_contextLock;
+ (id)s_tableForContext;
+ (id)topContext;
@end
