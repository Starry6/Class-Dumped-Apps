@interface AWEHPTabGuideConfigManager : NSObject
@property (nonatomic) AWEHPFeedTabGuideConfig config;
@property (nonatomic) BOOL isDisableOldTabGuide;
- (long long)preloadSize;
- (BOOL)isEnterFromSupport:;
- (BOOL)disableOldTabGuide;
- (id)rollBackConfig;
- (BOOL)configEnable;
- (void)setIsDisableOldTabGuide:;
- (BOOL)isDisableOldTabGuide;
- (void)setConfig:;
- (id)init;
- (id)config;
- (void)setup;
- (void).cxx_destruct;
- (id)setupConfig;
+ (id)sharedInstance;
@end
