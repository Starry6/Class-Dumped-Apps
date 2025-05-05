@interface AXShotflowNetwork : NSObject
@property (nonatomic) Q preferredSmallSide;
@property (nonatomic) float threshold;
@property (nonatomic) NSInteger version;
@property (nonatomic) q modelType;
- (float)threshold;
- (long long)modelType;
- (void)setModelType:;
- (void)dealloc;
- (void)setVersion:;
- (id)processVImage:inputIsBGR:;
- (int)version;
- (id)resizeAndProcessVImage:inputIsBGR:;
- (int)setInputShape:height:;
- (void).cxx_destruct;
- (void)runNetwork:inputIsBGR:;
- (unsigned long long)preferredSmallSide;
- (id).cxx_construct;
- (void)setThreshold:;
- (id)processCIImage:;
- (id)initWithModelPath:espressoEngineID:espressoDeviceID:configuration:version:modelType:;
+ (id)cpuNetworkWithModelPath:configuration:version:modelType:;
+ (id)gpuNetworkWithModelPath:configuration:preferredMetalDeviceID:version:modelType:;
@end
