@interface SISchemaAutoPunctuationEdit : SISchemaInstrumentationMessage
@property (nonatomic) NSString recognizedPunctuation;
@property (nonatomic) BOOL hasRecognizedPunctuation;
@property (nonatomic) NSString correctedPunctuation;
@property (nonatomic) BOOL hasCorrectedPunctuation;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setRecognizedPunctuation:;
- (void)setCorrectedPunctuation:;
- (BOOL)hasRecognizedPunctuation;
- (void)deleteRecognizedPunctuation;
- (BOOL)hasCorrectedPunctuation;
- (void)deleteCorrectedPunctuation;
- (id)recognizedPunctuation;
- (id)correctedPunctuation;
- (void)setHasRecognizedPunctuation:;
- (void)setHasCorrectedPunctuation:;
@end
