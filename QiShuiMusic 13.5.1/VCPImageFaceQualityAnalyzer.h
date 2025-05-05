@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer
@property (nonatomic) NSMutableArray faceQualityScores;
- (void)dealloc;
- (void).cxx_destruct;
- (id)faceQualityScores;
- (void)setFaceQualityScores:;
- (int)analyzeDetectedFaces:faceResults:cancel:;
@end
