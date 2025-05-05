@interface NRBypassQueue : NSObject
- (void)enqueueBlock:;
- (id)init;
- (void)suspend;
- (void)resume;
- (void)enqueueBypassBlockAsync:;
- (void).cxx_destruct;
- (void)enqueueBlockAsync:;
- (void)invalidate;
- (void)enqueueBypassBlock:;
@end
