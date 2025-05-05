@interface PETDistributionEventTracker : PETEventTracker
@property (nonatomic) NSString event;
- (id)initWithFeatureId:event:registerProperties:;
- (id)event;
- (void)trackEventWithPropertyValues:value:;
- (void)_logValue:forEvent:stringifiedProperties:metaData:;
- (void).cxx_destruct;
- (id)initWithFeatureId:event:registerProperties:propertySubsets:;
@end
