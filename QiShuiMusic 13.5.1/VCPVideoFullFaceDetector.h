@interface VCPVideoFullFaceDetector : VCPVideoFaceDetector
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTransform:;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
- (id)faceRanges;
- (id)initWithTransform:withExistingFaceprints:frameStats:;
- (int)detectFaces:faces:;
- (float)minProcessTimeIntervalInSecs;
- (void)removeSmallestKeyFace;
- (BOOL)compareFace:withFace:;
- (BOOL)locationChange:relativeTo:landscape:;
- (int)detectTrackFacesInFrame:withTimestamp:faces:;
- (id)frameFaceResults;
- (int)clusterFaces;
- (int)updateWithExistingFaces;
@end
