@interface CPLRejectedRecords : NSObject
- (id)init;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)recordWithScopedIdentifier:;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (void)removeRejectedRecordsWithScopedIdentifiers:;
- (void)enumerateRecordsAndReasonsUsingBlock:;
- (BOOL)rejectsTheSameRecordsAs:;
- (id)rejectedDescriptions;
@end
