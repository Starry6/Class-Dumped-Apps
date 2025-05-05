@interface IMMutableChatContext : IMChatContext
@property (nonatomic) q serviceType;
@property (nonatomic) q filterCategory;
@property (nonatomic) BOOL spam;
@property (nonatomic) BOOL sendersUnknown;
@property (nonatomic) BOOL responded;
@property (nonatomic) NSUUID activeTelephonyConversationUUID;
- (void)setServiceType:;
- (void)setSpam:;
- (void)setActiveTelephonyConversationUUID:;
- (void)setFilterCategory:;
- (void)setSendersUnknown:;
- (void)setResponded:;
+ (id)chatContextForPinnedChat:;
@end
