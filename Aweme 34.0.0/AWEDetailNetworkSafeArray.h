@interface AWEDetailNetworkSafeArray : NSObject
@property (nonatomic) NSMutableArray array;
- (id)syncQueue;
- (void)insertObject:atIndex:;
- (id)init;
- (id)array;
- (void)removeObjectAtIndex:;
- (unsigned long long)count;
- (void)setArray:;
- (void).cxx_destruct;
- (id)objectAtIndex:;
- (void)removeObject:;
- (void)addObject:;
- (BOOL)containsObject:;
@end
