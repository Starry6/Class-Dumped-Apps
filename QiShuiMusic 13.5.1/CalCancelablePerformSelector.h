@interface CalCancelablePerformSelector : NSObject
@property (nonatomic) @? block;
@property (nonatomic) NSRunLoop runloop;
- (id)block;
- (id)runloop;
- (void)cancel;
- (void)_performBlock:;
- (id)initWithBlock:;
- (void)setRunloop:;
- (void).cxx_destruct;
- (void)setBlock:;
- (void)performAfterDelay:;
@end
