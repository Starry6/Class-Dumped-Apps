@interface ASCredentialProviderExtensionContext : NSExtensionContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelRequestWithError:;
- (void)provideCredentialWithoutUserInteractionForIdentity:;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareCredentialListForServiceIdentifiers:completionHandler:;
- (void)prepareInterfaceToProvideCredentialForIdentity:completionHandler:;
- (void)completeRequestWithSelectedCredential:completionHandler:;
- (void)completeExtensionConfigurationRequest;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
