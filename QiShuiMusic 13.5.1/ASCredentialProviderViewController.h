@interface ASCredentialProviderViewController : UIViewController
@property (nonatomic) ASCredentialProviderExtensionContext extensionContext;
- (id)extensionContext;
- (void)prepareCredentialListForServiceIdentifiers:;
- (void)provideCredentialWithoutUserInteractionForIdentity:;
- (void)prepareInterfaceToProvideCredentialForIdentity:;
- (void)prepareInterfaceForExtensionConfiguration;
@end
