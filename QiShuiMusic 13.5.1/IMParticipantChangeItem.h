@interface IMParticipantChangeItem : IMItem
@property (nonatomic) q changeType;
@property (nonatomic) NSString otherHandle;
@property (nonatomic) NSString otherUnformattedID;
@property (nonatomic) NSString otherCountryCode;
@property (nonatomic) NSUUID activeTelephonyConversationUUID;
- (id)_newChatItems;
- (id)_newChatItemsWithChatContext:;
- (long long)changeType;
- (void)dealloc;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)setChangeType:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setOtherHandle:;
- (id)otherHandle;
- (id)activeTelephonyConversationUUID;
- (id)copyDictionaryRepresentation;
- (id)otherCountryCode;
- (void)setOtherCountryCode:;
- (id)otherUnformattedID;
- (void)setOtherUnformattedID:;
- (void)setActiveTelephonyConversationUUID:;
+ (BOOL)supportsSecureCoding;
@end
