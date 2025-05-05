@interface TRIExperimentAllocationStatus : TRIAllocationStatus
@property (nonatomic) NSString experimentId;
@property (nonatomic) NSInteger deploymentId;
@property (nonatomic) NSString treatmentId;
@property (nonatomic) NSArray namespaces;
- (BOOL)isEqualToStatus:;
- (id)experimentId;
- (id)treatmentId;
- (int)deploymentId;
- (id)namespaces;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithType:date:experimentId:deploymentId:treatmentId:;
- (void).cxx_destruct;
- (id)initWithType:date:experimentId:deploymentId:treatmentId:namespaces:;
@end
