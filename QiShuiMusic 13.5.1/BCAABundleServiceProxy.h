@interface BCAABundleServiceProxy : NSProxy
@property (nonatomic) @ target;
@property (nonatomic) NSBundle bundle;
@property (nonatomic) Protocol proto;
- (id)initWithTarget:bundle:proto:;
- (BOOL)isNSObjectSelector:;
- (void)setProto:;
- (id)proto;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (id)bundle;
- (void).cxx_destruct;
- (id)target;
- (void)forwardInvocation:;
- (void)setBundle:;
@end
