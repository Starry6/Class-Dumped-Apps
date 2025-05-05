@interface ABSPersonFetchRequest : NSObject
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) NSArray additionalKeysToFetch;
@property (nonatomic) I sortOrder;
- (unsigned int)sortOrder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)predicate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPredicate:additionalKeysToFetch:sortOrder:;
- (id)descriptionOfSortOrder;
- (id)descriptionOfKeysToFetch;
- (id)additionalKeysToFetch;
+ (BOOL)supportsSecureCoding;
@end
