@interface CNVSchemaCNVActionCandidatesGenerated : SISchemaInstrumentationMessage
@property (nonatomic) NSArray actionCandidates;
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
- (void)clearActionCandidates;
- (void)deleteActionCandidates;
- (void)addActionCandidates:;
- (unsigned long long)actionCandidatesCount;
- (id)actionCandidatesAtIndex:;
- (id)actionCandidates;
- (void)setActionCandidates:;
@end
