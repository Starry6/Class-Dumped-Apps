@interface STFetchResultsRequest : NSObject
@property (nonatomic) NSFetchRequest fetchRequest;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFetchRequest:;
- (id)initWithEntity:;
- (id)fetchRequest;
- (id)initWithEntity:predicate:;
- (id)initWithEntity:predicate:sortDescriptors:;
+ (id)requestWithFetchRequest:;
@end
