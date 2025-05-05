@interface TRIRolloutFactorsState : TRIFactorsState
@property (nonatomic) TRIRolloutDeployment deployment;
- (id)deployment;
- (unsigned long long)hash;
- (id)rolloutIdentifiers;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)persisted;
- (BOOL)_isEqualToState:;
- (id)initWithDeployment:;
+ (BOOL)supportsSecureCoding;
@end
