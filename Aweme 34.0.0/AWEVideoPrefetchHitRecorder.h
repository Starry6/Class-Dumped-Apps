@interface AWEVideoPrefetchHitRecorder : NSObject
@property (nonatomic) NSMutableDictionary statusDict;
@property (nonatomic) AWEVideoObjectPool statusPool;
@property (nonatomic) <AWEVideoPrefetchHitDelegate> delegate;
@property (nonatomic) Q lifeTimeMax;
- (void)setLifeTimeMax:;
- (void)setStatusDict:;
- (void)setStatusPool:;
- (id)statusDict;
- (id)statusPool;
- (unsigned long long)lifeTimeMax;
- (void)startPrefetchWithKey:;
- (void)prefetchingWithKey:size:;
- (void)startPlayWithKey:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)sharedInstance;
@end
