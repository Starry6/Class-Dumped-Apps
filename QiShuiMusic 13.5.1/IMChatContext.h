@interface IMChatContext : NSObject
@property (nonatomic) q serviceType;
@property (nonatomic) q filterCategory;
@property (nonatomic) BOOL spam;
@property (nonatomic) BOOL sendersUnknown;
@property (nonatomic) BOOL responded;
@property (nonatomic) NSUUID activeTelephonyConversationUUID;
- (long long)serviceType;
- (id)_copyWithClass:zone:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (BOOL)hasResponded;
- (long long)filterCategory;
- (BOOL)isSpam;
- (id)activeTelephonyConversationUUID;
- (BOOL)areSendersUnknown;
@end
