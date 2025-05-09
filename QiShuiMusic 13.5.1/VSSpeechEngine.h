@interface VSSpeechEngine : NSObject
@property (nonatomic) NSString voicePath;
@property (nonatomic) ^v synthesizer;
@property (nonatomic) VSSpeechSynthesisCallbackResult currentCallbackResult;
@property (nonatomic) NSLock synthesisLock;
@property (nonatomic) Q pcmBufferSize;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} asbd;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (nonatomic) q powerProfile;
- (void)setRate:;
- (void)setPitch:;
- (float)volume;
- (void)dealloc;
- (id)voicePath;
- (void)setVolume:;
- (float)rate;
- (float)pitch;
- (void)preheat;
- (void)setVoicePath:;
- (void).cxx_destruct;
- (void)setPowerProfile:;
- (long long)powerProfile;
- (void)unloadResource:;
- (id)asbd;
- (id)synthesizer;
- (void)setSynthesizer:;
- (id)initWithVoicePath:resourcePath:;
- (BOOL)initializeWithResourcePath:;
- (id)loadResourceAtPath:mimeType:error:;
- (id)loadResource:error:;
- (id)synthesizeText:loggable:callback:;
- (void)stopAtMarker:;
- (unsigned long long)pcmBufferSize;
- (void)setPcmBufferSize:;
- (id)currentCallbackResult;
- (void)setCurrentCallbackResult:;
- (id)synthesisLock;
- (void)setSynthesisLock:;
+ (long long)engineCurrentCompatibility;
+ (BOOL)hasPhaticResponses:;
+ (long long)engineMinimumCompatibility;
+ (BOOL)isUserCancelError:;
+ (id)mimeForFileExtension:;
@end
