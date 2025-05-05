@interface ICMutablePlayActivityAudioQualityProperties : ICPlayActivityAudioQualityProperties
@property (nonatomic) q bitRate;
@property (nonatomic) q bitDepth;
@property (nonatomic) NSString channelLayoutDescription;
@property (nonatomic) I codec;
@property (nonatomic) q sampleRate;
@property (nonatomic) BOOL spatialized;
- (void)setBitDepth:;
- (id)mutableCopyWithZone:;
- (void)setSpatialized:;
- (id)copyWithZone:;
- (void)setCodec:;
- (void)setSampleRate:;
- (void)setBitRate:;
- (void)setChannelLayoutDescription:;
@end
