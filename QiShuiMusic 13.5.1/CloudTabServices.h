@interface CloudTabServices : NSObject
+ (void)clearTabsForCurrentDevice;
+ (id)_serverConnection;
+ (void)clearAllCloudTabDevices;
+ (void)didToggleCloudTabs:;
+ (void)didToggleCloudTabs:terminateAfterUpdating:;
@end
