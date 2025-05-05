@interface ISWrappedAVAudioSession : NSObject
@property (nonatomic) AVAudioSession audioSession;
@property (nonatomic) NSString category;
- (void)dealloc;
- (BOOL)setActive:error:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (BOOL)setCategory:error:;
- (id)category;
- (id)audioSession;
- (BOOL)setCategory:mode:routeSharingPolicy:options:error:;
- (id)initWithAudioSession:;
- (void)registerVolumeObserver:;
- (BOOL)setCategory:options:error:;
- (id)initWithAudioSession:category:;
- (void)unregisterVolumeObserver:;
- (void)_beginObservingOutputVolumeIfNeeded;
- (void)_endObservingOutputVolumeIfNeeded;
- (void)_main_informObserversOfVolumeChangeFrom:to:;
+ (id)auxiliarySession;
+ (id)sharedVideoPlaybackInstance;
+ (void)sharedAmbientInstanceWithLoadHandler:;
+ (id)sharedAmbientInstance;
+ (void)sharedVideoPlaybackInstanceWithLoadHandler:;
+ (void)sharedPhotosOneUpInstanceWithLoadHandler:;
+ (id)sharedPhotosOneUpInstance;
@end
