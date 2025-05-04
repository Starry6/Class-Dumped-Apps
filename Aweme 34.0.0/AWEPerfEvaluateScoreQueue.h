@interface AWEPerfEvaluateScoreQueue : NSObject
@property (nonatomic) NSMutableArray backupStorageArray;
@property (nonatomic) NSCache scoreCache;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwLock;
- (id)rwLock;
- (void)setRwLock:;
- (void)replaceAllValue:;
- (id)currentBackupStorage;
- (float)getLatestValue;
- (float)getAverageValueWithLatestCount:;
- (id)backupStorageArray;
- (void)setBackupStorageArray:;
- (id)scoreCache;
- (void)setScoreCache:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)pushValue:;
@end
