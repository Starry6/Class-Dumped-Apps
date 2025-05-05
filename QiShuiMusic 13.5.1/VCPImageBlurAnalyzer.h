@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer
@property (nonatomic) float sharpness;
@property (nonatomic) float textureScore;
- (float)sharpness;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)analyzePixelBuffer:flags:results:cancel:;
- (float)textureScore;
- (void)setFaceResults:;
- (id)initWithFaceResults:sdof:revision:;
- (id)initWithFaceResults:sdof:;
- (void)setGyroSharpnessParam:homographyResults:livePhotoStillDisplayTime:imageExposureTime:;
- (float)getFaceScoreFromOutput:ratio:;
- (int)computeCNNFaceSharpness:result:cancel:;
- (int)computeSharpnessScore:forFacesInImage:;
- (void)spatialPooling;
- (int)computeLocalSharpness:;
- (int)prepareFaceBlurModel:;
- (int)scaleRegion:ofImage:toData:withWidth:andHeight:;
- (int)computeGyroSharpness:;
- (float)estimateDistance:prevHomography:;
- (int)analyzePixelBuffer:flags:withPreAnalysisScore:results:cancel:;
@end
