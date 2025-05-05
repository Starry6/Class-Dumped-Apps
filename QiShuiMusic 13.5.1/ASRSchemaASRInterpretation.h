@interface ASRSchemaASRInterpretation : SISchemaInstrumentationMessage
@property (nonatomic) NSArray tokens;
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
@end
