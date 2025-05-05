@interface TTSearchHistoryEntity : NSManagedObject
@property (nonatomic) NSString keyword;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSString directToType;
@property (nonatomic) NSString sugJSON;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
