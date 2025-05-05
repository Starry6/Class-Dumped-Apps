@interface FBgoose : NSObject
@property (nonatomic) NSMutableDictionary moduleTaskMapper;
@property (nonatomic) HTSDGorilla moduleListTask;
@property (nonatomic) NSArray moduleTasks;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) NSError error;
@property (nonatomic) NSMutableArray retryTasks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bd_automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers:bd_shouldAutomaticallyForwardRotationMethods:;
- (void)bd_willMoveToParentViewController:;
- (id)moduleListTask;
- (id)moduleTaskMapper;
- (id)moduleTasks;
- (id)retryTasks;
- (void)setModuleListTask:;
- (void)setModuleTaskMapper:;
- (void)setRetryTasks:;
- (id)taskForModuleModel:;
- (void)setCancelled:;
- (void)cancel;
- (void)dealloc;
- (BOOL)isCancelled;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
@end
