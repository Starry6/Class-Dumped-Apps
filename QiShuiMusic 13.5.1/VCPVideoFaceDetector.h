@interface VCPVideoFaceDetector : VCPVideoAnalyzer
- (id)results;
- (void).cxx_destruct;
- (id)faceRanges;
+ (id)faceDetectorWithTransform:withExistingFaceprints:frameStats:tracking:faceDominated:cancel:;
@end
