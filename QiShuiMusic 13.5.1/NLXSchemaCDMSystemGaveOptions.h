@interface NLXSchemaCDMSystemGaveOptions : SISchemaInstrumentationMessage
@property (nonatomic) NSArray choices;
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
- (id)choices;
- (void)clearChoices;
- (void)deleteChoices;
- (void)addChoices:;
- (unsigned long long)choicesCount;
- (id)choicesAtIndex:;
- (void)setChoices:;
@end
