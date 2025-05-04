@interface AWELivePrefetchWithImagesMethodImpl : AWELivePrefetchWithImagesMethod
@property (nonatomic) NSDictionary result;
@property (nonatomic) @? completion;
@property (nonatomic) UIView<IESLiveHybridContainerProtocol> hybridContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hybridContainer;
- (void)callWithParamModel:completionHandler:;
- (void)registerHandlerBlock:forMethod:authType:;
- (void)registerNewHandlerBlock:forMethod:authType:;
- (void)invokeEvent:params:;
- (id)modeToDict:;
- (void)setResult:;
- (id)completion;
- (void)setCompletion:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)result;
@end
