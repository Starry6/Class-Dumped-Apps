@interface NLXSchemaContextualSpanData : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isSurroundingTextMatched;
@property (nonatomic) BOOL hasIsSurroundingTextMatched;
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
- (void)setIsSurroundingTextMatched:;
- (BOOL)hasIsSurroundingTextMatched;
- (void)setHasIsSurroundingTextMatched:;
- (void)deleteIsSurroundingTextMatched;
- (BOOL)isSurroundingTextMatched;
@end
