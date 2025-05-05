@interface EspressoProfilingNetworkInfo : NSObject
@property (nonatomic) NSMutableArray layers;
@property (nonatomic) NSString network_at_path;
@property (nonatomic) EspressoProfilingNetworkANEInfo ane_performance_info;
@property (nonatomic) EspressoProfilingANEcompilerAnalytics ane_compiler_analytics;
- (id)layers;
- (void).cxx_destruct;
- (void)setLayers:;
- (id)network_at_path;
- (void)setNetwork_at_path:;
- (id)ane_performance_info;
- (void)setAne_performance_info:;
- (id)ane_compiler_analytics;
- (void)setAne_compiler_analytics:;
@end
