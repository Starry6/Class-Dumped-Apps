@interface FLOWSchemaFLOWCrossIntentRankerResponse : SISchemaInstrumentationMessage
@property (nonatomic) NSArray crossDomainRankerScoreKeepers;
@property (nonatomic) NSArray crossIntentRankerScoreKeepers;
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
- (void)clearCrossDomainRankerScoreKeeper;
- (void)deleteCrossDomainRankerScoreKeeper;
- (void)addCrossDomainRankerScoreKeeper:;
- (unsigned long long)crossDomainRankerScoreKeeperCount;
- (id)crossDomainRankerScoreKeeperAtIndex:;
- (void)clearCrossIntentRankerScoreKeeper;
- (void)deleteCrossIntentRankerScoreKeeper;
- (void)addCrossIntentRankerScoreKeeper:;
- (unsigned long long)crossIntentRankerScoreKeeperCount;
- (id)crossIntentRankerScoreKeeperAtIndex:;
- (id)crossDomainRankerScoreKeepers;
- (void)setCrossDomainRankerScoreKeepers:;
- (id)crossIntentRankerScoreKeepers;
- (void)setCrossIntentRankerScoreKeepers:;
@end
