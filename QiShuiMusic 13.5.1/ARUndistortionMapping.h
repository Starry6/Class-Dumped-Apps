@interface ARUndistortionMapping : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithImageSize:;
- (void)createVImageMappingIfNeededForImage:;
@end
