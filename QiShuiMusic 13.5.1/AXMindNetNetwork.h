@interface AXMindNetNetwork : NSObject
@property (nonatomic) Q preferredSmallSide;
@property (nonatomic) float threshold;
@property (nonatomic) NSInteger version;
@property (nonatomic) float nmsThreshold;
@property (nonatomic) NSArray filterThresholds;
- (float)threshold;
- (void)setVersion:;
- (id)processVImage:inputIsBGR:;
- (int)version;
- (id)resizeAndProcessVImage:inputIsBGR:;
- (id)filterThresholds;
- (void).cxx_destruct;
- (unsigned long long)preferredSmallSide;
- (id).cxx_construct;
- (void)setThreshold:;
- (float)nmsThreshold;
- (void)setNmsThreshold:;
- (id)initWithModelPath:configuration:modelType:;
- (id)processCIImage:;
+ (id)networkWithModelPath:configuration:modelType:;
@end
