@interface WebSpeechRecognizerTaskImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)abort;
- (void)stop;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)speechRecognitionTask:didHypothesizeTranscription:;
- (void)speechRecognitionTask:didFinishRecognition:;
- (void)speechRecognitionTaskWasCancelled:;
- (void)speechRecognitionTask:didFinishSuccessfully:;
- (void)speechRecognizer:availabilityDidChange:;
- (id)initWithIdentifier:locale:doMultipleRecognitions:reportInterimResults:maxAlternatives:delegateCallback:;
- (void)callbackWithTranscriptions:isFinal:;
- (void)audioSamplesAvailable:;
- (void)sendSpeechStartIfNeeded;
- (void)sendSpeechEndIfNeeded;
- (void)sendEndIfNeeded;
@end
