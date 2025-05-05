@interface BNNetCache : NSManagedObject
@property (nonatomic) q buildNumber;
@property (nonatomic) NSString reqHash;
@property (nonatomic) BOOL isUpgradeNeedDelete;
@property (nonatomic) NSData response;
@property (nonatomic) NSDate timestamp;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
