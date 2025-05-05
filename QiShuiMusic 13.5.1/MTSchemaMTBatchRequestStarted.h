@interface MTSchemaMTBatchRequestStarted : SISchemaInstrumentationMessage
@property (nonatomic) I numParagraphs;
@property (nonatomic) BOOL hasNumParagraphs;
@property (nonatomic) NSString sequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) NSData jsonData;
- (void)setHasSequenceNumber:;
- (BOOL)hasSequenceNumber;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setSequenceNumber:;
- (id)sequenceNumber;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setNumParagraphs:;
- (BOOL)hasNumParagraphs;
- (void)setHasNumParagraphs:;
- (void)deleteNumParagraphs;
- (void)deleteSequenceNumber;
- (unsigned int)numParagraphs;
@end
