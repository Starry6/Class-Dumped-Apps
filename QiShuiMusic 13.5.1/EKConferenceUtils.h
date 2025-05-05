@interface EKConferenceUtils : NSObject
+ (id)logHandle;
+ (id)_workQueue;
+ (double)conferenceImageSize;
+ (void)virtualConference:likelyCameFromRoomTypes:completionHandler:;
+ (id)synchronousAppTitleOnlyForURL:incomplete:;
+ (void)applicationRecordForURL:completionHandler:;
+ (id)applicationRecordForURL:incomplete:;
+ (id)_applicationRecordFromAppLink:appLinkError:orCustomScheme:;
+ (id)parentAppBundleIdentifierForExtensionBundleIdentifier:;
+ (void)invalidateConferenceURLIfNeeded:inEventStore:;
+ (void)invalidateConferenceURL:;
+ (id)validURLForConferenceURL:completion:;
+ (id)_validURLForConferenceURL:previousURLs:completion:;
+ (void)renewConferenceURL:toDate:;
+ (void)_findExtensionIdentifierForURL:completionHandler:;
+ (void)_findRoomTypeForURL:queue:completionHandler:;
@end
