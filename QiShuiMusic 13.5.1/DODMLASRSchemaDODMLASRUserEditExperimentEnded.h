@interface DODMLASRSchemaDODMLASRUserEditExperimentEnded : SISchemaInstrumentationMessage
@property (nonatomic) NSArray redecodingResults;
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (id)linkId;
- (void)setLinkId:;
- (void)setHasLinkId:;
- (BOOL)hasLinkId;
- (void)deleteLinkId;
- (void)clearRedecodingResults;
- (void)deleteRedecodingResults;
- (void)addRedecodingResults:;
- (unsigned long long)redecodingResultsCount;
- (id)redecodingResultsAtIndex:;
- (id)redecodingResults;
- (void)setRedecodingResults:;
@end
