@interface NLXSchemaMentionDetectorSpanData : SISchemaInstrumentationMessage
@property (nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (double)score;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setScore:;
- (BOOL)readFrom:;
- (BOOL)hasScore;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasScore:;
- (void)deleteScore;
@end
