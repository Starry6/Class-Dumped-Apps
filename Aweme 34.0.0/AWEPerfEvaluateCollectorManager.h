@interface AWEPerfEvaluateCollectorManager : NSObject
@property (nonatomic) NSDictionary collectorJSONConfig;
@property (nonatomic) NSArray collectors;
- (id)collectFeatures;
- (id)initWithJSONConfig:;
- (id)buildCollectors;
- (id)collectorJSONConfig;
- (id)applogObservers;
- (void).cxx_destruct;
- (id)collectors;
@end
