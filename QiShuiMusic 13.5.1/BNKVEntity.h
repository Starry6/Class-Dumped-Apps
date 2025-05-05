@interface BNKVEntity : NSManagedObject
@property (nonatomic) NSString bnKey;
@property (nonatomic) NSData dataValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) q intValue;
@property (nonatomic) NSDate updateDate;
@property (nonatomic) NSString val;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
