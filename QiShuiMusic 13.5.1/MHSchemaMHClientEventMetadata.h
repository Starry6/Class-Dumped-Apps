@interface MHSchemaMHClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID mhId;
@property (nonatomic) BOOL hasMhId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)mhId;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (void)setMhId:;
- (BOOL)isEqual:;
- (BOOL)hasMhId;
- (void)deleteMhId;
- (void)setHasMhId:;
@end
