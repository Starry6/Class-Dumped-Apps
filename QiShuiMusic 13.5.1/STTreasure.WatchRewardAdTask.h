@interface STTreasure.WatchRewardAdTask : NSObject
@property (nonatomic) <BDUGLuckyActivityTaskStatusDelegate> statusDelegate;
@property (nonatomic) BDUGLuckyActivityTaskModel taskModel;
- (void)executeWithJumpResult:openTaskCallback:;
- (void)pauseTask;
- (void)resumeTask;
- (void)setTaskModel:;
- (id)taskModel;
- (id)init;
- (id)initWithModel:;
- (void)stop;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setStatusDelegate:;
- (id)statusDelegate;
+ (BOOL)stopOldWhenGlobalTaskIdConflict;
+ (id)taskType;
+ (BOOL)isUnique;
@end
