@interface BNHideEntity : NSManagedObject
@property (nonatomic) NSString entityId;
@property (nonatomic) NSString json;
@property (nonatomic) NSDate modifyTime;
@property (nonatomic) BOOL cancelHideMark;
@property (nonatomic) NSDate serverUpdateTime;
@property (nonatomic) NSString syncStatus;
@property (nonatomic) NSString type;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
