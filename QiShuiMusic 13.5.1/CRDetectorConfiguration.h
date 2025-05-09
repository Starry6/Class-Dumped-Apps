@interface CRDetectorConfiguration : NSObject
@property (nonatomic) BOOL cpuOnly;
@property (nonatomic) BOOL logIntermediateResults;
@property (nonatomic) NSURL customModelURL;
@property (nonatomic) BOOL disableScriptDetection;
@property (nonatomic) BOOL runFullTile;
@property (nonatomic) BOOL runFineScale;
@property (nonatomic) BOOL mergeFullTile;
@property (nonatomic) BOOL useScaleTraversal;
@property (nonatomic) BOOL extractPolygons;
@property (nonatomic) {CGSize=dd} tileSize;
@property (nonatomic) double tileOverlap;
@property (nonatomic) NSString prioritization;
@property (nonatomic) {CGSize=dd} minimumInputSize;
@property (nonatomic) {CGSize=dd} maximumInputSize;
@property (nonatomic) double inputLengthLimit;
@property (nonatomic) NSObject<MTLDevice> metalDevice;
@property (nonatomic) NSDictionary scriptRatioThresholds;
@property (nonatomic) double scoreMapScaleFactor;
@property (nonatomic) NSInteger mergingType;
- (id)tileSize;
- (id)prioritization;
- (id)metalDevice;
- (void).cxx_destruct;
- (double)tileOverlap;
- (id)initWithImageReaderOptions:error:;
- (id)initV1DefaultConfig;
- (id)initV2DefaultConfig;
- (id)initV3DefaultConfig;
- (BOOL)cpuOnly;
- (BOOL)logIntermediateResults;
- (id)customModelURL;
- (BOOL)disableScriptDetection;
- (BOOL)runFullTile;
- (void)setRunFullTile:;
- (BOOL)runFineScale;
- (void)setRunFineScale:;
- (BOOL)mergeFullTile;
- (void)setMergeFullTile:;
- (BOOL)useScaleTraversal;
- (void)setUseScaleTraversal:;
- (BOOL)extractPolygons;
- (void)setExtractPolygons:;
- (id)minimumInputSize;
- (id)maximumInputSize;
- (double)inputLengthLimit;
- (id)scriptRatioThresholds;
- (double)scoreMapScaleFactor;
- (int)mergingType;
- (void)setMergingType:;
@end
