@interface STUsageCountedItem : NSManagedObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) q numberOfPickups;
@property (nonatomic) q numberOfNotifications;
@property (nonatomic) BOOL usageTrusted;
@property (nonatomic) STUsageBlock block;
+ (id)notificationItemsExcludingSystemHiddenApplications:;
+ (id)pickupItemsExcludingSystemHiddenApplications:;
@end
