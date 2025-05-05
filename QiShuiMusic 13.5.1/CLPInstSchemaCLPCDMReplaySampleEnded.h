@interface CLPInstSchemaCLPCDMReplaySampleEnded : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isReplaySuccessful;
@property (nonatomic) BOOL hasIsReplaySuccessful;
@property (nonatomic) NSArray comparatorResults;
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
- (void)setIsReplaySuccessful:;
- (BOOL)hasIsReplaySuccessful;
- (void)setHasIsReplaySuccessful:;
- (void)deleteIsReplaySuccessful;
- (void)clearComparatorResults;
- (void)deleteComparatorResults;
- (void)addComparatorResults:;
- (unsigned long long)comparatorResultsCount;
- (id)comparatorResultsAtIndex:;
- (BOOL)isReplaySuccessful;
- (id)comparatorResults;
- (void)setComparatorResults:;
@end
