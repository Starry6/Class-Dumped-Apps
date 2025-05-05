@interface AUHostExtensionContext : NSExtensionContext
@property (nonatomic) NSExtension extension;
@property (nonatomic) AUHostDelegate delegate;
@property (nonatomic) NSXPCConnection xpcConnection;
- (void)setExtension:;
- (void)dealloc;
- (void)setDelegate:;
- (id)extension;
- (id)initWithInputItems:listenerEndpoint:contextUUID:;
- (BOOL)conformsToProtocol:;
- (id)delegate;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (id)_derivedExtensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (BOOL)conformsToProtocol:;
+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
