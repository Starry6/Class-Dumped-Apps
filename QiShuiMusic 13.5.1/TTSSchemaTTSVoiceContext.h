@interface TTSSchemaTTSVoiceContext : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger voiceType;
@property (nonatomic) BOOL hasVoiceType;
@property (nonatomic) NSInteger voiceFootprint;
@property (nonatomic) BOOL hasVoiceFootprint;
@property (nonatomic) I voiceVersion;
@property (nonatomic) BOOL hasVoiceVersion;
@property (nonatomic) I resourceVersion;
@property (nonatomic) BOOL hasResourceVersion;
@property (nonatomic) NSData jsonData;
- (void)setVoiceType:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (unsigned int)resourceVersion;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (int)voiceType;
- (BOOL)isEqual:;
- (int)voiceFootprint;
- (unsigned int)voiceVersion;
- (void)setVoiceFootprint:;
- (void)setVoiceVersion:;
- (void)setResourceVersion:;
- (BOOL)hasVoiceType;
- (void)setHasVoiceType:;
- (void)deleteVoiceType;
- (BOOL)hasVoiceFootprint;
- (void)setHasVoiceFootprint:;
- (void)deleteVoiceFootprint;
- (BOOL)hasVoiceVersion;
- (void)setHasVoiceVersion:;
- (void)deleteVoiceVersion;
- (BOOL)hasResourceVersion;
- (void)setHasResourceVersion:;
- (void)deleteResourceVersion;
@end
