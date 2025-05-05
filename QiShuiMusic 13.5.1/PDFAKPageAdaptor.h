@interface PDFAKPageAdaptor : NSObject
@property (nonatomic) PDFPage pdfPage;
@property (nonatomic) AKPageModelController akPageModelController;
- (void)dealloc;
- (void)teardown;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)_teardown;
- (id)pdfPage;
- (id)initWithPDFPage:;
- (id)akPageModelController;
- (id)initWithPDFPage:pageModelController:;
- (void)pdfPage:didAddAnnotation:;
- (void)pdfPage:didRemoveAnnotation:;
- (void)pdfPageWasRotated:;
- (void)initializeExifAndScaleOnAnnotation:;
- (void)_startObservingPageModel;
- (void)_stopObservingPageModel;
- (void)_annotationsWereRemoved:;
- (void)_annotationsWereAdded:;
@end
