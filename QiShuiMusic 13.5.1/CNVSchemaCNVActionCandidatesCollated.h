@interface CNVSchemaCNVActionCandidatesCollated : SISchemaInstrumentationMessage
@property (nonatomic) NSArray collatedActionCandidates;
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
- (void)clearCollatedActionCandidates;
- (void)deleteCollatedActionCandidates;
- (void)addCollatedActionCandidates:;
- (unsigned long long)collatedActionCandidatesCount;
- (id)collatedActionCandidatesAtIndex:;
- (id)collatedActionCandidates;
- (void)setCollatedActionCandidates:;
@end
