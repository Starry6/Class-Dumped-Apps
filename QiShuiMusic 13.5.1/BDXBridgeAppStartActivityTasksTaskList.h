@interface BDXBridgeAppStartActivityTasksTaskList : BDXBridgeModel
@property (nonatomic) NSString activity_id;
@property (nonatomic) NSString task_id;
@property (nonatomic) NSString task_type;
@property (nonatomic) BDXBridgeAppStartActivityTasksConfig config;
- (id)task_id;
- (void)setActivity_id:;
- (id)activity_id;
- (void)setTask_id:;
- (void)setTask_type:;
- (id)task_type;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
