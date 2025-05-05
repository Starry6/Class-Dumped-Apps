@interface WebSpeechSynthesisWrapper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)resetState;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (id).cxx_construct;
- (void)speakUtterance:;
- (void)speechSynthesizer:didStartSpeechUtterance:;
- (void)speechSynthesizer:didFinishSpeechUtterance:;
- (void)speechSynthesizer:didPauseSpeechUtterance:;
- (void)speechSynthesizer:didContinueSpeechUtterance:;
- (void)speechSynthesizer:didCancelSpeechUtterance:;
- (void)speechSynthesizer:willSpeakRangeOfSpeechString:utterance:;
- (id)initWithSpeechSynthesizer:;
- (float)mapSpeechRateToPlatformRate:;
@end
