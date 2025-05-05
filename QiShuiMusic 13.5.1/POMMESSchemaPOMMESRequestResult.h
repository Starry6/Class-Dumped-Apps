@interface POMMESSchemaPOMMESRequestResult : SISchemaInstrumentationMessage
@property (nonatomic) double pommesConfidenceScore;
@property (nonatomic) BOOL hasPommesConfidenceScore;
@property (nonatomic) NSString pegasusDomain;
@property (nonatomic) BOOL hasPegasusDomain;
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
- (BOOL)hasPegasusDomain;
- (void)deletePegasusDomain;
- (id)pegasusDomain;
- (void)setPegasusDomain:;
- (void)setHasPegasusDomain:;
- (void)setPommesConfidenceScore:;
- (BOOL)hasPommesConfidenceScore;
- (void)setHasPommesConfidenceScore:;
- (void)deletePommesConfidenceScore;
- (double)pommesConfidenceScore;
@end
