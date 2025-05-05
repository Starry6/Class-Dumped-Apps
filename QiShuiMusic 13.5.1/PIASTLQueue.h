@interface PIASTLQueue : NSObject
- (id)init;
- (void)enqueue:;
- (void)dealloc;
- (id)dequeue;
- (BOOL)empty;
- (void)clear;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:;
- (unsigned long long)count;
@end
