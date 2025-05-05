@interface VCPVideoLightFaceDetector : VCPVideoFaceDetector
- (void)dealloc;
- (void).cxx_destruct;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
- (int)detectFaces:faces:;
- (float)minProcessTimeIntervalInSecs;
- (id)initWithTransform:frameStats:faceDominated:;
@end
