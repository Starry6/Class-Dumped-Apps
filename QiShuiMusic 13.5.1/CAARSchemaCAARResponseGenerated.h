@interface CAARSchemaCAARResponseGenerated : SISchemaInstrumentationMessage
@property (nonatomic) NSArray actionCandidateIds;
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
- (void)clearActionCandidateIds;
- (void)deleteActionCandidateIds;
- (void)addActionCandidateIds:;
- (unsigned long long)actionCandidateIdsCount;
- (id)actionCandidateIdsAtIndex:;
- (id)actionCandidateIds;
- (void)setActionCandidateIds:;
@end
