@interface ASRSchemaASRFinalAudioPacketContainingSpeechReceived : SISchemaInstrumentationMessage
@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) NSString loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
@property (nonatomic) NSData jsonData;
- (BOOL)hasExists;
- (BOOL)exists;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setExists:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)deleteExists;
- (void)setHasExists:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)loggableSharedUserId;
- (void)setLoggableSharedUserId:;
- (BOOL)hasLoggableSharedUserId;
- (void)deleteLoggableSharedUserId;
- (void)setHasLoggableSharedUserId:;
@end
