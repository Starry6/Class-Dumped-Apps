@interface IESLiveBaseAdapter : NSObject
@property (nonatomic) @ target;
@property (nonatomic) @ weakTarget;
- (void)liveAdapterUnrecognizedSeletor:;
- (id)attachingDIContext;
- (void)didSetAttachingDIContext;
- (id)targetInstance;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (id)target;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (id)weakTarget;
- (void)setWeakTarget:;
+ (id)adapterWithProtocolName:;
+ (id)adapterWithTarget:;
+ (id)targetProtocol;
+ (BOOL)weakTargetEnable;
@end
