@interface SOHostExtensionContext : NSExtensionContext
@property (nonatomic) SOExtension contextExtension;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)presentAuthorizationViewControllerWithHints:completion:;
- (void)requestReauthenticationWithCompletion:;
- (void).cxx_destruct;
- (void)authorizationDidCompleteWithCredential:error:;
- (void)openURL:completionHandler:;
- (void)canOpenURL:completionHandler:;
- (id)remoteContextWithError:;
- (id)contextExtension;
- (void)setContextExtension:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
