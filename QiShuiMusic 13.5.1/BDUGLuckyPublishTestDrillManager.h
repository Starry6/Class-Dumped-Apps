@interface BDUGLuckyPublishTestDrillManager : NSObject
- (void)reportAppEvent:;
- (BOOL)calculateNeedSimulate:;
- (void)executeConfig:;
- (void)internalStart;
- (void)simulateWithDelay:;
- (void)triggerException:;
- (void)triggerWithConfig:;
+ (void)didFinishLoadFeed;
+ (id)sharedInstance;
@end
