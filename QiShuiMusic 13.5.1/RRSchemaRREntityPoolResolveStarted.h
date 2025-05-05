@interface RRSchemaRREntityPoolResolveStarted : SISchemaInstrumentationMessage
@property (nonatomic) USOSchemaUSOGraph usoQuery;
@property (nonatomic) BOOL hasUsoQuery;
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
- (BOOL)hasUsoQuery;
- (void)deleteUsoQuery;
- (id)usoQuery;
- (void)setUsoQuery:;
- (void)setHasUsoQuery:;
@end
