@interface AWEIMActiveUserConfig : NSObject
+ (BOOL)canPullFriendActiveStatus;
+ (BOOL)enableActiveApiOptimize;
+ (long long)activeBufferInterval;
+ (BOOL)canPullNonFriendsActiveStatusWithSource:;
+ (long long)pullInterval;
+ (id)imUserActiveStatusConfig;
+ (id)__exemptedSourcesForPullingNonFriendActive;
+ (id)activeStatusPullSettings;
+ (double)serverUpdateThreshold;
+ (long long)groupDelayInterval;
+ (BOOL)canUpdateMyActiveStatus;
+ (BOOL)canPullNonFriendsActiveStatusWithSourceKey:;
+ (long long)groupActiveCacheFreshIntervalWithIsOnline:;
+ (long long)singleActiveCacheFreshInterval;
+ (long long)updateInterval;
@end
