@interface LAWeakBox : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (id)initWithReceiver:;
@end
