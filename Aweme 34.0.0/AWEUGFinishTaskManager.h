@interface AWEUGFinishTaskManager : NSObject
@property (nonatomic) NSMutableDictionary taskDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)setForTaskType:;
- (id)taskDic;
- (id)currentTaskForTaskType:;
- (void)setTaskDic:;
- (id)init;
- (void)addTask:;
- (void)removeTask:;
- (void).cxx_destruct;
- (void)setupObserver;
+ (id)sharedInstance;
@end
