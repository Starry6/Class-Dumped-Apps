@interface CNVSchemaCNVUsoGraphTier1 : SISchemaInstrumentationMessage
@property (nonatomic) USOSchemaUSOGraphTier1 usoGraphTier1;
@property (nonatomic) BOOL hasUsoGraphTier1;
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
- (BOOL)hasUsoGraphTier1;
- (void)deleteUsoGraphTier1;
- (id)usoGraphTier1;
- (void)setUsoGraphTier1:;
- (void)setHasUsoGraphTier1:;
@end
