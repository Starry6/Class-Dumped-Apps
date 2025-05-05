@interface IDSConversationGroupCypher : NSObject
@property (nonatomic) IDSMPConversationGroup conversationGroup;
@property (nonatomic) NSArray participants;
@property (nonatomic) IDSDeviceIdentity deviceIdentity;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)participants;
- (void)setParticipants:;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)cypherData:withAccountIdentity:identifier:error:;
- (id)decypherData:withAccountIdentity:signingDevicePublicKey:identifier:error:;
- (id)initWithConversationGroup:deviceIdentity:participants:;
- (id)_memberList;
- (id)conversationGroup;
- (void)setConversationGroup:;
- (id)deviceIdentity;
+ (BOOL)supportsSecureCoding;
@end
