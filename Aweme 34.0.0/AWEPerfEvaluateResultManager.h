@interface AWEPerfEvaluateResultManager : NSObject
@property (nonatomic) AWEPerfEvaluateScoreQueue scoreQueue;
@property (nonatomic) AWEStorage scoreStorage;
@property (nonatomic) NSMutableArray observers;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwLock;
- (id)rwLock;
- (void)setRwLock:;
- (float)getRecentScore;
- (float)getStableScore;
- (float)getInstantScore;
- (BOOL)updateLastestScore:;
- (BOOL)validateScore:;
- (id)scoreQueue;
- (id)scoreStorage;
- (void)setScoreQueue:;
- (void)setScoreStorage:;
- (void)unregisterObserver:;
- (id)init;
- (id)observers;
- (void)registerObserver:;
- (void).cxx_destruct;
- (void)setObservers:;
- (void)notifyObserver;
@end
