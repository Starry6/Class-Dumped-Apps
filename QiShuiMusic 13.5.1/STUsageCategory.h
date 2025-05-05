@interface STUsageCategory : NSManagedObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q totalTimeInSeconds;
@property (nonatomic) NSSet timedItems;
@property (nonatomic) STUsageBlock block;
+ (id)categoryItemsExcludingSystemCategories:;
+ (id)applicationAndWebItemsExcludingSystemHiddenApplications:;
@end
