@interface TTRecentEntity : NSManagedObject
@property (nonatomic) BOOL deletionMark;
@property (nonatomic) NSString entityID;
@property (nonatomic) NSString json;
@property (nonatomic) NSDate modifyTime;
@property (nonatomic) NSString syncStatus;
@property (nonatomic) NSString type;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
