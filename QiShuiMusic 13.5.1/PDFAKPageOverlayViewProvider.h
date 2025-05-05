@interface PDFAKPageOverlayViewProvider : NSObject
@property (nonatomic) BOOL shouldVerticallyFlipOverlayViews;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)pdfView:overlayViewForPage:;
- (void)pdfView:willEndDisplayingOverlayView:forPage:;
- (void)setupGestureRecognizersForView:;
- (void)teardownGestureRecognizersForView:;
- (BOOL)shouldVerticallyFlipOverlayViews;
- (id)initWithPDFDocument:pdfView:andAKController:;
- (void)overlayViewInstalledForPage:;
- (void)overlayViewWillBeUninstalledForPage:;
@end
