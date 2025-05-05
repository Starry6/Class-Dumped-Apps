@interface SiriTTSDaemonSession : NSObject
@property (nonatomic) BOOL keepActive;
- (void)pingWithReply:;
- (void)didStartSpeakingWithRequestId:;
- (void)didReportInstrumentWithRequestId:instrumentationMetrics:;
- (void)didGenerateAudioWithRequestId:audio:;
- (void)didGenerateWordTimingsWithRequestId:wordTimingInfo:;
- (id)init;
- (void)dealloc;
- (BOOL)keepActive;
- (void)setKeepActive:;
- (void).cxx_destruct;
- (void)cancelWithRequest:;
- (void)signalWithInlineStreaming:;
- (void)forwardWithStreamObject:;
- (id)initWithAccessoryId:;
- (void)prewarmWithRequest:didFinish:;
- (void)synthesizeWithRequest:didFinish:;
- (void)speakWithSpeechRequest:didFinish:;
- (void)speakWithAudioRequest:didFinish:;
- (void)isSpeaking:;
- (void)getAudioPower:;
- (void)estimateDurationWithSynthesisRequest:didFinish:;
- (void)textToPhonemeWithRequest:didFinish:;
@end
