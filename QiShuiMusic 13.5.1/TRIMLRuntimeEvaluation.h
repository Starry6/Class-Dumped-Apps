@interface TRIMLRuntimeEvaluation : TRIPBMessage
@property (nonatomic) NSString pluginId;
@property (nonatomic) BOOL hasPluginId;
@property (nonatomic) TRIMLRuntimeSchedulingPolicy schedulingPolicy;
@property (nonatomic) BOOL hasSchedulingPolicy;
@property (nonatomic) NSString evaluationId;
@property (nonatomic) BOOL hasEvaluationId;
@property (nonatomic) NSInteger pluginProjectId;
@property (nonatomic) BOOL hasPluginProjectId;
+ (id)descriptor;
@end
