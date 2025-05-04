@interface AWEExperienceApplogManager : NSObject
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwLock;
@property (nonatomic) NSMutableSet applogListeners;
- (id)rwLock;
- (void)setRwLock:;
- (void)registerApplogListener:;
- (void)unRegisterApplogListener:;
- (void)notifyListenerWithEvent:params:;
- (id)applogListeners;
- (void)registerAppLogHooker;
- (void)setApplogListeners:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)setExpectedBatchEventInterval:withCaller:withUniqueKey:;
+ (long long)defaultBatchInterval;
+ (void)applogFlush;
+ (id)sharedInstance;
@end
