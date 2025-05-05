@interface PHPersistentChangeFetchResult : NSObject
- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (id)_managedObjectContext;
- (id)initWithTransactions:options:photoLibrary:;
- (void)enumerateChangesWithBlock:;
- (id)iteratorForPersistentChangeEnumeration;
- (id)nextPersistentChangeWithIterator:;
- (void)enumeratePHChangesWithBlock:;
+ (id)fetchResultWithToken:options:photoLibrary:error:;
@end
