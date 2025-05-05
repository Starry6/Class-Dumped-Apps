@interface RFSchemaRFGClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID rfId;
@property (nonatomic) BOOL hasRfId;
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
- (BOOL)hasRfId;
- (void)deleteRfId;
- (id)rfId;
- (void)setRfId:;
- (void)setHasRfId:;
@end
