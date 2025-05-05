@interface AXMOutputManagerConfiguration : NSObject
@property (nonatomic) Q components;
@property (nonatomic) BOOL usesPrivateAudioSession;
@property (nonatomic) BOOL hapticEngineUsesAutoShutdown;
@property (nonatomic) double hapticEngineAutoShutdownTimeout;
@property (nonatomic) BOOL hapticEngineUsesHapticsOnly;
- (unsigned long long)components;
- (void)setComponents:;
- (id)description;
- (BOOL)usesPrivateAudioSession;
- (void)setUsesPrivateAudioSession:;
- (BOOL)hapticEngineUsesAutoShutdown;
- (void)setHapticEngineUsesAutoShutdown:;
- (double)hapticEngineAutoShutdownTimeout;
- (void)setHapticEngineAutoShutdownTimeout:;
- (BOOL)hapticEngineUsesHapticsOnly;
- (void)setHapticEngineUsesHapticsOnly:;
@end
