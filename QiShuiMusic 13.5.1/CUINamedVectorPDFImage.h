@interface CUINamedVectorPDFImage : CUINamedVectorImage
@property (nonatomic) ^{CGPDFDocument=} pdfDocument;
- (id)pdfDocument;
- (id)rasterizeImageUsingScaleFactor:forTargetSize:;
@end
