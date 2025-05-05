@interface TRIPersistedExperimentAllocationStatus : TRIPBMessage
@property (nonatomic) TRIPersistedAllocationCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) NSInteger deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) NSString treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) NSMutableArray namespaceArray;
@property (nonatomic) Q namespaceArray_Count;
+ (id)descriptor;
@end
