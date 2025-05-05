@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub
@property (nonatomic) _UIInputViewControllerState cachedState;
@property (nonatomic) <_UIIVCInterface> forwardingInterface;
@property (nonatomic) <_UIIVCResponseDelegate> responseDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)syncToKeyboardState:completionHandler:;
- (void)setResponseDelegate:;
- (void).cxx_destruct;
- (id)responseDelegate;
- (void)_tearDownRemoteService;
- (void)_handleInputViewControllerState:;
- (void)setForwardingInterface:;
- (id)forwardingInterface;
- (id)_cachedState;
- (void)_setCachedState:;
@end
