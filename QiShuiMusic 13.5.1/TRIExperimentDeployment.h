@interface TRIExperimentDeployment : NSObject
@property (nonatomic) NSString experimentId;
@property (nonatomic) NSInteger deploymentId;
- (id)experimentId;
- (int)deploymentId;
- (id)init;
- (id)copyWithReplacementExperimentId:;
- (BOOL)isEqualToDeployment:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)copyWithReplacementDeploymentId:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithExperimentId:deploymentId:;
+ (BOOL)supportsSecureCoding;
+ (id)deploymentWithExperimentId:deploymentId:;
@end
