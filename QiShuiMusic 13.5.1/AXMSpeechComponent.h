@interface AXMSpeechComponent : AXMOutputComponent
@property (nonatomic) AVSpeechSynthesizer synthesizer;
@property (nonatomic) @? currentRequestCompletionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)canHandleRequest:;
- (void).cxx_destruct;
- (void)handleRequest:completion:;
- (void)speechSynthesizer:didStartSpeechUtterance:;
- (void)speechSynthesizer:didFinishSpeechUtterance:;
- (void)speechSynthesizer:didPauseSpeechUtterance:;
- (void)speechSynthesizer:didContinueSpeechUtterance:;
- (void)speechSynthesizer:didCancelSpeechUtterance:;
- (id)synthesizer;
- (void)setSynthesizer:;
- (void)stopSpeakingImmediately;
- (void)stopSpeakingAtNextWord;
- (id)currentRequestCompletionBlock;
- (void)setCurrentRequestCompletionBlock:;
+ (BOOL)isSupported;
@end
