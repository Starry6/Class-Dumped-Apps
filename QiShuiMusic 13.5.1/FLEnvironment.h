@interface FLEnvironment : NSObject
@property (nonatomic) NSUserDefaults followupDefaults;
@property (nonatomic) BOOL followUpExtensionSupportEnabled;
@property (nonatomic) BOOL followUpZeroActionsForTheWorld;
- (BOOL)isUnlocked;
- (id)init;
- (BOOL)stressMode;
- (BOOL)shouldShowUnapprovedItems;
- (BOOL)isInternal;
- (id)supportedBundleIdentifiers;
- (BOOL)followUpZeroActionsForTheWorld;
- (id)stressBundleIdentifiers;
- (BOOL)followUpExtensionSupportEnabled;
- (BOOL)normalizeExpirationToMidnight;
- (void)setFollowupDefaults:;
- (void).cxx_destruct;
- (id)supportedNotifyingAppIds;
- (id)followupDefaults;
- (double)oneDayTimeInterval;
- (void)setFollowUpExtensionSupportEnabled:;
- (BOOL)shouldHideAllFollowUps;
+ (id)currentEnvironment;
@end
