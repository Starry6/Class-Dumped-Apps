@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters
@property (nonatomic) NSInteger trackID;
@property (nonatomic) NSString audioTimePitchAlgorithm;
@property (nonatomic) r^{opaqueMTAudioProcessingTap=} audioTapProcessor;
- (id)audioTimePitchAlgorithm;
- (void)setAudioTimePitchAlgorithm:;
- (int)trackID;
- (void)setTrackID:;
- (id)audioTapProcessor;
- (void)setAudioTapProcessor:;
- (void)setVolumeRampFromStartVolume:toEndVolume:timeRange:;
- (void)setVolumeRampFromStartVolume:toEndVolume:timeRange:rampMode:;
- (void)setVolume:atTime:;
+ (id)audioMixInputParametersWithTrack:;
+ (id)audioMixInputParameters;
+ (id)audioMixInputParametersWithAssetTrack:introFadeDuration:fadeOutStart:fadeOutDuration:;
@end
