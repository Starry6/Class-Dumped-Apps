@interface BUThreadSafeMutableArray : NSMutableArray
@property (nonatomic) NSObject<OS_dispatch_queue> syncQueue;
@property (nonatomic) NSMutableArray array;
- (id)syncQueue;
- (id)init;
- (void)dealloc;
- (BOOL)containsObject:;
- (void)insertObject:atIndex:;
- (id)array;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (id)initWithCoder:;
- (void)setSyncQueue:;
- (void)addObject:;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:;
- (void)removeObject:;
- (id)initCommon;
- (id)initWithContentsOfFile:;
- (void)removeLastObject;
- (id)initWithObjects:count:;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (void)setArray:;
- (id)objectEnumerator;
- (unsigned long long)count;
- (id)initWithCapacity:;
@end
