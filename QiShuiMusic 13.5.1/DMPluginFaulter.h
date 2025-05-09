@interface DMPluginFaulter : NSObject
@property (nonatomic) NSString message;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
- (void)_fault;
- (void)MobileContainerManagerContainerMigrator;
- (void)LaunchServicesMigrator;
- (void)MSUDataMigrator;
- (void)MobileInstallationSystemAppMigrator;
- (void)timedmigrator;
- (void)securitydKeychainMigrator;
- (void)managedconfigurationmigrator;
- (void)MKBMigrator;
- (void)MobileActivationMigrator;
- (void)MobileGestaltMobileGestaltMigrator;
- (void)WiFiDataMigrator;
- (void)MobileInstallationAppUserDataMigrator;
- (void)addressbookmigrator;
- (void)calendarmigrator;
- (void)accountsettingsmigrator;
- (void)WebBookmarksmigrator;
- (void)MobileSafarimigrator;
- (void)appleaccountmergebuddyprovisioningresponsemigrator;
- (void)appleaccountmigrator;
- (void)messageLegacyAccountsMigrator;
- (void)dataaccessmigratorlegacy;
- (void)accountsmigrator;
- (void)locationdmigrator;
- (void)AccessibilityAccessibilityDataMigration;
- (void)mobilebackupmigrator;
- (void)airtrafficmigrator;
- (void)managedconfigurationmdmmigrator;
- (void)AnisetteMigrator;
- (void)BuddyMigrator;
- (void)CallHistoryDataMigrator;
- (void)certuimigrator;
- (void)cloudrecentsmigrator;
- (void)CloudTabsMigratormigrator;
- (void)CookieDataMigratormigrator;
- (void)dataaccessmigrator;
- (void)facetimemigrator;
- (void)preferencesInternationalSupportMigrator;
- (void)keyboardsmigrator;
- (void)keyboardsuimigrator;
- (void)MobileAsset;
- (void)languageassetmigrator;
- (void)MapsDataClassMigratormigrator;
- (void)musiclibrarymigrator;
- (void)messageAccountsMigrator;
- (void)smsmigrator;
- (void)mobilemailmigrator;
- (void)MobileSlideShow;
- (void)NanoAudioControlMigrator;
- (void)NanoHealthMigrator;
- (void)nanomailclientmigrator;
- (void)PassbookDataMigrator;
- (void)PreferencesMigrator;
- (void)siriSiri;
- (void)SoftwareUpdateBridge;
- (void)sbmigrator;
- (void)StocksMigrator;
- (void)tonemigrator;
- (void)vibrationmigrator;
- (void)iTunesStoremigrator;
- (void)VideosMigrator;
- (void)accountsobsolescencemigrator;
- (void)VoiceShortcutsShortcutsMigrator;
- (void)managedconfigurationcleanupmigrator;
- (void)coreaudioHAENDataMigrator;
- (void)faultWithPluginIdentifier:message:;
+ (id)_selectorNameFromPluginIdentifier:;
@end
