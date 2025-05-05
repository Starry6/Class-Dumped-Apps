@interface AXMHapticComponent : AXMOutputComponent
@property (nonatomic) <CHHapticPatternPlayer> _levelPlayer;
@property (nonatomic) BOOL autoShutdownEnabled;
@property (nonatomic) double autoShutdownTimeout;
@property (nonatomic) BOOL usesHapticsOnly;
- (id)init;
- (BOOL)canHandleRequest:;
- (BOOL)isAutoShutdownEnabled;
- (void)transitionToState:completion:;
- (void).cxx_destruct;
- (void)setAutoShutdownEnabled:;
- (void)handleRequest:completion:;
- (double)autoShutdownTimeout;
- (void)setAutoShutdownTimeout:;
- (BOOL)usesHapticsOnly;
- (void)setUsesHapticsOnly:;
- (void)stopCurrentHaptics;
- (id)_levelPlayer;
- (void)set_levelPlayer:;
+ (BOOL)isSupported;
@end
