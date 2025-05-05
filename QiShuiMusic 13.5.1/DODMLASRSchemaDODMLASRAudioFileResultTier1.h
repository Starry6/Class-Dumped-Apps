@interface DODMLASRSchemaDODMLASRAudioFileResultTier1 : SISchemaInstrumentationMessage
@property (nonatomic) ASRSchemaASRRecognitionResultTier1 recognitionResult;
@property (nonatomic) BOOL hasRecognitionResult;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setRecognitionResult:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasRecognitionResult;
- (void)deleteRecognitionResult;
- (id)recognitionResult;
- (void)setHasRecognitionResult:;
@end
