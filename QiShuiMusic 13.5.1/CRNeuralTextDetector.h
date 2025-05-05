@interface CRNeuralTextDetector : NSObject
@property (nonatomic) BOOL shouldCancel;
@property (nonatomic) CRDetectorConfiguration configuration;
@property (nonatomic) CRPerformanceStatistics detectorStats;
@property (nonatomic) CRPerformanceStatistics postProcStats;
@property (nonatomic) CRPerformanceStatistics inferenceStats;
- (id)init;
- (void)cancel;
- (BOOL)shouldCancel;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (BOOL)preheatWithError:;
- (id)smallestImageSizeForTextWithRelativeHeight:originalImageSize:;
- (void)setShouldCancel:;
- (id)detectInImage:error:;
- (id)inferenceStats;
- (void)setInferenceStats:;
- (id)detectorStats;
- (id)postProcStats;
- (id)enumerateTilesForImage:block:;
- (void)setDetectorStats:;
- (void)setPostProcStats:;
+ (id)detectorForRevision:imageReaderOptions:error:;
+ (id)scaledImageSizeForOptions:imageSize:;
+ (id)textFeaturesFromPolygons:withScale:;
@end
