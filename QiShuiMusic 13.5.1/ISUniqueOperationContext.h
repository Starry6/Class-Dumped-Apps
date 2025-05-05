@interface ISUniqueOperationContext : NSObject
- (BOOL)containsOperation:;
- (id)init;
- (id)uniqueOperationForKey:;
- (void)dealloc;
- (void)setUniqueOperation:forKey:;
- (void)addOperation:;
- (void)removeOperation:;
- (unsigned long long)countOfOperations;
@end
