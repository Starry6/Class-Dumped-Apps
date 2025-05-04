@interface AWEIMMessageListContext : NSObject
@property (nonatomic) NSDictionary liveCustomExtra;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) AWEIMMessageListConfig config;
- (id)liveCustomExtra;
- (void)setLiveCustomExtra:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
- (id)initWithConversation:;
+ (id)contextForCid:;
+ (id)topContext;
+ (id)s_contextLock;
+ (id)s_tableForContext;
@end
