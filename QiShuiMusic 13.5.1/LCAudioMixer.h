@interface LCAudioMixer : NSObject
- (void)addInputWithLayerId:;
- (void)getVolume:ofTrack:;
- (void)removeInputForLayer:;
- (void)renderAudioTo:withAudio:withAudio:samples:;
- (void)setVolume:forTrack:;
- (id)init;
- (void)dealloc;
@end
