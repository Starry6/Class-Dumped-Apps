@interface CDBSpotlightUtilities : NSObject
+ (void)pushBatchedUpdatesForCalendarItemsWithUUIDs:database:;
+ (void)_pushUpdatesForCalendarItemsWithUUIDs:inBatchesOf:database:;
+ (void)_pushUpdatesForCalendarItemsWithUUIDs:database:;
+ (void)_resetDatabase:;
@end
