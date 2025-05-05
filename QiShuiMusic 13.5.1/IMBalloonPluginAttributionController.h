@interface IMBalloonPluginAttributionController : NSObject
@property (nonatomic) NSMutableDictionary expiredBundleIDToTimestampMap;
@property (nonatomic) NSMutableDictionary bundleIDsDisplayingAttribution;
@property (nonatomic) BOOL hasPerformedFirstAppExtensionLoad;
- (id)init;
- (void).cxx_destruct;
- (id)_currentTimestamp;
- (void)_handleInstalledPluginsChanged;
- (void)startExpiryTimer;
- (void)didShowAttributionForBundleIDs:;
- (BOOL)shouldShowAttributionForBundleID:;
- (double)_expiryTimeout;
- (void)_saveToFile;
- (void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
- (id)expiredBundleIDToTimestampMap;
- (void)setExpiredBundleIDToTimestampMap:;
- (id)bundleIDsDisplayingAttribution;
- (void)setBundleIDsDisplayingAttribution:;
- (BOOL)hasPerformedFirstAppExtensionLoad;
- (void)setHasPerformedFirstAppExtensionLoad:;
+ (id)sharedInstance;
@end
