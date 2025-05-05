@interface TRIFactorsStateExperimentIdentifiers : NSObject
@property (nonatomic) NSString experimentId;
@property (nonatomic) NSInteger deploymentId;
@property (nonatomic) NSString treatmentId;
- (id)experimentId;
- (id)treatmentId;
- (int)deploymentId;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithExperimentId:deploymentId:treatmentId:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithExperimentId:deploymentId:;
- (BOOL)isEqualToIdentifiers:;
@end
