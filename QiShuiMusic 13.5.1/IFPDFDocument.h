@interface IFPDFDocument : NSObject
@property (nonatomic) ^{CGPDFDocument=} pdfDocument;
@property (nonatomic) NSURL url;
@property (nonatomic) Q numberOfPages;
- (id)url;
- (void)dealloc;
- (id)initWithURL:;
- (id)pdfDocument;
- (unsigned long long)numberOfPages;
- (void).cxx_destruct;
- (id)pageAtIndex:;
- (id)firstPage;
- (void)setPdfDocument:;
@end
