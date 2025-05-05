@interface IESLiveInteractiveLinkMulticastDelegate : NSObject
@property (nonatomic) Protocol protocol;
@property (nonatomic) NSHashTable delegates;
- (id)allDelegates;
- (id)descriptionForSelecctor:inProtocol:;
- (id)initWithProtocol:shouldRetain:;
- (id)signatureForSelector:inProtocol:;
- (id)protocol;
- (void)addDelegate:;
- (void)setProtocol:;
- (id)initWithProtocol:;
- (BOOL)respondsToSelector:;
- (id)delegates;
- (void)setDelegates:;
- (void)dealloc;
- (void)removeDelegate:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
@end
