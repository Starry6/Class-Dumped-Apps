@interface AWETaskPageAdPreloadSmartService : AWEBaseSmartServiceImpl
@property (nonatomic) BOOL needTrack;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL hasShowAd;
@property (nonatomic) BOOL hasClickAd;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)runWithConfigBuilder:completion:;
- (void)onTriggerEvent:params:;
- (BOOL)injectTruthForData:withInput:ext:;
- (double)getCurrentTimeMs;
- (BOOL)hasClickAd;
- (void)setHasShowAd:;
- (void)setHasClickAd:;
- (BOOL)needTrack;
- (BOOL)hasShowAd;
- (void)setNeedTrack:;
- (float)threshold;
- (id)init;
- (void)setThreshold:;
- (void)setupObserver;
+ (id)abTestConfig;
+ (id)sharedInstance;
@end
