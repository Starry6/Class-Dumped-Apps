@interface JEMetricsDataPredicate : NSObject
- (id)initWithConfigDictionary:;
- (id)initWithFormat:;
- (void).cxx_destruct;
- (BOOL)evaluateWithMetricsData:;
+ (id)predicateWithType:argument:;
+ (id)predicateWithConfiguration:;
@end
