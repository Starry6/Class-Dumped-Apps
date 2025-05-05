@interface BDXUGOptimizeManager : NSObject
- (void)triggerOnLogout;
- (void)triggerOnFeedReady;
- (void)triggerOnLogin;
- (void)updateConfig:;
+ (id)sharedInstance;
@end
