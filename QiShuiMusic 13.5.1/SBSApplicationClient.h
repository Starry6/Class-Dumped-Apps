@interface SBSApplicationClient : SBSServiceFacilityClient
- (id)applicationShortcutItemsOfTypes:forBundleIdentifier:;
- (void)updateDynamicApplicationShortcutItems:bundleIdentifier:;
- (void)fetchApplicationShortcutItemsOfTypes:forBundleIdentifier:withCompletionHandler:;
- (void)requestShelfPresentationForSceneWithIdentifier:;
- (void)performMultitaskingShortcutAction:forBundleIdentifier:;
- (void)fetchSupportedMultitaskingShortcutActionsForBundleIdentifier:withCompletionHandler:;
- (void)deleteSnapshotsForApplicationIdentifier:;
- (void)triggerShowAllWindowsForApplicationBundleIdentifier:;
- (void)fetchWhitePointAdaptivityStyleForDisplayId:withCompletionHandler:;
+ (id)serviceFacilityIdentifier;
@end
