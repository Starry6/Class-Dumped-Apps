@interface EDPBInteractionEventMarkedMuteThread : PBCodable
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationId;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL value;
- (BOOL)hasValue;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasValue:;
- (void)mergeFrom:;
- (void)setValue:;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)conversationId;
- (void)setConversationId:;
- (BOOL)hasConversationId;
- (void)withHasher:setConversationID:data:;
- (void)setHasConversationId:;
@end
