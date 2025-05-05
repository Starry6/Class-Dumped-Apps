@interface VCAudioUnitSpatialContext : NSObject
@property (nonatomic) I audioSessionId;
@property (nonatomic) I maxChannelCountMic;
@property (nonatomic) I maxChannelCountSpeaker;
@property (nonatomic) ^{OpaqueCMBlockBuffer=} spatialMetadata;
- (void)dealloc;
- (unsigned int)audioSessionId;
- (void)setAudioSessionId:;
- (id)initWithAudioSessionId:maxChannelCountMic:maxChannelCountSpeaker:spatialMetadata:;
- (id)spatialMetadata;
- (void)setSpatialMetadata:;
- (unsigned int)maxChannelCountMic;
- (void)setMaxChannelCountMic:;
- (unsigned int)maxChannelCountSpeaker;
- (void)setMaxChannelCountSpeaker:;
@end
