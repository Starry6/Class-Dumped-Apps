@interface MKTransitMapItemUpdater : MKTransitItemReferenceDateUpdater
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) <MKTransitMapItemUpdaterDelegate> delegate;
@property (nonatomic) BOOL lastInfoRefreshFailed;
@property (nonatomic) BOOL refreshing;
@property (nonatomic) NSTimer dataRefreshTimer;
@property (nonatomic) NSDate suggestedDataRefreshDate;
- (id)mapItem;
- (void).cxx_destruct;
- (void)setActive:;
- (BOOL)isRefreshing;
- (void)_transitInfoUpdated;
- (id)initWithMapItem:delegate:;
- (void)_resumeDataRefreshTimer;
- (void)_suspendDataRefreshTimer;
- (void)_scheduleDataUpdateForTransitItemAtDate:;
- (void)_refreshTransitInfoIfNeeded;
- (void)_processUpdatedMapItems:identifier:ttl:error:;
- (BOOL)isStuckWithExpiredInfoRelativeToDate:;
- (BOOL)_isInfoExpiredRelativeToDate:;
- (BOOL)lastInfoRefreshFailed;
- (void)setLastInfoRefreshFailed:;
- (void)setRefreshing:;
- (id)dataRefreshTimer;
- (void)setDataRefreshTimer:;
- (id)suggestedDataRefreshDate;
- (void)setSuggestedDataRefreshDate:;
@end
