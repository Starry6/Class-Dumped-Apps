@interface PDFScrollView : UIScrollView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollViewDidEndZooming:withView:atScale:;
- (void)scrollViewDidEndDecelerating:;
- (void)updateLayout;
- (id)viewForZoomingInScrollView:;
- (void)dealloc;
- (void)setDocument:;
- (void)setFrame:;
- (void)scrollViewDidScroll:;
- (id)initWithFrame:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewWillBeginZooming:withView:;
- (void)setBounds:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void).cxx_destruct;
- (void)setContentInset:;
- (void)scrollViewDidZoom:;
- (void)centerAlign;
- (void)setPDFView:;
- (id)pdfDocumentView;
- (void)setForcesTopAlignment:;
@end
