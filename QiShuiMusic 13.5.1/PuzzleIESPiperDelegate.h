@interface PuzzleIESPiperDelegate : NSProxy
@property (nonatomic) <IESHYHybridViewProtocol> hybridView;
@property (nonatomic) @? willRegisterBlock;
@property (nonatomic) PuzzleIESPiperDelegateMethodFactory methodFactory;
@property (nonatomic) @ target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)bridgeEngine:skipMatchBridgeWithMessage:;
- (id)hybridView;
- (id)initWithTarget:hybridView:;
- (id)methodFactory;
- (void)setHybridView:;
- (void)setMethodFactory:;
- (void)setWillRegisterBlock:;
- (id)willRegisterBlock;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)target;
- (void)forwardInvocation:;
+ (id)weakProxyWithTarget:hybridView:;
@end
