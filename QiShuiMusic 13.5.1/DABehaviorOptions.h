@interface DABehaviorOptions : NSObject
+ (BOOL)isCustomerInstall;
+ (BOOL)CFNetworkLogging;
+ (BOOL)compressRequests;
+ (BOOL)isAppleInternalInstall;
+ (BOOL)useContactsFramework;
+ (id)DAManagedDefaultForKey:;
+ (BOOL)completelyIgnoreNotes;
+ (BOOL)promptForAllCerts;
+ (BOOL)isInHoldingPattern;
+ (BOOL)babysitterEnabled;
+ (void)_startListeningForNotifications;
+ (BOOL)ignoreSupportedCommands;
+ (int)refreshThrottleTime;
+ (BOOL)ignoreBadLDAPCerts;
+ (double)defaultEASTaskTimeoutOutWasFound:;
+ (double)defaultDAVProbeTimeout;
+ (id)whitelistedEASProtocols;
+ (BOOL)_shouldForceCookies:;
+ (BOOL)cookiesEnabled;
+ (BOOL)calDAVRemindersForAll;
+ (BOOL)enablePromptForServerTrust;
+ (BOOL)useThunderhillBetaServers;
+ (BOOL)perfLogging;
+ (id)APSEnv;
+ (BOOL)allIMAPServersSupportNotesSearch;
+ (BOOL)writeOutBrokenCancelationRequests;
+ (BOOL)sendMeCardEverywhere;
+ (BOOL)enableAutomaticAttachmentDownloads;
+ (BOOL)alwaysUseCalendarHomeSync;
+ (BOOL)useContactsFramerwork;
+ (BOOL)earlyPingEnabled;
+ (BOOL)customAutoDV2UserAgentEnabled;
+ (id)holidayCalendarURL;
+ (double)holidayCalendarRefreshInterval;
+ (int)numForgivable401s;
+ (BOOL)isEASParsingLogEnabled;
+ (BOOL)orphanCheckEnabled;
+ (BOOL)addDAManagedDefaults:;
+ (void)removeDAManagedDefaults:;
@end
