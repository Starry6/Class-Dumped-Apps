@interface AXMImageNode : AXMSourceNode
- (void)produceImage:;
- (void)triggerWithImage:options:cacheKey:resultHandler:;
- (void)triggerWithImageURL:assetLocalIdentifier:photoLibraryURL:options:cacheKey:resultHandler:;
- (void)triggerWithImageURL:options:cacheKey:resultHandler:;
- (void)triggerWithPixelBuffer:exifOrientation:options:cacheKey:resultHandler:;
- (void)triggerWithImageAssetLocalIdentifier:photoLibraryURL:options:cacheKey:resultHandler:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
