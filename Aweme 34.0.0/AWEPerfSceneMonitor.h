@interface AWEPerfSceneMonitor : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) NSMutableDictionary sceneMap;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
@property (nonatomic) NSMutableArray observers;
- (id)subScene;
- (void)updateScene:subScene:;
- (id)sceneMap;
- (void)setSceneMap:;
- (void)onSceneDidChange;
- (void)setScene:;
- (id)init;
- (void)dealloc;
- (void)setLock:;
- (id)scene;
- (id)lock;
- (id)observers;
- (void)addObserver:;
- (void).cxx_destruct;
- (void)setObservers:;
+ (id)sharedMonitor;
@end
