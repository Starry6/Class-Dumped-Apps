@interface EARCSpeechRecognitionResultStreamGlue : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithStream:;
- (void)speechRecognizer:didRecognizePartialResult:;
- (void)speechRecognizer:didFinishRecognitionWithError:;
- (void)speechRecognizer:didRecognizeFinalResults:;
- (void)speechRecognizer:didRecognizeFinalResults:tokenSausage:nBestChoices:;
- (void)speechRecognizer:didProcessAudioDuration:;
@end
