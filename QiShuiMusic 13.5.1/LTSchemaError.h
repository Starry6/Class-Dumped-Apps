@interface LTSchemaError : SISchemaInstrumentationMessage
@property (nonatomic) NSString domain;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) I code;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) NSData jsonData;
- (void)setHasCode:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned int)code;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)hasCode;
- (void).cxx_destruct;
- (BOOL)hasDomain;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (id)domain;
- (void)setDomain:;
- (void)setCode:;
- (BOOL)isEqual:;
- (void)deleteDomain;
- (void)deleteCode;
- (void)setHasDomain:;
@end
