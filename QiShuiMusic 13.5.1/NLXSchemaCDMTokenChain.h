@interface NLXSchemaCDMTokenChain : SISchemaInstrumentationMessage
@property (nonatomic) NSArray tokens;
@property (nonatomic) SISchemaUUID asrHypothesisId;
@property (nonatomic) BOOL hasAsrHypothesisId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setTokens:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)tokens;
- (id)tokensAtIndex:;
- (void)clearTokens;
- (void)deleteTokens;
- (void)addTokens:;
- (unsigned long long)tokensCount;
- (BOOL)hasAsrHypothesisId;
- (void)deleteAsrHypothesisId;
- (id)asrHypothesisId;
- (void)setAsrHypothesisId:;
- (void)setHasAsrHypothesisId:;
@end
