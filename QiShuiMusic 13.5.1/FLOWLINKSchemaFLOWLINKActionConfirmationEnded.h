@interface FLOWLINKSchemaFLOWLINKActionConfirmationEnded : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isCorrectAction;
@property (nonatomic) BOOL hasIsCorrectAction;
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
- (void)setIsCorrectAction:;
- (BOOL)hasIsCorrectAction;
- (void)setHasIsCorrectAction:;
- (void)deleteIsCorrectAction;
- (BOOL)isCorrectAction;
@end
