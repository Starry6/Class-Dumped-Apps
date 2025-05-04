@interface AWESplashIntelligentManager : NSObject
@property (nonatomic) NSDictionary pitayaPredictConfig;
@property (nonatomic) double lastPitayaRequestTime;
- (void)registerPitayaSplashPredictWithConfig:;
- (void)registerPitayaSearchIntelligent;
- (void)setPitayaPredictConfig:;
- (void)handlePitayaPredictResultWith:;
- (double)lastPitayaRequestTime;
- (id)pitayaPredictConfig;
- (void)setLastPitayaRequestTime:;
- (void)setupIntelligentManager;
- (void)resetIntelligentManager;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
