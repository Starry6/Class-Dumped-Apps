@interface FLOWSchemaFLOWEntityTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSString entityId;
@property (nonatomic) BOOL hasEntityId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setEntityId:;
- (id)entityId;
- (BOOL)hasEntityId;
- (void)deleteEntityId;
- (void)setHasEntityId:;
@end
