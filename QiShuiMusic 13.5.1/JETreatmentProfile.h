@interface JETreatmentProfile : NSObject
- (void).cxx_destruct;
- (id)initWithConfigDictionary:topic:;
- (id)performTreatments:;
+ (id)treatmentProfileWithConfiguration:;
+ (id)treatmentProfileWithConfiguration:topic:;
@end
