@interface NLXSchemaCDMEntityCandidate : SISchemaInstrumentationMessage
@property (nonatomic) USOSchemaUSOGraph entity;
@property (nonatomic) BOOL hasEntity;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) NSData jsonData;
- (void)setEntity:;
- (id)entity;
- (id)initWithJSON:;
- (double)score;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setScore:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (BOOL)hasScore;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasScore:;
- (BOOL)hasEntity;
- (void)deleteScore;
- (void)deleteEntity;
- (void)setHasEntity:;
@end
