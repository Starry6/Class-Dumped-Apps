@interface SiriTTSService.WeakDaemonDelegateWrapper : _TtCs12_SwiftObject
- (void)pingWithReply:;
- (void)didStartSpeakingWithRequestId:;
- (void)didReportInstrumentWithRequestId:instrumentationMetrics:;
- (void)didGenerateAudioWithRequestId:audio:;
- (void)didGenerateWordTimingsWithRequestId:wordTimingInfo:;
@end
