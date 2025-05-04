@interface AWEECMallResourcePreloadManager : NSObject
@property (nonatomic) NSDictionary preloadConfig;
@property (nonatomic) NSDictionary preloadedCardModelMap;
- (id)preloadConfig;
- (void)setPreloadConfig:;
- (void)standBy;
- (void)triggerPreloadWithSceneName:;
- (void)setPreloadedCardModelMap:;
- (id)preloadedCardModelMap;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
