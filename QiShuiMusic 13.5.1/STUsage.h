@interface STUsage : NSManagedObject
@property (nonatomic) NSDate lastEventDate;
@property (nonatomic) NSSet blocks;
@property (nonatomic) NSDate lastUpdatedDate;
@property (nonatomic) STCoreDevice device;
@property (nonatomic) STCoreUser user;
+ (id)fetchRequestMatchingUser:device:;
@end
