@interface AWEDanmakuDrawBufferPool : NSObject
@property (nonatomic) NSMutableOrderedSet danmakuDrawBufferPool;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwLock;
@property (nonatomic) BOOL useRWLock;
- (id)rwLock;
- (void)setRwLock:;
- (void)addDanmaku:;
- (void)removeDanmaku:;
- (void)setUseRWLock:;
- (BOOL)useRWLock;
- (id)danmakuDrawBufferPool;
- (id)initWithUseRWLock:;
- (id)currentShowingDanmakus;
- (void)setDanmakuDrawBufferPool:;
- (void)dealloc;
- (void)setIsEmpty:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
@end
