@interface LynxAurumInterruptionListener : NSObject
@property (nonatomic) ^{AudioIOS=^^?^{AudioEngine}B^{OpaqueAudioComponentInstance}BB@@} backend;
- (void)onAppDidBecomeActive:;
- (void)onAudioInterrupt:;
- (void)onAudioSessionReset;
- (void)setBackend:;
- (id)init:;
- (id)backend;
@end
