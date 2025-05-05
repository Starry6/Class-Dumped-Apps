@interface VCSleepDonationAction : VCSleepAction
- (id)initWithShortcut:;
- (id)initWithShortcut:bundleIdentifier:;
+ (id)identifierForShortcut:;
+ (id)sleepActionsForShortcuts:bundleIdentifier:;
+ (id)sleepActionsDictionaryForShortcutsByApp:;
+ (id)sleepActionsDictionaryForShortcuts:;
@end
