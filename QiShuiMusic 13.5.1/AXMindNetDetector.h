@interface AXMindNetDetector : NSObject
@property (nonatomic) float overlap_threshold;
@property (nonatomic) float threshold;
@property (nonatomic) NSArray filterThreshold;
@property (nonatomic) float nmsThreshold;
- (float)threshold;
- (void).cxx_destruct;
- (id)processBoxes:withHeight:andWidth:;
- (void)setThreshold:;
- (float)nmsThreshold;
- (void)setNmsThreshold:;
- (id)initWithNetwork:nmsThreshold:filterThreshold:;
- (id)detect:;
- (float)overlap_threshold;
- (void)setOverlap_threshold:;
- (id)filterThreshold;
- (void)setFilterThreshold:;
+ (id)detectorWithModelPath:configuration:modelType:;
@end
