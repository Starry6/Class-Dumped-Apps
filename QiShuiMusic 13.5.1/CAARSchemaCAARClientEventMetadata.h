@interface CAARSchemaCAARClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID caarId;
@property (nonatomic) BOOL hasCaarId;
@property (nonatomic) NSString resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) SISchemaUUID requestId;
@property (nonatomic) BOOL hasRequestId;
@property (nonatomic) NSData jsonData;
- (id)requestId;
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
- (id)resultCandidateId;
- (void)setRequestId:;
- (void)setHasRequestId:;
- (BOOL)hasRequestId;
- (void)setResultCandidateId:;
- (void)deleteRequestId;
- (BOOL)hasResultCandidateId;
- (void)deleteResultCandidateId;
- (void)setHasResultCandidateId:;
- (BOOL)hasCaarId;
- (void)deleteCaarId;
- (id)caarId;
- (void)setCaarId:;
- (void)setHasCaarId:;
@end
