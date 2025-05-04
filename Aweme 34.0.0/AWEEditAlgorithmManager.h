@interface AWEEditAlgorithmManager : NSObject
@property (nonatomic) VEAlgorithmSession algorithmSession;
@property (nonatomic) BOOL algorithmRunning;
- (id)algorithmSession;
- (void)setAlgorithmSession:;
- (BOOL)useBachToRecommend;
- (BOOL)algorithmRunning;
- (void)setAlgorithmRunning:;
- (unsigned long long)recommendStrategy;
- (void)runAlgorithmOfType:withImagePaths:completion:;
- (BOOL)shouldUploadFramesForRecommendation;
- (BOOL)shouldExtractFrames;
- (void)runAlgorithmOfType:imagePaths:resultList:currentIndex:completion:;
- (void)chekAndDownloadAlgorithmModelWithCompletion:;
- (id)generateResultWithList:;
- (unsigned long long)veAlgorithmTypeFromACCAlgorithmType:;
- (id)modelNames;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
