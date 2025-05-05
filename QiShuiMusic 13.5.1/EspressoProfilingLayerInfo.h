@interface EspressoProfilingLayerInfo : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString debug_name;
@property (nonatomic) NSInteger selected_runtime_engine;
@property (nonatomic) EspressoProfilingLayerSupportInfo main_engine_support;
@property (nonatomic) NSDictionary per_platform_support;
@property (nonatomic) NSArray runtimes;
@property (nonatomic) double average_runtime;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)debug_name;
- (void)setDebug_name:;
- (int)selected_runtime_engine;
- (void)setSelected_runtime_engine:;
- (id)main_engine_support;
- (void)setMain_engine_support:;
- (id)per_platform_support;
- (void)setPer_platform_support:;
- (id)runtimes;
- (void)setRuntimes:;
- (double)average_runtime;
- (void)setAverage_runtime:;
@end
