@interface TMMonitor : NSObject
@property (nonatomic) HMDTTMonitor monitor;
- (void)tm_trackService:metric:category:extra:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (id)defaultMonitor;
@end
