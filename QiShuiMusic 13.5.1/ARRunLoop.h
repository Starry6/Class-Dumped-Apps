@interface ARRunLoop : NSObject
@property (nonatomic) BOOL cancelled;
- (BOOL)cancelled;
- (void)setCancelled:;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (id)initWithName:;
- (void).cxx_destruct;
- (void)_startThread;
- (void)runOnRunLoop:;
- (void)_runloop_handleActivity:;
- (void)_runloop_pushAutoreleasePool;
- (void)_runloop_popAutoreleasePool;
@end
