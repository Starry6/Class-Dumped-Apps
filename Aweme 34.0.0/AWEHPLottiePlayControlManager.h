@interface AWEHPLottiePlayControlManager : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) NSMutableDictionary lottiePlayLogs;
@property (nonatomic) AWEHPHambListener listener;
@property (nonatomic) NSDictionary controlDict;
@property (nonatomic) NSTimer timer;
- (void)setMmkv:;
- (id)mmkv;
- (id)controlDict;
- (void)setControlDict:;
- (BOOL)isLottieDynamicEffectCanShowWithLottieID:;
- (void)logDynamicEffectShowWithLottieID:;
- (void)clearOfflineLottiePlayLogIfNeed;
- (long long)retryDelayTime;
- (id)lottiePlayLogs;
- (void)setLottiePlayLogs:;
- (void)setListener:;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (id)listener;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
