@interface UIKeyboardInputManagerMux : NSObject
@property (nonatomic) <TIKeyboardInputManager> systemInputManager;
@property (nonatomic) BOOL hasSystemInputManager;
@property (nonatomic) <_UIIVCResponseDelegateImpl> responseDelegate;
- (void)removeClient:;
- (BOOL)respondsToSelector:;
- (void)addClient:;
- (void)setSystemInputManager:;
- (void)setResponseDelegate:;
- (id)methodSignatureForSelector:;
- (void)releaseConnectedClients;
- (id)systemInputManager;
- (BOOL)conformsToProtocol:;
- (BOOL)hasSystemInputManager;
- (BOOL)_systemHasKbd;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (void)removeAllClients;
- (void)forwardInvocation:;
- (id)responseDelegate;
- (void)updateClientResponseDelegatesWithDelegate:;
- (void)setSystemInputManagerFromTextInputTraits:autofillMode:;
+ (id)sharedInstance;
+ (BOOL)instancesRespondToSelector:;
@end
