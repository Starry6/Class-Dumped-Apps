@interface VCPCNNEspressoContext : NSObject
@property (nonatomic) ^v espressoContext;
- (void)dealloc;
- (id)espressoContext;
- (id)initWithForceCPU:forceNNGraph:shared:;
+ (BOOL)supportGPU;
+ (id)createContextWithForceCPU;
+ (id)createContextWithMPSGraph;
+ (id)createContextPreferred;
+ (id)sharedContextWithForceCPU:;
+ (id)sharedContextWithMPSGraph:;
+ (id)sharedContextPreferred:;
@end
