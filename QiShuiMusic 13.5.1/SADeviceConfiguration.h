@interface SADeviceConfiguration : SABaseClientBoundCommand
@property (nonatomic) double audioSessionActivationDelay;
@property (nonatomic) double audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
@property (nonatomic) BOOL hasAudioSessionActivationDelay;
@property (nonatomic) double initialInterstitialDelay;
@property (nonatomic) double initialInterstitialDelayForCarPlay;
@property (nonatomic) double initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
@property (nonatomic) double mediaPlaybackVolumeThresholdForAudioSessionActivationDelay;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (double)audioSessionActivationDelay;
- (void)setAudioSessionActivationDelay:;
- (double)audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
- (void)setAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold:;
- (BOOL)hasAudioSessionActivationDelay;
- (void)setHasAudioSessionActivationDelay:;
- (double)initialInterstitialDelay;
- (void)setInitialInterstitialDelay:;
- (double)initialInterstitialDelayForCarPlay;
- (void)setInitialInterstitialDelayForCarPlay:;
- (double)initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
- (void)setInitialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking:;
- (double)mediaPlaybackVolumeThresholdForAudioSessionActivationDelay;
- (void)setMediaPlaybackVolumeThresholdForAudioSessionActivationDelay:;
+ (id)deviceConfiguration;
+ (id)deviceConfigurationWithDictionary:context:;
@end
