@interface ASRSchemaASRPackage : SISchemaInstrumentationMessage
@property (nonatomic) ASRSchemaASRRecognitionResult rawRecognition;
@property (nonatomic) BOOL hasRawRecognition;
@property (nonatomic) ASRSchemaASRRecognitionResult postItn;
@property (nonatomic) BOOL hasPostItn;
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
- (id)rawRecognition;
- (void)setRawRecognition:;
- (BOOL)hasRawRecognition;
- (void)deleteRawRecognition;
- (BOOL)hasPostItn;
- (void)deletePostItn;
- (id)postItn;
- (void)setPostItn:;
- (void)setHasRawRecognition:;
- (void)setHasPostItn:;
@end
