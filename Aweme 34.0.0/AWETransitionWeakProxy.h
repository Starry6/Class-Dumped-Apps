@interface AWETransitionWeakProxy : NSProxy
@property (nonatomic) @ target;
- (id)target;
- (id)initWithTarget:;
- (void).cxx_destruct;
+ (id)proxyWithTarget:;
@end
