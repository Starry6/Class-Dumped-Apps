@interface ReachabilityCallbacker : NSObject
- (void)dealloc;
- (void)_reachabilityChanged:;
- (void)clearListener;
- (id)initWithListener:queue:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
