@interface NLXSchemaCDMRepetitionResult : SISchemaInstrumentationMessage
@property (nonatomic) I asrHypothesisIndex;
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) NSInteger repetitionType;
@property (nonatomic) BOOL hasRepetitionType;
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
- (unsigned int)asrHypothesisIndex;
- (void)setAsrHypothesisIndex:;
- (BOOL)hasAsrHypothesisIndex;
- (void)setHasAsrHypothesisIndex:;
- (void)deleteAsrHypothesisIndex;
- (void)setRepetitionType:;
- (BOOL)hasRepetitionType;
- (void)setHasRepetitionType:;
- (void)deleteRepetitionType;
- (int)repetitionType;
@end
