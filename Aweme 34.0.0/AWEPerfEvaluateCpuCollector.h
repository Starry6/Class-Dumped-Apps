@interface AWEPerfEvaluateCpuCollector : NSObject
@property (nonatomic) BOOL needSystemCpuUsage;
@property (nonatomic) BOOL needProcCpuUsage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectFeatures;
- (id)initWithJSONConfig:;
- (id)generateCompatibleConfig;
- (BOOL)needProcCpuUsage;
- (BOOL)needSystemCpuUsage;
- (id)description;
@end
