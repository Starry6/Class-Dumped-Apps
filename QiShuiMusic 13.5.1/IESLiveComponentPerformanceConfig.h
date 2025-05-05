@interface IESLiveComponentPerformanceConfig : MTLModel
@property (nonatomic) NSNumber minCpu;
@property (nonatomic) NSNumber maxCpu;
@property (nonatomic) NSNumber minMemory;
@property (nonatomic) NSNumber maxMemory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)maxCpu;
- (id)maxMemory;
- (id)minCpu;
- (id)minMemory;
- (void)setMaxCpu:;
- (void)setMaxMemory:;
- (void)setMinCpu:;
- (void)setMinMemory:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
