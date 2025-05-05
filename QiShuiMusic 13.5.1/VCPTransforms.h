@interface VCPTransforms : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initImageTransform:transformedImageWidth:transformedImageHeight:;
- (id)cropAndScale:regionCrop:;
@end
