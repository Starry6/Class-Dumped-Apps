@interface PLUSSchemaPLUSContactSuggesterQueryStarted : SISchemaInstrumentationMessage
@property (nonatomic) USOSchemaUSOGraph usoPersonQuery;
@property (nonatomic) BOOL hasUsoPersonQuery;
@property (nonatomic) NSInteger domain;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)hasDomain;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (int)domain;
- (void)setDomain:;
- (BOOL)isEqual:;
- (void)deleteDomain;
- (void)setHasDomain:;
- (BOOL)hasUsoPersonQuery;
- (void)deleteUsoPersonQuery;
- (id)usoPersonQuery;
- (void)setUsoPersonQuery:;
- (void)setHasUsoPersonQuery:;
@end
