@interface BDWebMonitorManager : NSObject
+ (void)startMonitorWithDefaultSettings;
+ (id)defaultSettingModel;
+ (void)setIsStopMonitor:;
+ (void)startMonitorWithSettings:;
@end
