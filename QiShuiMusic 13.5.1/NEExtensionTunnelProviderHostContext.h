@interface NEExtensionTunnelProviderHostContext : NEExtensionProviderHostContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)establishIPCWithCompletionHandler:;
- (void)didSetReasserting:;
- (void)setTunnelConfiguration:completionHandler:;
- (void)handleIPCDetached;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
