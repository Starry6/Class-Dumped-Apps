@interface CADNotificationGatheringContext : NSObject
@property (nonatomic) ClientConnection connection;
@property (nonatomic) NSArray notifications;
@property (nonatomic) double now;
@property (nonatomic) NSDate earliestExpiringNotification;
@property (nonatomic) BOOL deleteOldNotifications;
@property (nonatomic) BOOL expanded;
- (double)now;
- (id)notifications;
- (double)endDateOfLastOccurrenceInCacheForEvent:database:cacheRange:;
- (double)expirationTimestampForEvent:database:;
- (BOOL)deleteOldNotifications;
- (BOOL)shouldSkipNotificationForCalendar:;
- (double)expirationTimestampForRecurrence:event:database:;
- (id)initWithConnection:afterDate:forSourceWithExternalIdentifier:excludingDelegateSources:excludingUncheckedCalendars:filteredByShowsNotificationsFlag:expanded:;
- (BOOL)shouldSkipNotificationForStore:;
- (double)expirationTimestampForEvent:withInitialOccurrenceDate:database:;
- (BOOL)isEventTimeSensitiveForFocus:;
- (void)addNotification:;
- (id)connection;
- (id)earliestExpiringNotification;
- (void).cxx_destruct;
- (BOOL)eventHasNewProposedTime:;
- (BOOL)expanded;
- (id)nearestProposedTimeForEvent:;
@end
