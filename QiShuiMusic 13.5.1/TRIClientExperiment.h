@interface TRIClientExperiment : TRIPBMessage
@property (nonatomic) NSString experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) NSInteger projectId;
@property (nonatomic) BOOL hasProjectId;
@property (nonatomic) TRIPBTimestamp startDate;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) TRIPBTimestamp endDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) TRIAssignment assignment;
@property (nonatomic) BOOL hasAssignment;
@property (nonatomic) I seed;
@property (nonatomic) BOOL hasSeed;
@property (nonatomic) I deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) NSString projectName;
@property (nonatomic) BOOL hasProjectName;
@property (nonatomic) TRIShadowEvaluation shadowEvaluation;
@property (nonatomic) BOOL hasShadowEvaluation;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger priority;
@property (nonatomic) BOOL hasPriority;
+ (id)descriptor;
@end
