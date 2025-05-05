@interface VCPSongDetector : NSObject
- (id)init;
- (id)results;
- (void).cxx_destruct;
- (int)setupWithSample:andSampleBatchSize:;
- (int)processAudioSamples:timestamp:;
- (int)finalizeAnalysisAtTime:;
@end
