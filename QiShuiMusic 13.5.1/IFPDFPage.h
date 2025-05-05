@interface IFPDFPage : NSObject
@property (nonatomic) ^{CGPDFPage=} pdfPage;
- (void)dealloc;
- (id)imageForSize:scale:;
- (id)initWithCGPDFPage:;
- (id)pdfPage;
- (void)setPdfPage:;
@end
