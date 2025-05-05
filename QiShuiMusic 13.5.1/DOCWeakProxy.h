@interface DOCWeakProxy : NSObject
@property (nonatomic) NSObject target;
- (id)initWithTarget:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)forwardingTargetForSelector:;
@end
