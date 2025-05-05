@interface TRIClientRollout : TRIPBMessage
@property (nonatomic) NSString rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) I deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) TRIAssignment assignment;
@property (nonatomic) BOOL hasAssignment;
@property (nonatomic) TRIShadowEvaluation shadowEvaluation;
@property (nonatomic) BOOL hasShadowEvaluation;
@property (nonatomic) NSMutableArray selectedNamespaceArray;
@property (nonatomic) Q selectedNamespaceArray_Count;
@property (nonatomic) NSString rampId;
@property (nonatomic) BOOL hasRampId;
+ (id)descriptor;
@end
