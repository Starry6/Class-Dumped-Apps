@interface QLCustomItemViewController : UIViewController
@property (nonatomic) UIView shareSheetPresentationView;
@property (nonatomic) <QLCustomItemViewControllerHost> hostViewControllerProxy;
@property (nonatomic) NSDictionary previewOptions;
@property (nonatomic) BOOL isShareEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFullScreen:;
- (void).cxx_destruct;
- (void)setPreviewOptions:;
- (id)previewOptions;
- (void)setAppearance:animated:;
- (void)getFrameWithCompletionBlock:;
- (void)dismissPreviewController;
- (void)presentActivityViewControllerFromView:;
- (void)presentActivityViewControllerFromView:withURL:;
- (void)didDismissActivityViewController;
- (void)forwardMessageToHost:completionHandler:;
- (void)presentationModeDidChange:animated:;
- (BOOL)isShareEnabled;
- (void)setIsShareEnabled:;
- (id)shareSheetPresentationView;
- (void)setShareSheetPresentationView:;
- (id)hostViewControllerProxy;
- (void)setHostViewControllerProxy:;
@end
