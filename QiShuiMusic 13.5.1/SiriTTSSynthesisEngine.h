@interface SiriTTSSynthesisEngine : NSObject
@property (nonatomic) ^v synthesizer;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} asbd;
@property (nonatomic) NSString voicePath;
@property (nonatomic) NSString resourcePath;
@property (nonatomic) NSString tag;
- (id)tag;
- (void)dealloc;
- (id)voicePath;
- (void)setTag:;
- (void).cxx_destruct;
- (id)resourcePath;
- (id)initWithVoicePath:resourcePath:error:;
- (BOOL)loadResourceWithPath:error:;
- (void)unloadResource:;
- (BOOL)synthesize:error:;
- (void)stopSynthesis;
- (BOOL)preheatWithError:;
- (id)asbd;
- (void)setAsbd:;
- (id)synthesizer;
- (void)setSynthesizer:;
+ (BOOL)hasPhaticResponsesWithVoicePath:;
@end
