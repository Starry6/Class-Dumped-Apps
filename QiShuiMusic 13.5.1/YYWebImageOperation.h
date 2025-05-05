@interface YYWebImageOperation : NSOperation
@property (nonatomic) NSOperation<YYWebImageOperation> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRequest:options:cache:cacheKey:progress:transform:completion:;
- (BOOL)respondsToSelector:;
- (id)init;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)target;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
+ (void)setKernelClass:;
+ (Class)kernelClass;
@end
