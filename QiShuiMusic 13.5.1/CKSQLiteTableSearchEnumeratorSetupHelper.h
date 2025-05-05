@interface CKSQLiteTableSearchEnumeratorSetupHelper : NSObject
@property (nonatomic) NSArray fetchedProperties;
@property (nonatomic) NSArray searchProperties;
@property (nonatomic) NSPredicate searchPredicate;
@property (nonatomic) NSNumber limit;
@property (nonatomic) NSNumber offset;
- (id)limit;
- (void)setOffset:;
- (void)setSearchProperties:;
- (id)offset;
- (void)setLimit:;
- (void)setFetchedProperties:;
- (void)setupStatement:;
- (void).cxx_destruct;
- (void)orderDescendingByProperty:;
- (void)setSearchPredicate:;
- (id)searchPredicate;
- (void)orderAscendingByProperty:;
- (id)searchProperties;
- (id)fetchedProperties;
@end
