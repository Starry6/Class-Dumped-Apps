@interface CUINamedVectorSVGImage : CUINamedVectorImage
@property (nonatomic) ^{CGSVGDocument=} svgDocument;
- (id)rasterizeImageUsingScaleFactor:forTargetSize:;
- (id)svgDocument;
@end
