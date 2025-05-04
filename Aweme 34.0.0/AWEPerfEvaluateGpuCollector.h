@interface AWEPerfEvaluateGpuCollector : NSObject
@property (nonatomic) BOOL needGpuUsage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectFeatures;
- (id)initWithJSONConfig:;
- (BOOL)needGpuUsage;
- (void)setNeedGpuUsage:;
- (id)description;
@end
