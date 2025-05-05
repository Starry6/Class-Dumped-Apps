@interface TRIRolloutDeployment : NSObject
@property (nonatomic) NSString shortDesc;
@property (nonatomic) NSString rolloutId;
@property (nonatomic) NSInteger deploymentId;
- (int)deploymentId;
- (id)init;
- (BOOL)isEqualToDeployment:;
- (id)copyWithReplacementRolloutId:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)rolloutId;
- (void)encodeWithCoder:;
- (id)copyWithReplacementDeploymentId:;
- (void).cxx_destruct;
- (id)shortDesc;
- (id)description;
- (BOOL)isEqual:;
- (id)taskTag;
- (id)initWithRolloutId:deploymentId:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)deploymentWithRolloutId:deploymentId:;
@end
