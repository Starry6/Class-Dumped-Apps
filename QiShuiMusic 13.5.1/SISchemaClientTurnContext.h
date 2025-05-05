@interface SISchemaClientTurnContext : PBCodable
@property (nonatomic) BOOL hasTurnID;
@property (nonatomic) NSData turnID;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasTurnID;
- (id)turnID;
- (void)setTurnID:;
@end
