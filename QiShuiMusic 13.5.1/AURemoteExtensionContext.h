@interface AURemoteExtensionContext : NSExtensionContext
@property (nonatomic) AUAudioUnitViewService viewService;
- (id)viewService;
- (id)iOSViewController;
- (id)initWithInputItems:listenerEndpoint:contextUUID:;
- (void)requestViewControllerWithCompletionHandler:;
- (void)open:;
- (void).cxx_destruct;
- (void)setViewService:;
- (id)forwardingTargetForSelector:;
+ (BOOL)instancesRespondToSelector:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (BOOL)conformsToProtocol:;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
