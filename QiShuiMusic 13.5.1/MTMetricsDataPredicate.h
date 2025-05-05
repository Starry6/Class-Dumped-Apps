@interface MTMetricsDataPredicate : NSObject
@property (nonatomic) NSDictionary fieldPredicates;
- (id)initWithConfigDictionary:;
- (id)initWithFormat:;
- (void).cxx_destruct;
- (BOOL)evaluateWithMetricsData:;
- (id)fieldPredicates;
- (void)setFieldPredicates:;
+ (id)predicateWithType:argument:;
+ (id)predicateWithConfigData:;
@end
