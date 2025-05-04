@interface AWEBeforeSystemPushPermissionRequestManager : NSObject
@property (nonatomic) BOOL isBeforeSystemPushPermissionRequestAlertPresented;
@property (nonatomic) NSString alertShowReason;
@property (nonatomic) NSString alertSelectionType;
@property (nonatomic) BOOL isSystemAlertDelayed;
- (id)preSystemNotificationPermissionAlertGuideTestGroups;
- (BOOL)isBeforeSystemPushPermissionRequestAlertEnabled;
- (BOOL)isBeforeSystemPushPermissionRequestAlertPresented;
- (void)setIsSystemAlertDelayed:;
- (id)aAWENotificationGuideCommonAdapter;
- (void)setAlertShowReason:;
- (void)setAlertSelectionType:;
- (BOOL)p_isInHomepageHot;
- (void)trackBeforeSystemPushPermissionRequestAlertWithEventType:;
- (void)setIsBeforeSystemPushPermissionRequestAlertPresented:;
- (void)logAlertInfo;
- (void)resetTrackerParams;
- (void)onSystemPermissionAlertReadyToShow;
- (void)presentedBeforeSystemPushPermissionRequestAlert;
- (BOOL)hasPresentedBeforeSystemPushPermissionRequestAlert;
- (id)alertShowReason;
- (id)alertSelectionType;
- (BOOL)isSystemAlertDelayed;
- (id)init;
- (void).cxx_destruct;
- (void)didBecomeActive:;
+ (Class)aAWENotificationGuideCommonAdapterClass;
+ (id)sharedInstance;
@end
