@interface SKMutableTexture : SKTexture
- (void)dealloc;
- (id)initWithSize:;
- (id)description;
- (id)_backingTexture;
- (id)initWithSize:ioSurfaceBacked:pixelFormat:;
- (id)initWithSize:pixelFormat:;
- (void)modifyPixelDataWithBlock:;
+ (id)mutableTextureWithSize:;
@end
