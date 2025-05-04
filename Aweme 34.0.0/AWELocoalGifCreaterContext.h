@interface AWELocoalGifCreaterContext : NSObject
@property (nonatomic) <IESIMConversationProtocol> con;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) AWEIMMessageBaseViewController vcParent;
- (id)con;
- (void)setCon:;
- (id)vcParent;
- (void)setVcParent:;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
@end
