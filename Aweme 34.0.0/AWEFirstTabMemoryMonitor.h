@interface AWEFirstTabMemoryMonitor : NSObject
@property (nonatomic) q memoryCost;
- (long long)diffCostFromMemoryMonitor:;
- (long long)memoryCost;
- (void)setMemoryCost:;
+ (id)currentMonitor;
@end
