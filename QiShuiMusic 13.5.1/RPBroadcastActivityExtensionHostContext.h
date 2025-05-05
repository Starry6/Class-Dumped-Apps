@interface RPBroadcastActivityExtensionHostContext : NSExtensionContext
@property (nonatomic) RPBroadcastActivityHostViewController hostViewController;
- (void).cxx_destruct;
- (id)hostViewController;
- (void)setHostViewController:;
- (id)extensionObjectProxy;
- (id)extensionDidFinishWithLaunchURL:broadcastURL:extensionBundleID:cancelled:;
- (id)presentationInfoWithCompletion:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
