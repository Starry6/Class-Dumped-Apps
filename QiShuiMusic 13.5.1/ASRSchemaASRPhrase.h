@interface ASRSchemaASRPhrase : SISchemaInstrumentationMessage
@property (nonatomic) NSArray interpretations;
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
- (id)interpretations;
- (void)setInterpretations:;
- (void)clearInterpretations;
- (void)deleteInterpretations;
- (void)addInterpretations:;
- (unsigned long long)interpretationsCount;
- (id)interpretationsAtIndex:;
@end
