@interface CMPocketStateQueueBlockPair : NSObject
- (void)dealloc;
- (id)initWithQueue:andBlock:;
- (void)dispatchWithState:andError:;
@end
