@interface WBSDigitalHealthManager : NSObject
@property (nonatomic) <WBSDigitalHealthManagerDelegate> delegate;
- (id)init;
- (void)getOverlayStateForURLs:withCompletionHandler:;
- (void)dealloc;
- (void)setDelegate:;
- (void)stopUsageTrackingForURL:withCompletionHandler:;
- (void)startObserving;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)stopObserving;
- (void)_historyItemsWereRemoved:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_requestPoliciesForWebsites:completionHandler:;
- (void)_historyWasCleared:;
- (void)updateUsageTrackingForURL:withBundleIdentifier:toState:;
+ (void)deleteAllUsageHistory;
+ (void)deleteUsageHistoryFromDate:toDate:;
+ (void)deleteUsageHistoryForURLs:;
+ (void)_updateWebpageUsage:withDigitalHealthManagerUsageState:;
@end
