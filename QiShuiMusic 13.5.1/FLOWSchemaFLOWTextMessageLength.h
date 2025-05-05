@interface FLOWSchemaFLOWTextMessageLength : SISchemaInstrumentationMessage
@property (nonatomic) I messageCharLength;
@property (nonatomic) BOOL hasMessageCharLength;
@property (nonatomic) I messageWordLength;
@property (nonatomic) BOOL hasMessageWordLength;
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
- (void)setMessageCharLength:;
- (BOOL)hasMessageCharLength;
- (void)setHasMessageCharLength:;
- (void)deleteMessageCharLength;
- (void)setMessageWordLength:;
- (BOOL)hasMessageWordLength;
- (void)setHasMessageWordLength:;
- (void)deleteMessageWordLength;
- (unsigned int)messageCharLength;
- (unsigned int)messageWordLength;
@end
