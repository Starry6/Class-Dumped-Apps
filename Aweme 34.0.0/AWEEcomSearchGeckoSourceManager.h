@interface AWEEcomSearchGeckoSourceManager : NSObject
+ (void)pullGeckoOfflineWithMall;
+ (void)pullGeckoOffline:;
+ (id)geckoEnvAk:testAk:;
+ (void)taskWithAccessKey:testAk:type:name:completion:;
+ (void)mallShowScreenFirstDone;
+ (double)currentTimeStamp;
@end
