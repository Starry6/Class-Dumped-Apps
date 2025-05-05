@interface CUIPSDLayerRef : CUIPSDLayerBaseRef
- (void)dealloc;
- (id)gradient;
- (id)image;
- (id)initWithImageRef:layerIndex:;
- (id)createCGImage;
- (id)imageIsZeroSizeImage:;
- (id)imageFromSlice:;
- (id)imageFromSlice:isEmptyImage:;
- (id)patternFromSlice:;
- (id)patternFromSlice:isZeroSizeImage:;
- (id)maskFromSlice:;
- (id)fillSample;
- (id)layerEffects;
- (id)colorFill;
@end
