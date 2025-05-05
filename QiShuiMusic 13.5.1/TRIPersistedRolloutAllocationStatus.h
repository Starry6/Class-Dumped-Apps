@interface TRIPersistedRolloutAllocationStatus : TRIPBMessage
@property (nonatomic) NSString rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) NSInteger deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) NSMutableArray namespaceFactorPackArray;
@property (nonatomic) Q namespaceFactorPackArray_Count;
@property (nonatomic) NSString rampId;
@property (nonatomic) BOOL hasRampId;
+ (id)descriptor;
@end
