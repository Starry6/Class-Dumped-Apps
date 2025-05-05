@interface IDSSysdiagnoseLogCollector : NSObject
- (id)init;
- (void)collectSysdiagnoseLog:;
- (void)_collectSysdiagnoseLog:;
+ (id)sharedInstance;
@end
