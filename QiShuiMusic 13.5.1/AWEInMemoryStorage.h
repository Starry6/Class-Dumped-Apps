@interface AWEInMemoryStorage : AWEStorage
- (id)inMemory;
- (BOOL)removeAllObjectsWithError:;
- (BOOL)setObject:forKey:err:;
- (id)initWithDomain:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
