@interface GRRSchemaGRRFeatureExtractionStarted : SISchemaInstrumentationMessage
@property (nonatomic) GRRSchemaGRRSource source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setHasSource:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (id)source;
- (BOOL)readFrom:;
- (BOOL)hasSource;
- (id)dictionaryRepresentation;
- (void)setSource:;
- (BOOL)isEqual:;
- (void)deleteSource;
@end
