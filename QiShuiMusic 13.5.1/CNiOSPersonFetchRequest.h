@interface CNiOSPersonFetchRequest : NSObject
@property (nonatomic) <CNiOSContactPredicate> predicate;
@property (nonatomic) BOOL shouldSort;
@property (nonatomic) Q options;
@property (nonatomic) I sortOrder;
@property (nonatomic) I sortOrderIncludingNone;
@property (nonatomic) NSArray keysToFetch;
@property (nonatomic) BOOL unifiedFetch;
@property (nonatomic) Q batchSize;
@property (nonatomic) CNManagedConfiguration managedConfiguration;
- (unsigned int)sortOrder;
- (id)managedConfiguration;
- (id)keysToFetch;
- (unsigned int)sortOrderIncludingNone;
- (BOOL)unifiedFetch;
- (unsigned long long)batchSize;
- (id)predicate;
- (unsigned long long)options;
- (id)initWithPredicate:keysToFetch:shouldSort:sortOrder:unifiedFetch:batchSize:managedConfiguration:options:;
- (void).cxx_destruct;
- (BOOL)shouldSort;
+ (id)fetchRequestFromCNFetchRequest:managedConfiguration:error:;
+ (id)validatePredicate:error:;
+ (long long)resolvedSortOrderFromContactSortOrder:;
+ (id)effectivePredicate:;
@end
