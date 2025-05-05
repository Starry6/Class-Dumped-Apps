@interface MTLTextureDescriptor : NSObject
@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) Q resourceIndex;
@property (nonatomic) Q textureType;
@property (nonatomic) Q pixelFormat;
@property (nonatomic) Q width;
@property (nonatomic) Q height;
@property (nonatomic) Q depth;
@property (nonatomic) Q mipmapLevelCount;
@property (nonatomic) Q sampleCount;
@property (nonatomic) Q arrayLength;
@property (nonatomic) Q resourceOptions;
@property (nonatomic) Q cpuCacheMode;
@property (nonatomic) Q storageMode;
@property (nonatomic) Q hazardTrackingMode;
@property (nonatomic) Q usage;
@property (nonatomic) BOOL allowGPUOptimizedContents;
@property (nonatomic) q compressionType;
@property (nonatomic) {?=CCCC} swizzle;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)texture2DDescriptorWithPixelFormat:width:height:mipmapped:;
+ (id)textureBufferDescriptorWithPixelFormat:width:resourceOptions:usage:;
+ (id)textureCubeDescriptorWithPixelFormat:size:mipmapped:;
@end
