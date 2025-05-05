@interface CNDuplicateSet : NSManagedObject
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL isIgnored;
@property (nonatomic) NSString primaryID;
@property (nonatomic) NSString signature;
@property (nonatomic) NSSet cohorts;
@property (nonatomic) CNDuplicateSetContactImage selectedContactImage;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
