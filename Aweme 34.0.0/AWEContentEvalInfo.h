@interface AWEContentEvalInfo : NSObject
@property (nonatomic) MMKV mmkvStorage;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwLock;
- (id)rwLock;
- (void)setRwLock:;
- (void)flushToDisk;
- (void)setMmkvStorage:;
- (id)mmkvStorage;
- (void)p_registerTiming;
- (void)clearExpireInfo;
- (BOOL)isValidTime:;
- (id)initFromStorage;
- (id)getInfoOfAweme:forKey:;
- (void)updateInfo:ofAweme:forKey:;
- (void)updateInfoWithDictionary:ofAweme:;
- (id)contentScoreInfoForAweme:scene:;
- (void)updateScoreInfo:forAweme:scene:;
- (void)removeScoreInfoForAweme:scene:;
- (void)dealloc;
- (void).cxx_destruct;
@end
