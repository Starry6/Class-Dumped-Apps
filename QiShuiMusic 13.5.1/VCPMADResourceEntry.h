@interface VCPMADResourceEntry : NSObject
@property (nonatomic) VCPMADResource resource;
@property (nonatomic) q activeCount;
@property (nonatomic) q currentCost;
- (long long)currentCost;
- (long long)activeCount;
- (void)setActiveCount:;
- (void)setResource:;
- (void).cxx_destruct;
- (id)initWithResource:;
- (id)resource;
- (void)setCurrentCost:;
@end
