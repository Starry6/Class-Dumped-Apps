@interface PLUSSchemaPLUSClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID plusId;
@property (nonatomic) BOOL hasPlusId;
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
- (BOOL)hasPlusId;
- (void)deletePlusId;
- (id)plusId;
- (void)setPlusId:;
- (void)setHasPlusId:;
@end
