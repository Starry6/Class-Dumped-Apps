@interface VCPPhotoAnalyzer : NSObject
@property (nonatomic) BOOL allowStreaming;
@property (nonatomic) q status;
- (void).cxx_destruct;
- (long long)status;
- (id).cxx_construct;
- (id)initWithVCPAsset:withExistingAnalysis:forAnalysisTypes:;
- (id)initWithPHAsset:withExistingAnalysis:forAnalysisTypes:;
- (BOOL)allowStreaming;
- (void)setAllowStreaming:;
- (void)processExistingAnalyses:;
- (id)existingAnalysisForMovieAnalyzer;
- (void)updateDegradedFlagForMajorDimension:;
- (int)downscaleImage:scaledImage:majorDimension:;
- (int)checkFaceDominant;
- (void)_reportPetsAnalysisWithResults:;
- (int)analyzeImage:performedAnalyses:cancel:;
- (id)analyzeAsset:withOptions:;
+ (BOOL)isLivePhotoKeyFrameEnabled;
+ (BOOL)canAnalyzeUndegraded:withResources:;
+ (id)resourceForAsset:withResources:;
+ (id)analyzerWithVCPAsset:forAnalysisTypes:;
@end
