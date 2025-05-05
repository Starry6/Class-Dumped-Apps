@interface CNDuplicateCohort : NSManagedObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString cropRectString;
@property (nonatomic) NSData imageData;
@property (nonatomic) NSSet duplicates;
- (id)initWithEntity:insertIntoManagedObjectContext:;
- (void).cxx_destruct;
- (void).cxx_construct;
@end
