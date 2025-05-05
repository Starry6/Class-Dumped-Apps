@interface SSCoreHapticsPlayer : NSObject
@property (nonatomic) CHHapticEngine engine;
@property (nonatomic) Q ssid;
- (void)stop:;
- (id)engine;
- (id)init;
- (void)dealloc;
- (unsigned long long)ssid;
- (void).cxx_destruct;
- (void)prewarm:;
- (unsigned long long)createAudioResource:error:;
- (BOOL)createAudioPlayerAndReturnError:;
- (void)createHapticPlayer:error:;
- (id)setupDefaultEngineConfigBlock;
- (BOOL)doInit:haptic:error:;
- (id)getHapticDictionaryFromURL:;
- (BOOL)prepareHapticPatternFromPlayOptions:;
- (void)setupLooping;
- (BOOL)startPlayerAtTime:forAudio:error:;
- (void)handleFinish;
- (void)registerCompletionPortion:;
- (void)registerCompletionAndStop;
- (id)initWithAudio:haptic:error:;
- (id)initWithAudio:hapticDictionary:error:;
- (BOOL)playWithOptions:completionCallbackToken:error:;
@end
