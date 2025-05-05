@interface AVScheduledAudioParameters : NSObject
@property (nonatomic) NSArray ramps;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)_setVolumeRampFromStartVolume:toEndVolume:timeRange:rampMode:;
- (BOOL)getVolumeRampForTime:startVolume:endVolume:timeRange:;
- (BOOL)getVolumeRampForTime:startVolume:endVolume:timeRange:rampMode:;
- (id)_audioVolumeCurve;
- (id)_volumeCurveAsString;
- (id)_ramps;
- (void)_setRamps:;
@end
