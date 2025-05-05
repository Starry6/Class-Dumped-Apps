@interface VCPAudioClassifier : NSObject
- (id)initWithTypes:;
- (id)results;
- (void).cxx_destruct;
- (int)processAudioSamples:timestamp:;
- (int)finalizeAnalysisAtTime:;
- (int)setupWithSample:trackDuration:andSampleBatchSize:;
@end
