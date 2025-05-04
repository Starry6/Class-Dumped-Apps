@interface AWEBackgroundLaunchConfig : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)backgroundLaunchSilentPushConfig;
+ (id)backgroundLaunchBGFetchConfig;
+ (id)backgroundLaunchLocalPushConfig;
+ (id)backgroundLaunchConfig;
+ (long long)backgroundLaunchEnableVersion;
+ (id)bgfetchRequestWhiteList;
+ (BOOL)enableFilterLog;
+ (BOOL)interceptNetworkRequests;
+ (BOOL)enableTrackerReport;
+ (id)launchTaskToFirstFgList;
+ (BOOL)disableChangeLaunchType;
@end
