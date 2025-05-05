@interface CIProSharpenEdges : CIFilter
- (id)outputImage;
- (id)_CIConvertRGBtoY;
- (id)_CIBlur1;
- (id)_CIBlur2;
- (id)_CIBlur4;
- (id)_CIEdgesPrep;
- (id)_CIFindEdges;
- (id)_CISharpenCombineEdges;
+ (id)customAttributes;
@end
