@interface FMWeakForwardingContainer : NSObject
@property (nonatomic) NSObject target;
- (BOOL)respondsToSelector:;
- (id)initWithTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)forwardingTargetForSelector:;
@end
