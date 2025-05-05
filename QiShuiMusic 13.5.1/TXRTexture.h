@interface TXRTexture : NSObject
@property (nonatomic)  dimensions;
@property (nonatomic) BOOL cubemap;
@property (nonatomic) Q pixelFormat;
@property (nonatomic) Q alphaInfo;
@property (nonatomic) NSArray mipmapLevels;
- (id)dimensions;
- (void).cxx_destruct;
- (unsigned long long)pixelFormat;
- (id)copyWithZone:;
- (id)initWithDataSourceProvider:;
- (BOOL)cubemap;
- (unsigned long long)alphaInfo;
- (BOOL)exportToURL:error:;
- (id)initWithContentsOfURL:bufferAllocator:options:error:;
- (id)initWithDimensions:pixelFormat:alphaInfo:mipmapLevelCount:arrayLength:cubemap:bufferAllocator:;
- (id)initWithData:bufferAllocator:options:error:;
- (id)exportToAssetCatalogWithName:location:error:;
- (void)reformat:gammaDegamma:bufferAllocator:error:;
- (void)generateMipmapsForRange:filter:error:;
- (id)copyWithPixelFormat:options:bufferAllocator:;
- (id)mipmapLevels;
@end
