@interface VCActionDonationFetcher : NSObject
+ (id)actionPredictionBlacklist;
+ (id)streams;
+ (id)donationWithUUID:;
+ (void)sourceAppIdentifierArrayForApplicationBundleIdentifier:completionHandler:;
+ (id)donationFromEvent:;
+ (id)donationFromEvent:filteringForTopLevel:;
+ (BOOL)shouldKeepAction:forAppWithBundleIdentifier:filteringForTopLevel:;
+ (BOOL)shouldKeepActionWithAppBundleIdentifierForDisplay:;
+ (id)keyPathForStream:;
+ (id)fetchEventsWithPredicate:limit:;
+ (id)fetchEventsWithPredicate:limit:directAccess:;
+ (id)fetchDonationsWithPredicate:limit:filteringForTopLevel:;
+ (id)fetchDonationsWithPredicate:limit:filteringForTopLevel:directAccess:;
+ (void)fetchDonationsForApplicationBundleIdentifier:limit:filteringForTopLevel:filteringForIsEligibleForPrediction:filteringForRecent:completion:;
+ (void)fetchDonationsForApplicationBundleIdentifier:limit:shortcutAvailability:completion:;
+ (id)predicateForShortcutAvailabilityOptions:;
+ (id)whitelistedDonationsWithOptions:;
+ (void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:filteringForIsEligibleForPrediction:completionHandler:;
+ (void)getPredicateForIntentsWithApplicationBundleIdentifier:completionHandler:;
+ (void)fetchDonationsWithLimit:filteringForIsEligibleForPrediction:completion:;
+ (id)isEligibleForPredictionPredicate;
+ (BOOL)shouldFilterDonationsForAppWithApplicationBundleIdentifier:;
+ (id)filterDonations:forApplicationBundleIdentifier:;
+ (id)appPredictionBlacklist;
@end
