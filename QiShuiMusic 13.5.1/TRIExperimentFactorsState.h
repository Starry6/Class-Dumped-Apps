@interface TRIExperimentFactorsState : TRIFactorsState
@property (nonatomic) TRIExperimentDeployment deployment;
@property (nonatomic) NSString treatmentId;
- (id)deployment;
- (id)treatmentId;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)experimentIdentifiers;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)persisted;
- (id)initWithDeployment:treatmentId:;
- (BOOL)_isEqualToState:;
+ (BOOL)supportsSecureCoding;
@end
