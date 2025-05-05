@interface PEGASUSSchemaPEGASUSEntityInfo : SISchemaInstrumentationMessage
@property (nonatomic) NSString entityId;
@property (nonatomic) BOOL hasEntityId;
@property (nonatomic) float confidence;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) NSData jsonData;
- (float)confidence;
- (void)setConfidence:;
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
- (void)setHasConfidence:;
- (BOOL)hasConfidence;
- (void)setEntityId:;
- (id)entityId;
- (void)deleteConfidence;
- (BOOL)hasEntityId;
- (void)deleteEntityId;
- (void)setHasEntityId:;
@end
