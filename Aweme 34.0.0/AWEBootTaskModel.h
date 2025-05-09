@interface AWEBootTaskModel : MTLModel
@property (nonatomic) BOOL enableDispatch;
@property (nonatomic) double startInterval;
@property (nonatomic) double stopInterval;
@property (nonatomic) double maxWaitingInterval;
@property (nonatomic) double sparseDelayTime;
@property (nonatomic) double feedReadyInterval;
@property (nonatomic) double sparseInterval;
@property (nonatomic) double idleInterval;
@property (nonatomic) NSArray bannedTasks;
@property (nonatomic) NSArray immediatelyTasks;
@property (nonatomic) NSArray feedReadyTasks;
@property (nonatomic) NSArray sparseTasks;
@property (nonatomic) NSArray idleTasks;
@property (nonatomic) NSArray allowAfterFeedReadyTasks;
@property (nonatomic) NSArray timeValidConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnableDispatch:;
- (void)setStartInterval:;
- (void)setStopInterval:;
- (void)setMaxWaitingInterval:;
- (void)setFeedReadyInterval:;
- (void)setSparseInterval:;
- (void)setIdleInterval:;
- (void)setSparseDelayTime:;
- (void)setBannedTasks:;
- (void)setImmediatelyTasks:;
- (void)setFeedReadyTasks:;
- (void)setSparseTasks:;
- (void)setIdleTasks:;
- (void)setAllowAfterFeedReadyTasks:;
- (BOOL)enableDispatch;
- (double)startInterval;
- (double)stopInterval;
- (double)maxWaitingInterval;
- (double)sparseDelayTime;
- (double)feedReadyInterval;
- (double)sparseInterval;
- (double)idleInterval;
- (id)bannedTasks;
- (id)immediatelyTasks;
- (id)feedReadyTasks;
- (id)sparseTasks;
- (id)idleTasks;
- (id)allowAfterFeedReadyTasks;
- (id)timeValidConfigs;
- (void)setTimeValidConfigs:;
- (id)init;
- (void).cxx_destruct;
+ (id)timeValidConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
