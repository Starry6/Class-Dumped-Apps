@interface AWEShowPerformanceGetterImpl : NSObject
@property (nonatomic) NSNumber cpuUsage;
@property (nonatomic) NSNumber memoryUsage;
@property (nonatomic) NSNumber gpuUsage;
@property (nonatomic) NSNumber bitrate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)gpuUsage;
- (id)currentPerformanceParams;
- (id)currentPerformanceParamsWithShowPerformanceGetter:;
- (BOOL)performanceEnable;
- (void)setGpuUsage:;
- (id)memoryUsage;
- (id)cpuUsage;
- (void)setCpuUsage:;
- (void).cxx_destruct;
- (void)setMemoryUsage:;
- (id)bitrate;
- (void)setBitrate:;
@end
