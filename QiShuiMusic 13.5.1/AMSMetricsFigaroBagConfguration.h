@interface AMSMetricsFigaroBagConfguration : NSObject
@property (nonatomic) NSDictionary metricsDictionary;
@property (nonatomic) NSArray overrides;
@property (nonatomic) AMSMetricsFigaroEventModifier defaultModifier;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)metricsDictionary;
- (id)overrides;
- (id)initWithMetricsDictionary:;
- (void).cxx_destruct;
- (id)_generateModifiersIfNeeded;
- (id)defaultModifier;
- (void)prepareForFlush;
- (id)queue;
- (id)modifierForEvent:;
+ (id)configurationWithBag:error:;
@end
