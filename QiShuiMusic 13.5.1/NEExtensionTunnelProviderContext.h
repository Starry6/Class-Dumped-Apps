@interface NEExtensionTunnelProviderContext : NEExtensionProviderContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelWithError:;
- (void).cxx_destruct;
- (void)setConfiguration:extensionIdentifier:;
- (void)establishIPCWithCompletionHandler:;
- (void)didSetReasserting:;
- (void)setTunnelConfiguration:completionHandler:;
- (void)handleIPCDetached;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
