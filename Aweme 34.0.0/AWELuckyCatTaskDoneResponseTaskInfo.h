@interface AWELuckyCatTaskDoneResponseTaskInfo : AWEBaseApiModel
@property (nonatomic) q taskId;
@property (nonatomic) q amount;
@property (nonatomic) q taskDoneStatus;
@property (nonatomic) NSString taskKey;
@property (nonatomic) NSString taskName;
- (id)taskKey;
- (void)setTaskKey:;
- (long long)taskDoneStatus;
- (void)setTaskDoneStatus:;
- (void)setTaskName:;
- (id)taskName;
- (void).cxx_destruct;
- (long long)taskId;
- (long long)amount;
- (void)setAmount:;
- (void)setTaskId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
