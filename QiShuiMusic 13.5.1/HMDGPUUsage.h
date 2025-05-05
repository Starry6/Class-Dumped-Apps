@interface HMDGPUUsage : NSObject
@property (nonatomic) NSDictionary _utilizationInfo;
- (id)_utilizationInfo;
- (void)set_utilizationInfo:;
- (void).cxx_destruct;
+ (id)utilizeDictionaryWithErrorType:;
+ (double)gpuUsage;
+ (double)gpuUsageWithError:;
@end
