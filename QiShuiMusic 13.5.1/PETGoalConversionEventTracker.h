@interface PETGoalConversionEventTracker : PETEventTracker
@property (nonatomic) NSString opportunityEvent;
@property (nonatomic) NSString conversionEvent;
- (id)_keyMetadataForEvent:;
- (id)initWithFeatureId:opportunityEvent:conversionEvent:registerProperties:;
- (void)_logValue:forEvent:stringifiedProperties:metaData:;
- (id)opportunityEvent;
- (void)trackGoalOpportunityEventWithConversion:propertyValues:;
- (void).cxx_destruct;
- (void)trackGoalOpportunityEventWithPropertyValues:;
- (id)initWithFeatureId:opportunityEvent:conversionEvent:registerProperties:propertySubsets:;
- (id)conversionEvent;
- (void)trackGoalConversionEventWithPropertyValues:;
@end
