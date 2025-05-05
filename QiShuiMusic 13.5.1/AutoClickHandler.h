@interface AutoClickHandler : NSObject
+ (void)startAutoClickMonitoringWithButtonTitles:;
+ (void)stopAutoClickMonitoring;
+ (void)monitorAndAutoClickButton;
+ (id)findButtonWithTitles:inView:;
@end
