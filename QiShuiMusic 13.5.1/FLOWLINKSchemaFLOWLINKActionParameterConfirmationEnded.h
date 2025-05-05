@interface FLOWLINKSchemaFLOWLINKActionParameterConfirmationEnded : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isCorrectParameter;
@property (nonatomic) BOOL hasIsCorrectParameter;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setIsCorrectParameter:;
- (BOOL)hasIsCorrectParameter;
- (void)setHasIsCorrectParameter:;
- (void)deleteIsCorrectParameter;
- (BOOL)isCorrectParameter;
@end
