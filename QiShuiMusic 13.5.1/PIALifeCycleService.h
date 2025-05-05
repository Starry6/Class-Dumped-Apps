@interface PIALifeCycleService : NSObject
@property (nonatomic) NSRecursiveLock locker;
@property (nonatomic) NSHashTable list;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)engine:onLoadFinish:;
- (void)engine:onLoadStart:;
- (void)engine:onURLChange:;
- (id)initService;
- (id)locker;
- (void)onEngineDestroy:;
- (void)onNavigationCommit:;
- (void)onOpenScheme:;
- (BOOL)registerLifeCycleReceiver:;
- (void)setLocker:;
- (void)setList:;
- (id)list;
- (void).cxx_destruct;
+ (void)executePrepareServiceTask;
@end
