@interface PDFOverlayViewsController_ios : PDFOverlayViewsController
- (id)initWithPDFView:;
- (void)_installOverlayForPageView:ofPage:atIndex:;
- (void)_uninstallOverlayForPageView:ofPage:atIndex:;
@end
