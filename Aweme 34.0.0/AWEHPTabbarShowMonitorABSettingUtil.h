@interface AWEHPTabbarShowMonitorABSettingUtil : NSObject
+ (id)tabbarShowMonitorConfig;
+ (BOOL)showMonitorEnableABTest;
+ (BOOL)tabbarAutoRecoverTimingEnable:;
+ (id)tabbarLastSceneCanAutoRecoverList;
+ (BOOL)tabbarShowAutoRecoverEnableABTest;
+ (BOOL)canStartShowMonitor;
+ (BOOL)topbarShowMonitorEnableABTest;
+ (long long)getMonitorDelayTimeAfterColdLaunch;
+ (BOOL)monitorTimingEnable:;
+ (long long)getMaxReportCount;
+ (BOOL)monitorUserWindowOperationEnable;
+ (id)tabbarRootViewControllerCheckChildViewControllerBlackList;
+ (id)tabbarRootViewControllerCheckChildViewControllerWhiteList;
+ (id)tabbarRootViewControllerCheckChildViewControllerWhiteListIsFullScreenConfig;
+ (long long)topChildVCGetType;
+ (id)tabbarRootViewControllerWhiteList;
+ (id)tabbarSecondViewControllerWhiteList;
+ (double)getTabbarSnapShotImageWidthRatio;
+ (double)getTabbarSnapShotImageCheckSegments;
+ (double)getTabbarSnapShotImageCheckGap;
+ (double)getTabbarColorMonitorTolerance;
+ (BOOL)tabbarUploadAlogEnableABTest;
+ (BOOL)tabbarImageNeedAfterScreenUpdatesABTest;
+ (BOOL)topbarAutoRecoverTimingEnable:;
+ (id)topbarLastSceneCanAutoRecoverList;
@end
