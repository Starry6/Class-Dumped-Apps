@interface VCPAudioAnalyzer : NSObject
- (void)dealloc;
- (int)processSampleBuffer:;
- (void).cxx_destruct;
- (id)audioFormatRequirements;
- (int)processAudioSamples:timestamp:;
- (int)finalizeAnalysisAtTime:;
- (id)voiceDetections;
- (id)initWithAnalysisTypes:forStreaming:;
- (int)setupWithSample:andTrackDuration:;
- (int)analyzeAsset:cancel:results:;
- (int)analyzeSampleBuffer:;
@end
