@interface VCPVoiceDetector : NSObject
@property (nonatomic) NSMutableArray voiceDetections;
- (id)init;
- (id)results;
- (void).cxx_destruct;
- (int)loadModel;
- (id)audioFormatRequirements;
- (void)addDetectionFromTime:toTime:result:;
- (int)setupWithSample:andSampleBatchSize:;
- (int)setupWithAudioStream:;
- (int)processAudioSamples:timestamp:;
- (int)finalizeAnalysisAtTime:;
- (id)voiceDetections;
- (void)setVoiceDetections:;
+ (id)detector;
@end
