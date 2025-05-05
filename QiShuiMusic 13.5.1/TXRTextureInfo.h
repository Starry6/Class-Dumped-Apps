@interface TXRTextureInfo : NSObject
@property (nonatomic) Q alphaInfo;
@property (nonatomic) Q pixelFormat;
@property (nonatomic)  dimensions;
@property (nonatomic) Q mipmapLevelCount;
@property (nonatomic) Q arrayLength;
@property (nonatomic) BOOL cubemap;
@property (nonatomic) NSError error;
- (unsigned long long)arrayLength;
- (id)dimensions;
- (unsigned long long)mipmapLevelCount;
- (void)setPixelFormat:;
- (void)setMipmapLevelCount:;
- (id)error;
- (void).cxx_destruct;
- (unsigned long long)pixelFormat;
- (void)setArrayLength:;
- (void)setDimensions:;
- (void)setAlphaInfo:;
- (BOOL)cubemap;
- (void)setCubemap:;
- (unsigned long long)alphaInfo;
@end
