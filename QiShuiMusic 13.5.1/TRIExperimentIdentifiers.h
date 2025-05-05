@interface TRIExperimentIdentifiers : NSObject
@property (nonatomic) NSString experimentId;
@property (nonatomic) NSInteger deploymentId;
@property (nonatomic) NSString treatmentId;
- (id)experimentId;
- (id)treatmentId;
- (int)deploymentId;
- (BOOL)isEqualToExperimentIdentifiers:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithExperimentId:deploymentId:treatmentId:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
