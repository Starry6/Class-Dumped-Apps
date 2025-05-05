@interface BDXLazyLoadProxy : NSProxy
@property (nonatomic) NSMutableArray methodsChain;
@property (nonatomic) NSHashTable weakMethodsChain;
@property (nonatomic) # targetClass;
@property (nonatomic) @? selectorFilter;
- (void)applyToTarget:;
- (void)applyToTarget:clean:;
- (id)initWithTargetClass:;
- (id)initWithTargetClass:filter:;
- (id)methodsChain;
- (id)selectorFilter;
- (void)setMethodsChain:;
- (void)setSelectorFilter:;
- (void)setWeakMethodsChain:;
- (id)weakMethodsChain;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (Class)targetClass;
- (void)forwardInvocation:;
- (void)setTargetClass:;
- (void)clean;
@end
