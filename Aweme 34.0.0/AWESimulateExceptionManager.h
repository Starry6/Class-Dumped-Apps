@interface AWESimulateExceptionManager : NSObject
- (void)internalStart;
- (void)executeConfig:;
- (void)triggerException:;
- (BOOL)calculateNeedSimulate:;
- (void)reportAppEvent:;
- (void)triggerWithConfig:;
- (void)simulateWithDalay:;
- (void)start;
+ (id)shared;
@end
