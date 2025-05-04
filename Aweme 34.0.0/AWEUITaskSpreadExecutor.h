@interface AWEUITaskSpreadExecutor : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString groupID;
- (id)invokeBlock:afterDelay:;
- (void)flushTask:;
- (id)invokeBlock:afterDelay:finishBlock:;
- (id)invokeBlock:afterDelay:finishBlock:untilTime:;
- (BOOL)isExistWithTaskID:;
- (id)invokeBlock:finishBlock:;
- (void)flushAll;
- (BOOL)didFinished;
- (id)invokeBlock:;
- (BOOL)cancelTask:;
- (id)groupID;
- (void)setEnabled:;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)initWithGroupID:;
- (BOOL)cancelAll;
+ (void)setRunningLimit:;
+ (double)runningLimit;
+ (BOOL)suspended;
+ (void)setSuspended:;
+ (id)sharedInstance;
+ (void)endImmediately;
@end
