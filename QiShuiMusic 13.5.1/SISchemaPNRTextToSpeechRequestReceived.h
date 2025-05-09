@interface SISchemaPNRTextToSpeechRequestReceived : SISchemaInstrumentationMessage
@property (nonatomic) NSString voiceAssetKey;
@property (nonatomic) BOOL hasVoiceAssetKey;
@property (nonatomic) NSString voiceResourceAssetKey;
@property (nonatomic) BOOL hasVoiceResourceAssetKey;
@property (nonatomic) BOOL isWarmStart;
@property (nonatomic) BOOL hasIsWarmStart;
@property (nonatomic) BOOL isSynthesisCached;
@property (nonatomic) BOOL hasIsSynthesisCached;
@property (nonatomic) NSInteger sourceOfTTS;
@property (nonatomic) BOOL hasSourceOfTTS;
@property (nonatomic) NSInteger speechError;
@property (nonatomic) BOOL hasSpeechError;
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
- (id)voiceAssetKey;
- (id)voiceResourceAssetKey;
- (BOOL)isWarmStart;
- (void)setIsWarmStart:;
- (int)sourceOfTTS;
- (void)setSourceOfTTS:;
- (BOOL)hasVoiceAssetKey;
- (void)deleteVoiceAssetKey;
- (BOOL)hasVoiceResourceAssetKey;
- (void)deleteVoiceResourceAssetKey;
- (BOOL)hasIsWarmStart;
- (void)setHasIsWarmStart:;
- (void)deleteIsWarmStart;
- (void)setIsSynthesisCached:;
- (BOOL)hasIsSynthesisCached;
- (void)setHasIsSynthesisCached:;
- (void)deleteIsSynthesisCached;
- (BOOL)hasSourceOfTTS;
- (void)setHasSourceOfTTS:;
- (void)deleteSourceOfTTS;
- (void)setSpeechError:;
- (BOOL)hasSpeechError;
- (void)setHasSpeechError:;
- (void)deleteSpeechError;
- (void)setVoiceAssetKey:;
- (void)setVoiceResourceAssetKey:;
- (BOOL)isSynthesisCached;
- (int)speechError;
- (void)setHasVoiceAssetKey:;
- (void)setHasVoiceResourceAssetKey:;
@end
