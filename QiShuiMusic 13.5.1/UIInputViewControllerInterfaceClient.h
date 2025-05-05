@interface UIInputViewControllerInterfaceClient : NSExtensionContext
@property (nonatomic) <_UIIVCInterface> forwardingInterface;
- (void)dealloc;
- (void).cxx_destruct;
- (id)responseDelegate;
- (void)_tearDownRemoteService;
- (void)_handleInputViewControllerState:;
- (void)setForwardingInterface:;
- (id)forwardingInterface;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
