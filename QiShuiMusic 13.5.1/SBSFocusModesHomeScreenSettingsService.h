@interface SBSFocusModesHomeScreenSettingsService : NSObject
+ (void)homeScreenSnapshotsWithRequest:completion:;
+ (void)homeScreenSnapshotsForSuggestedPagesWithRequest:completion:;
+ (void)updateFocusModeHomeScreenSettingsWithRequest:;
+ (void)addSuggestedHomeScreenPageWithRequest:;
+ (id)activateConnection;
@end
