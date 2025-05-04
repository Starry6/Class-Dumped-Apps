@interface AWEHPLandingBlockTaskManager : NSObject
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) NSMutableArray blockTaskList;
- (BOOL)hasSetup;
- (void)setHasSetup:;
- (void)trySetup;
- (id)blockTaskList;
- (void)p_loopTaskList:index:context:completion:;
- (id)aAWELaunchLandingBlockTaskManagerDOUYINLiteAdapter;
- (void)executeBlockTasksWithContext:completion:;
- (void)setBlockTaskList:;
- (void)setup;
- (void).cxx_destruct;
- (void)registerTask:;
+ (Class)aAWELaunchLandingBlockTaskManagerDOUYINLiteAdapterClass;
+ (id)sharedInstance;
@end
