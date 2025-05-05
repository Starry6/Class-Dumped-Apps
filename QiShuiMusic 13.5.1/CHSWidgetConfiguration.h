@interface CHSWidgetConfiguration : NSObject
@property (nonatomic) NSArray containerDescriptors;
@property (nonatomic) CHSWidgetMetricsSpecification metricsSpecification;
- (id)containerDescriptors;
- (id)init;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (id)initWithContainerDescriptors:metricsSpecification:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)mutableCopyWithZone:;
- (id)metricsSpecification;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
