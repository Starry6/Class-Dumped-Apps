@interface CalCancelableRunLoopPerformBlock : NSObject
@property (nonatomic) NSRunLoop runLoop;
@property (nonatomic) @? block;
- (id)block;
- (void)cancel;
- (void)_performBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)runLoop;
- (void)performAfterDelay:;
- (id)initWithBlock:inRunLoop:;
@end
