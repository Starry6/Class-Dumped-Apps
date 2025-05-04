@interface AWEPrivacyThreadModule : NSObject
@property (nonatomic) NSMutableArray aspectors;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} lock;
- (void)setAspectors:;
- (id)aspectors;
- (void)addAspector:;
- (void)removeAspector:;
- (id)threadModuleInvoke;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
