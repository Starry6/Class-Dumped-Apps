@interface GRRSchemaGRRHypothesisRanked : SISchemaInstrumentationMessage
@property (nonatomic) NSArray rankings;
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
- (id)rankings;
- (void)setRankings:;
- (void)clearRankings;
- (void)deleteRankings;
- (void)addRankings:;
- (unsigned long long)rankingsCount;
- (id)rankingsAtIndex:;
@end
