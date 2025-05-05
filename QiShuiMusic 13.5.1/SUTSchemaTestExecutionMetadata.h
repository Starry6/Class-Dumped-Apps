@interface SUTSchemaTestExecutionMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID fingerprint;
@property (nonatomic) BOOL hasFingerprint;
@property (nonatomic) NSData jsonData;
- (void)setFingerprint:;
- (id)fingerprint;
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
- (BOOL)hasFingerprint;
- (void)deleteFingerprint;
- (void)setHasFingerprint:;
@end
