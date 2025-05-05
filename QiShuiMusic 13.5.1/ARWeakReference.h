@interface ARWeakReference : NSProxy
@property (nonatomic) @ object;
- (id)methodSignatureForSelector:;
- (id)initWithObject:;
- (void).cxx_destruct;
- (id)object;
- (void)forwardInvocation:;
+ (id)weakReferenceWithObject:;
+ (void)_noOp;
@end
