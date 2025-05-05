@interface MTTreatment : NSObject
@property (nonatomic) MTMetricsDataPredicate predicate;
@property (nonatomic) MTTreatmentAction eventAction;
@property (nonatomic) NSDictionary fieldActions;
- (id)initWithConfigDictionary:;
- (id)predicate;
- (void)setPredicate:;
- (void).cxx_destruct;
- (id)performTreatment:;
- (id)eventAction;
- (void)setEventAction:;
- (id)fieldActions;
- (void)setFieldActions:;
+ (id)treatmentWithConfigData:;
@end
