@interface AWEVideoPrefetchHitRecorder : NSObject
@property (nonatomic) NSMutableDictionary statusDict;
@property (nonatomic) AWEVideoObjectPool statusPool;
@property (nonatomic) <AWEVideoPrefetchHitDelegate> delegate;
@property (nonatomic) Q lifeTimeMax;
- (void)setLifeTimeMax:;
- (unsigned long long)lifeTimeMax;
- (void)prefetchingWithKey:size:;
- (void)setStatusDict:;
- (void)setStatusPool:;
- (void)startPlayWithKey:;
- (void)startPrefetchWithKey:;
- (id)statusDict;
- (id)statusPool;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
