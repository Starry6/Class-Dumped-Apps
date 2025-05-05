@interface SISchemaPNRSpeechRecognitionSourceContext : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger speechRecognitionSource;
@property (nonatomic) BOOL hasSpeechRecognitionSource;
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
- (void)setSpeechRecognitionSource:;
- (BOOL)hasSpeechRecognitionSource;
- (void)setHasSpeechRecognitionSource:;
- (void)deleteSpeechRecognitionSource;
- (int)speechRecognitionSource;
@end
