@interface VCMediaNegotiationBlobV2CodecFeatures : PBCodable
@property (nonatomic) BOOL allowAudioRecording;
@property (nonatomic) BOOL hasAudioFeatures;
@property (nonatomic) I audioFeatures;
@property (nonatomic) BOOL hasVideoFeatures;
@property (nonatomic) NSData videoFeatures;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)allowAudioRecording;
- (void)printWithLogFile:prefix:;
- (unsigned int)audioFeatures;
- (void)setAudioFeatures:;
- (void)setHasAudioFeatures:;
- (BOOL)hasAudioFeatures;
- (BOOL)hasVideoFeatures;
- (id)videoFeatures;
- (void)setVideoFeatures:;
- (id)initWithAllowAudioRecording:videoFeatures:;
@end
