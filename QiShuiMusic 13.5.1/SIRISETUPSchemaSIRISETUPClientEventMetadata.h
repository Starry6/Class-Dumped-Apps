@interface SIRISETUPSchemaSIRISETUPClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID siriSetupId;
@property (nonatomic) BOOL hasSiriSetupId;
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
- (BOOL)hasSiriSetupId;
- (void)deleteSiriSetupId;
- (id)siriSetupId;
- (void)setSiriSetupId:;
- (void)setHasSiriSetupId:;
@end
