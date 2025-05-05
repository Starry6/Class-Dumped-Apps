@interface BDLynxCustomErrorMonitor : BDHybridBaseMonitor
+ (BOOL)customErrorEnable;
+ (void)lynxView:didRecieveError:;
+ (void)setCustomErrorEnable:;
+ (BOOL)startMonitorWithSetting:;
@end
