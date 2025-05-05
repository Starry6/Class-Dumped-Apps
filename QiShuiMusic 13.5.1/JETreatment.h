@interface JETreatment : NSObject
- (void).cxx_destruct;
- (id)initWithConfigDictionary:topic:;
- (id)performTreatment:;
+ (id)treatmentWithConfiguration:topic:;
@end
