@interface SISchemaSpeechTranscription : SISchemaInstrumentationMessage
@property (nonatomic) NSString aceID;
@property (nonatomic) BOOL hasAceID;
@property (nonatomic) NSInteger speechTranscriptionType;
@property (nonatomic) BOOL hasSpeechTranscriptionType;
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
- (BOOL)hasAceID;
- (void)deleteAceID;
- (void)setSpeechTranscriptionType:;
- (BOOL)hasSpeechTranscriptionType;
- (void)setHasSpeechTranscriptionType:;
- (void)deleteSpeechTranscriptionType;
- (id)aceID;
- (void)setAceID:;
- (int)speechTranscriptionType;
- (void)setHasAceID:;
@end
