@interface RRSchemaRREntityPoolReturned : SISchemaInstrumentationMessage
@property (nonatomic) NSArray candidateEntities;
@property (nonatomic) I entityCount;
@property (nonatomic) BOOL hasEntityCount;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned int)entityCount;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearCandidateEntities;
- (void)deleteCandidateEntities;
- (void)addCandidateEntities:;
- (unsigned long long)candidateEntitiesCount;
- (id)candidateEntitiesAtIndex:;
- (void)setEntityCount:;
- (BOOL)hasEntityCount;
- (void)setHasEntityCount:;
- (void)deleteEntityCount;
- (id)candidateEntities;
- (void)setCandidateEntities:;
@end
