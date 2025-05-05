@interface SYLinkableContentItemFinder : NSObject
@property (nonatomic) FBSDisplayLayoutMonitor _displayLayoutMonitor;
@property (nonatomic) NSArray _foregroundAppBundleIDs;
@property (nonatomic) q _foregroundAppLoadRetriesRemaining;
@property (nonatomic) NSObject<OS_dispatch_queue> _itemFinderQueue;
@property (nonatomic) <SYLinkableContentItemFinderDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)_displayLayoutMonitor;
- (void)fetchLinkableContentItemsExcludingActivities:completion:;
- (void)_fetchActiveLinkableUserActivitiesExcluding:completion:;
- (BOOL)_shouldIncludeAsLinkableUserActivity:bundleID:foregroundBundleIDs:excludedActivities:;
- (void)_activityFetchingFinishedWithActivities:appBundleIDs:foregroundBundleIDs:completion:;
- (id)_currentForegroundAppBundleIDs;
- (void)_updateForegroundAppsFromDisplayLayout:;
- (void)handleRemoteCurrentActivityDidChange;
- (id)_foregroundAppBundleIDs;
- (void)set_foregroundAppBundleIDs:;
- (long long)_foregroundAppLoadRetriesRemaining;
- (void)set_foregroundAppLoadRetriesRemaining:;
- (id)_itemFinderQueue;
@end
