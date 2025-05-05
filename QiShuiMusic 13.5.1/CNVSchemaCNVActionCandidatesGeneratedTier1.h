@interface CNVSchemaCNVActionCandidatesGeneratedTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSArray metadataTier1s;
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
- (void)clearMetadataTier1;
- (void)deleteMetadataTier1;
- (void)addMetadataTier1:;
- (unsigned long long)metadataTier1Count;
- (id)metadataTier1AtIndex:;
- (id)metadataTier1s;
- (void)setMetadataTier1s:;
@end
