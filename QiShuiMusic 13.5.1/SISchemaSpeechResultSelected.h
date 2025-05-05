@interface SISchemaSpeechResultSelected : SISchemaInstrumentationMessage
@property (nonatomic) NSString resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) NSInteger source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setHasSource:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (int)source;
- (BOOL)readFrom:;
- (BOOL)hasSource;
- (id)dictionaryRepresentation;
- (void)setSource:;
- (BOOL)isEqual:;
- (id)resultCandidateId;
- (void)setResultCandidateId:;
- (BOOL)hasResultCandidateId;
- (void)deleteResultCandidateId;
- (void)setHasResultCandidateId:;
- (void)deleteSource;
@end
