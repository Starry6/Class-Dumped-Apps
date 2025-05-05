@interface PLAtomicObject : NSObject
- (id)initWithObject:;
- (void)invalidateWithHandler:;
- (void).cxx_destruct;
- (void)atomicallyPerformBlockAndWait:;
@end
