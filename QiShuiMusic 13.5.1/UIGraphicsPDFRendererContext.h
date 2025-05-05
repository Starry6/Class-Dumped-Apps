@interface UIGraphicsPDFRendererContext : UIGraphicsRendererContext
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} documentBounds;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} pageBounds;
@property (nonatomic) BOOL inPage;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} pdfContextBounds;
- (id)documentBounds;
- (BOOL)inPage;
- (id)pageBounds;
- (void)beginPage;
- (id)pdfContextBounds;
- (void)setPageBounds:;
- (void)updateAuxInfo:;
- (void)beginPageWithBounds:pageInfo:;
- (void)setDestinationWithName:forRect:;
- (void)setInPage:;
- (void)addDestinationWithName:atPoint:;
- (void)setDocumentBounds:;
- (void)setURL:forRect:;
@end
