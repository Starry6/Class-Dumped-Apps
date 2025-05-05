@interface SBSApplicationShortcutService : SBSAbstractApplicationService
- (id)applicationShortcutItemsOfTypes:forBundleIdentifier:;
- (void)updateDynamicApplicationShortcutItems:bundleIdentifier:;
- (void)fetchApplicationShortcutItemsOfTypes:forBundleIdentifier:withCompletionHandler:;
- (void)updateDynamicApplicationShortcutItems:forBundleIdentifier:;
- (void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:completionHandler:;
- (void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:;
- (void)updateDynamicApplicationShortcutItems:;
@end
