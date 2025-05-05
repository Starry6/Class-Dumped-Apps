@interface CUINamedVectorImage : CUINamedLookup
@property (nonatomic) double scale;
@property (nonatomic) ^{CGPDFDocument=} pdfDocument;
- (id)pdfDocument;
- (id)rasterizeImageUsingScaleFactor:forTargetSize:;
- (double)scale;
@end
