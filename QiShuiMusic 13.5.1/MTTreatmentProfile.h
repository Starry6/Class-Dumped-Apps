@interface MTTreatmentProfile : NSObject
@property (nonatomic) NSArray treatments;
- (id)initWithConfigDictionary:;
- (id)treatments;
- (void).cxx_destruct;
- (void)setTreatments:;
- (id)performTreatments:;
+ (id)treatmentProfileWithConfigData:;
@end
