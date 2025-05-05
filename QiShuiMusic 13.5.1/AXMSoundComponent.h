@interface AXMSoundComponent : AXMOutputComponent
@property (nonatomic) @ configChangedObserverToken;
- (id)init;
- (void)dealloc;
- (BOOL)canHandleRequest:;
- (void)transitionToState:completion:;
- (void).cxx_destruct;
- (void)handleRequest:completion:;
- (id)_scheduleActiveSound:;
- (void)_scheduleOneShotSound:completion:;
- (BOOL)_startEngineIfNeeded:;
- (void)_stopActiveSound:;
- (void)_logAudioFileInfo:;
- (id)configChangedObserverToken;
- (void)setConfigChangedObserverToken:;
+ (BOOL)isSupported;
@end
