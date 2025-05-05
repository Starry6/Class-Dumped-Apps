@interface FMConcurrentMutableArray : NSObject
@property (nonatomic) NSMutableArray underlyingArray;
@property (nonatomic) FMReadWriteLock lock;
@property (nonatomic) Q count;
- (id)init;
- (void)insertObject:atIndex:;
- (id)objectAtIndexedSubscript:;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (void)addObject:;
- (id)lock;
- (id)initWithArray:;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)setLock:;
- (id)nativeArray;
- (id)underlyingArray;
- (void)setUnderlyingArray:;
@end
