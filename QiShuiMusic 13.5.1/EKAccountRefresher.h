@interface EKAccountRefresher : NSObject
@property (nonatomic) <EKAccountRefresherDelegate> delegate;
@property (nonatomic) BOOL refreshing;
@property (nonatomic) BOOL allAccountsOffline;
- (void)_eventStoreChanged:;
- (id)initWithEventStore:;
- (void)refresh;
- (void)setDelegate:;
- (id)delegate;
- (void)_syncDidEnd;
- (void).cxx_destruct;
- (void)_syncDidStart;
- (BOOL)refreshing;
- (void)_syncStartTimeoutExpired;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (BOOL)_allSourcesRefreshed;
- (BOOL)_areAnySourcesCurrentlySyncing;
- (BOOL)_allCalendarsRefreshed;
- (BOOL)_areAnyCalendarsCurrentlySyncing;
- (void)_beginSyncStartTimeout;
- (void)_cancelSyncStartTimeout;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_syncCompleted;
- (BOOL)sourceFinishedRefreshing:;
- (BOOL)calendarFinishedRefreshing:;
- (BOOL)allAccountsOffline;
@end
