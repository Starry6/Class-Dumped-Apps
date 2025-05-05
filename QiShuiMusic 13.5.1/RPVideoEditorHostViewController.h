@interface RPVideoEditorHostViewController : _UIRemoteViewController
@property (nonatomic) RPPreviewViewController previewViewController;
@property (nonatomic) RPVideoEditorExtensionHostContext hostContext;
- (void).cxx_destruct;
- (id)previewViewController;
- (void)setPreviewViewController:;
- (id)hostContext;
- (void)setHostContext:;
- (id)extensionDidFinishWithActivityTypes:;
@end
