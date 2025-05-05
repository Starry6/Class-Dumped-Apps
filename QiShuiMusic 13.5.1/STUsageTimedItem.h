@interface STUsageTimedItem : NSManagedObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString domain;
@property (nonatomic) q totalTimeInSeconds;
@property (nonatomic) BOOL usageTrusted;
@property (nonatomic) STUsageCategory category;
@end
