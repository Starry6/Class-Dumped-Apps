@interface CHSWidgetMetricsSpecification : NSObject
@property (nonatomic) NSDictionary metricsByFamily;
@property (nonatomic) NSDictionary alternatesByFamily;
@property (nonatomic) Q families;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_initWithMetricsByFamily:alternates:;
- (id)initWithMetricsSpecification:;
- (unsigned long long)families;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (id)alternateMetricsForFamily:;
- (void)encodeWithCoder:;
- (id)metricsByFamily;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)metricsForFamily:;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)alternatesByFamily;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
