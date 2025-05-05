@interface EFCoalescer : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoalescingAction:;
- (void)coalesceValue:;
- (void)_handleCoalesceEvent;
@end
