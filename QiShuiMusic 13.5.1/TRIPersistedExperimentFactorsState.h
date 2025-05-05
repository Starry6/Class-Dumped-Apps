@interface TRIPersistedExperimentFactorsState : TRIPBMessage
@property (nonatomic) NSString experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) NSInteger deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) NSString treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
+ (id)descriptor;
@end
