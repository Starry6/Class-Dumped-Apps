@interface CNVSchemaCollatedActionCandidate : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID primaryActionCandidateId;
@property (nonatomic) BOOL hasPrimaryActionCandidateId;
@property (nonatomic) NSArray alternativeActionCandidateIds;
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
- (BOOL)hasPrimaryActionCandidateId;
- (void)deletePrimaryActionCandidateId;
- (void)clearAlternativeActionCandidateIds;
- (void)deleteAlternativeActionCandidateIds;
- (void)addAlternativeActionCandidateIds:;
- (unsigned long long)alternativeActionCandidateIdsCount;
- (id)alternativeActionCandidateIdsAtIndex:;
- (id)primaryActionCandidateId;
- (void)setPrimaryActionCandidateId:;
- (id)alternativeActionCandidateIds;
- (void)setAlternativeActionCandidateIds:;
- (void)setHasPrimaryActionCandidateId:;
@end
