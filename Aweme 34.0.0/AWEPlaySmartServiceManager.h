@interface AWEPlaySmartServiceManager : NSObject
@property (nonatomic) double lastDoSmartPreRenderStrategyTime;
@property (nonatomic) NSObject<OS_dispatch_queue> smartPreRenderPredictQueue;
@property (nonatomic) NSCache predictedAwemeIDCache;
@property (nonatomic) NSCache delayPreRenderAwemeIDCache;
- (id)predictedAwemeIDCache;
- (void)setPredictedAwemeIDCache:;
- (double)delayOffsetPreRenderInModelId:;
- (double)lastDoSmartPreRenderStrategyTime;
- (void)setLastDoSmartPreRenderStrategyTime:;
- (id)smartPreRenderPredictQueue;
- (id)delayPreRenderAwemeIDCache;
- (void)doSmartPreRenderStrategyWithModel:;
- (void)setSmartPreRenderPredictQueue:;
- (void)setDelayPreRenderAwemeIDCache:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
