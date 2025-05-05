@interface DODMLASRSchemaDODMLASRNgramHits : SISchemaInstrumentationMessage
@property (nonatomic) NSArray hits;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearHits;
- (void)deleteHits;
- (void)addHits:;
- (unsigned long long)hitsCount;
- (unsigned int)hitsAtIndex:;
- (id)hits;
- (void)setHits:;
@end
