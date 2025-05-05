@interface VCPVoiceDetectorV2 : VCPVoiceDetector
- (id)init;
- (void)dealloc;
- (id)results;
- (int)loadModel;
- (int)setupWithAudioStream:;
- (int)processAudioSamples:timestamp:;
- (int)finalizeAnalysisAtTime:;
@end
