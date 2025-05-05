@interface VCPLoudnessAnalyzer : NSObject
- (id)init;
- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)setupWithSample:andSampleBatchSize:;
- (int)processAudioSamples:timestamp:;
- (int)finalizeAnalysisAtTime:;
@end
