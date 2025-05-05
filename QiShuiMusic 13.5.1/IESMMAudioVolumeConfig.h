@interface IESMMAudioVolumeConfig : IESMMAudioEffectConfig
@property (nonatomic) double volume;
@property (nonatomic) double keyframeAudioVolume;
@property (nonatomic) BOOL needUsekeyframeAudioVolume;
@property (nonatomic) IESMMKeyFrameInfo audioFilterVolumnFrameInfo;
@property (nonatomic) IESKeyframeTimeAndCountInfo audiokeyframeCountAndInfo;
@property (nonatomic) BOOL multiClipEffected;
- (id)audioFilterVolumnFrameInfo;
- (id)audiokeyframeCountAndInfo;
- (double)keyframeAudioVolume;
- (BOOL)multiClipEffected;
- (BOOL)needUsekeyframeAudioVolume;
- (void)setAudioFilterVolumnFrameInfo:;
- (void)setAudiokeyframeCountAndInfo:;
- (void)setKeyframeAudioVolume:;
- (void)setMultiClipEffected:;
- (void)setNeedUsekeyframeAudioVolume:;
- (void)setupDefaultValues;
- (id)toDicInfo;
- (double)volume;
- (void)setVolume:;
- (void).cxx_destruct;
- (id)description;
@end
