@interface AFSiriAnnouncementRequestCapabilityManager : NSObject
- (void)removeObserver:;
- (void)addObserver:;
- (id)initWithPlatform:;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:;
- (void)provider:eligibleAnnouncementRequestTypesChanged:;
- (void).cxx_destruct;
- (void)provider:availableAnnouncementRequestTypesChanged:;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:;
+ (BOOL)_supportsAnnouncementType:forSupportedIntents:forBundleId:onPlatform:;
+ (Class)_classForPlatform:;
+ (id)supportedAnnouncementTypesForBundleId:onPlatform:;
+ (id)_candidateAnnounceNotificationTypesFromApp:withIntentIDs:notificationContentType:onPlatform:;
+ (long long)notificationAnnouncementTypeForNotificationFromApp:withIntentIDs:notificationContent:onPlatform:;
+ (id)_requiredBundleIDsForNotificationAnnouncementType:;
@end
