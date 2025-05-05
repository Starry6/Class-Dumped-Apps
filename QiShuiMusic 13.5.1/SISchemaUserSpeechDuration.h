@interface SISchemaUserSpeechDuration : SISchemaInstrumentationMessage
@property (nonatomic) q durationMs;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) NSString resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
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
- (long long)durationMs;
- (void)setDurationMs:;
- (void)setHasDurationMs:;
- (BOOL)hasDurationMs;
- (id)resultCandidateId;
- (void)setResultCandidateId:;
- (BOOL)hasResultCandidateId;
- (void)deleteResultCandidateId;
- (void)setHasResultCandidateId:;
- (void)deleteDurationMs;
@end
