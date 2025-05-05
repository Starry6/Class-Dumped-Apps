@interface NSFileWatcher : NSObject
- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithQueue:auditToken:;
- (void)handleFSEventPath:flags:id:;
- (void)setObserver:;
- (void)watchItem;
- (void)_coalesceSubitemObservations;
- (void)setLastObservedEventID:;
- (void)unsettle;
- (void)setURL:;
- (void)settle;
@end
