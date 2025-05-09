@interface VCAccessSpecifier : NSObject
@property (nonatomic) ^{__SecTask=} task;
@property (nonatomic) q entitlements;
@property (nonatomic) q sandboxCapabilities;
@property (nonatomic) NSString associatedAppBundleIdentifier;
@property (nonatomic) NSString bundleIdentifier;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:;
- (BOOL)hasSandboxCapabilities:;
- (long long)entitlements;
- (BOOL)allowReadAccessForDonations;
- (id)init;
- (id)bundleIdentifier;
- (void)dealloc;
- (BOOL)isSettingsApp;
- (BOOL)allowReadAccessForSleepWorkflows;
- (BOOL)allowReadAccessForContextualActions;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)allowShortcutImport;
- (BOOL)allowIntentsExtensionDiscovery;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (BOOL)allowUnrestrictedAccess;
- (id)task;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)allowLaunchingBackgroundShortcutRunner;
- (BOOL)allowConnection;
- (BOOL)allowRootlessShortcutStorageAccess;
- (id)initWithSecTask:bundleIdentifier:associatedAppBundleIdentifier:entitlements:sandboxCapabilities:;
- (BOOL)hasEntitlements:;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:;
- (void).cxx_destruct;
- (long long)sandboxCapabilities;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (id)description;
- (BOOL)isRemovalService;
- (id)bundleIdentifierFromTask;
- (id)associatedAppBundleIdentifier;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (BOOL)allowBackgroundShortcutRunning;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowReadingOnScreenContent;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)isSpringBoard;
- (BOOL)allowRunningTestHarnessTests;
- (id)copyWithZone:;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierForAuditToken:;
+ (id)accessSpecifierForXPCConnection:;
+ (id)accessSpecifierForTask:sandboxCapabilities:;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:bundleIdentifier:;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:bundleIdentifier:;
@end
