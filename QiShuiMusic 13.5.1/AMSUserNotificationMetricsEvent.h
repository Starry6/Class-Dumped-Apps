@interface AMSUserNotificationMetricsEvent : AMSMetricsEvent
@property (nonatomic) NSString displayScheduledTime;
@property (nonatomic) NSString errorDescription;
@property (nonatomic) BOOL postedSuccessfully;
- (id)errorDescription;
- (void)setErrorDescription:;
- (id)initWithTopic:settings:notificationSettingsForTopic:centerBundleId:;
- (id)displayScheduledTime;
- (BOOL)postedSuccessfully;
- (void)setDisplayScheduledTime:;
- (void)setPostedSuccessfully:;
- (id)_createDisplayCriteriaFromSettings:;
- (id)_stringFromNotificationSetting:;
+ (id)_centerForBundleId:;
+ (id)eventForBadgingForMetricsDictionary:bundleID:;
+ (id)eventForPostedNotification:;
+ (id)eventForContentEngagementWithNotification:;
+ (id)eventForSettingsChangedWithSettings:bundleID:account:;
+ (id)eventForVideoPlaybackForNotification:;
+ (id)eventFromMetricsDictionary:centerBundleId:;
+ (id)eventFromNotificationCenterSettings:centerBundleId:;
+ (id)_stringFromInteruptionLevel:;
+ (id)eventForSettingsChangedWithSettings:bundleID:;
@end
