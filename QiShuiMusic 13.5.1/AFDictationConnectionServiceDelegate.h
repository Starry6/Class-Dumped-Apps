@interface AFDictationConnectionServiceDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:;
- (id)speechRecordingDidBeginWithOptions:sessionUUID:sessionRequestUUID:;
- (id)speechDidBeginLocalRecognitionWithModelInfo:;
- (id)speechRecordingDidEnd;
- (id)speechRecordingDidCancel;
- (id)speechRecordingDidFail:;
- (id)speechDidRecognizePhrases:utterances:nluResult:usingSpeechModel:correctionContext:audioAnalytics:;
- (id)speechDidRecognizePartialResult:;
- (id)speechDidRecognizeTokens:nluResult:usingSpeechModel:;
- (id)speechDidProcessAudioDuration:;
- (id)speechDidRecognizeTranscriptionObjects:usingSpeechModel:;
- (id)speechRecognitionDidFinishWithError:;
- (id)speechDidFinishWritingAudioFile:error:;
- (id)speechDidReceiveSearchResults:recognitionText:stable:final:;
- (id)speechDidRecognizePackage:;
- (id)speechDidDetectLanguage:confidenceScores:isConfident:;
- (id)speechDidRecognizeMultilingualSpeech:;
- (id)languageDetectorFailedWithError:;
- (id)speechDidRecognizeFinalResultCandidatePackage:;
- (id)speechDidPauseRecognition;
- (id)initWithDictationConnection:;
@end
