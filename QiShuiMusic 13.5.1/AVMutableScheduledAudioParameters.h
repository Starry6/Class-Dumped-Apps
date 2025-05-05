@interface AVMutableScheduledAudioParameters : AVScheduledAudioParameters
- (id)copyWithZone:;
- (void)setVolumeRampFromStartVolume:toEndVolume:timeRange:;
- (void)setVolumeRampFromStartVolume:toEndVolume:timeRange:rampMode:;
- (void)setVolume:atTime:;
+ (id)scheduledAudioParameters;
@end
