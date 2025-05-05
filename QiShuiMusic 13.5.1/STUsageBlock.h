@interface STUsageBlock : NSManagedObject
@property (nonatomic) NSDate lastEventDate;
@property (nonatomic) NSDate longestSessionStartDate;
@property (nonatomic) NSDate longestSessionEndDate;
@property (nonatomic) q screenTimeInSeconds;
@property (nonatomic) NSDate startDate;
@property (nonatomic) q durationInMinutes;
@property (nonatomic) NSDate firstPickupDate;
@property (nonatomic) q numberOfPickupsWithoutApplicationUsage;
@property (nonatomic) NSSet categories;
@property (nonatomic) NSSet countedItems;
@property (nonatomic) STUsage usage;
+ (id)fetchRequestMatchingUsage:dateInterval:;
+ (double)totalScreenTimeForUsageBlocks:;
+ (long long)totalPickupsForUsageBlocks:;
+ (long long)totalNotificationsForUsageBlocks:;
+ (id)usageCountedItemsForUsageBlocks:;
+ (id)usageCategoriesForUsageBlocks:;
@end
