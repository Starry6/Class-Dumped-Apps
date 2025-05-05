@interface CAARSchemaCAARActionModelOutput : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID actionCandidateId;
@property (nonatomic) BOOL hasActionCandidateId;
@property (nonatomic) float modelScore;
@property (nonatomic) BOOL hasModelScore;
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
- (BOOL)hasActionCandidateId;
- (void)deleteActionCandidateId;
- (id)actionCandidateId;
- (void)setActionCandidateId:;
- (void)setHasActionCandidateId:;
- (void)setModelScore:;
- (BOOL)hasModelScore;
- (void)setHasModelScore:;
- (void)deleteModelScore;
- (float)modelScore;
@end
