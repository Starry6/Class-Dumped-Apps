@interface BNFoundation.BNWeakProxy : NSObject
- (BOOL)respondsToSelector:;
- (id)init;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
@end
