@interface MWTSchemaMWTEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID mwtId;
@property (nonatomic) BOOL hasMwtId;
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
- (BOOL)hasMwtId;
- (void)deleteMwtId;
- (id)mwtId;
- (void)setMwtId:;
- (void)setHasMwtId:;
@end
