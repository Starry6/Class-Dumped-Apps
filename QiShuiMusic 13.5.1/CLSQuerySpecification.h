@interface CLSQuerySpecification : NSObject
@property (nonatomic) NSString entityName;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) NSArray sortDescriptors;
@property (nonatomic) Q limit;
@property (nonatomic) Q observerOptions;
- (void)setSortDescriptors:;
- (id)sortDescriptors;
- (id)entityName;
- (unsigned long long)limit;
- (void)setOffset:;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)offset;
- (void)setLimit:;
- (id)predicate;
- (void)encodeWithCoder:;
- (void)setPredicate:;
- (void).cxx_destruct;
- (id)initWithObjectType:predicate:;
- (id)initWithObjectName:predicate:;
- (unsigned long long)observerOptions;
- (void)setObserverOptions:;
+ (BOOL)supportsSecureCoding;
+ (id)querySpecificationWithObjectType:predicate:;
+ (id)querySpecificationWithObjectName:predicate:;
@end
