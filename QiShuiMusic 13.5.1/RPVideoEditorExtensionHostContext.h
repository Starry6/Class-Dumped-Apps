@interface RPVideoEditorExtensionHostContext : NSExtensionContext
@property (nonatomic) RPVideoEditorHostViewController hostViewController;
- (void).cxx_destruct;
- (id)hostViewController;
- (void)setHostViewController:;
- (id)extensionObjectProxy;
- (id)extensionDidFinishWithActivityTypes:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
