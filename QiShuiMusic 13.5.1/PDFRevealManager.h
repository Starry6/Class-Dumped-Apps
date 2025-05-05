@interface PDFRevealManager : NSObject
- (void).cxx_destruct;
- (void)reset;
- (id)initWithPDFView:;
- (id)PDFRVPresentingContextAtPoint:;
- (id)PDFRVPresenter;
- (id)PDFRVDocumentContextForPage:;
@end
