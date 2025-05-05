@interface AMSUserNotificationAuthorizationTask : AMSTask
@property (nonatomic) UNUserNotificationCenter notificationCenter;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) <AMSUserNotificationAuthorizationDelegate> delegate;
@property (nonatomic) AMSUserNotificationAuthorizationOptions options;
- (void)setOptions:;
- (id)bundleIdentifier;
- (void)setNotificationCenter:;
- (id)notificationCenter;
- (void)setDelegate:;
- (id)options;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:options:;
- (id)requestAuthorization;
- (id)_presentDialogForUserInitiatedWithCompletion;
- (id)_startEngagementAuthorizationWithResult:;
+ (id)engagementRequestForFullSheet;
+ (id)_findEngagementRequestInResponse:;
+ (id)recordEngagementEventWithBundleIdentifier:options:;
@end
