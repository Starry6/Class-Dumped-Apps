@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage
@property (nonatomic) NSArray parses;
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
- (void)clearParses;
- (void)deleteParses;
- (void)addParses:;
- (unsigned long long)parsesCount;
- (id)parsesAtIndex:;
- (id)parses;
- (void)setParses:;
@end
