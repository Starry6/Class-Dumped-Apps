@interface WebSpeechRecognizerTaskMock : WebSpeechRecognizerTask
- (void)abort;
- (void)stop;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithIdentifier:locale:doMultipleRecognitions:reportInterimResults:maxAlternatives:delegateCallback:;
- (void)audioSamplesAvailable:;
@end
