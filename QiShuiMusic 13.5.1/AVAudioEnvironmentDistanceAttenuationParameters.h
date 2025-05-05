@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject
@property (nonatomic) q distanceAttenuationModel;
@property (nonatomic) float referenceDistance;
@property (nonatomic) float maximumDistance;
@property (nonatomic) float rolloffFactor;
- (id)init;
- (void)dealloc;
- (id)initWithEnvironment:;
- (void)setMaximumDistance:;
- (float)maximumDistance;
- (void)setDistanceAttenuationModel:;
- (long long)distanceAttenuationModel;
- (void)setReferenceDistance:;
- (float)referenceDistance;
- (void)setRolloffFactor:;
- (float)rolloffFactor;
@end
