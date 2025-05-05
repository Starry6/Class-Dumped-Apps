@interface PDFPageIconLayer : CALayer
@property (nonatomic) PDFDocument document;
@property (nonatomic) NSInteger pageIndex;
- (void)setNeedsUpdate;
- (void)setDocument:;
- (void)setFrame:;
- (id)initWithSize:;
- (id)document;
- (void).cxx_destruct;
- (int)pageIndex;
- (void)updateAsPageIndex:forDocument:;
@end
