@interface LSSafeMutableArray : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> concurrentQueue;
@property (nonatomic) NSMutableArray arr;
- (void)setArr:;
- (id)firstObject;
- (id)init;
- (void)dealloc;
- (BOOL)containsObject:;
- (void)insertObject:atIndex:;
- (id)array;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (id)concurrentQueue;
- (void)addObject:;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:;
- (void)removeObject:;
- (void)setConcurrentQueue:;
- (void)removeLastObject;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:;
- (unsigned long long)count;
- (id)lastObject;
- (id)initWithCapacity:;
- (id)arr;
@end
