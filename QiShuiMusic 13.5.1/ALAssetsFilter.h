@interface ALAssetsFilter : NSObject
@property (nonatomic) ALAssetsFilterInternal internal;
- (void)setInternal:;
- (id)init;
- (void)dealloc;
- (id)internal;
- (int)_filter;
- (void)_setFilter:;
+ (id)allAssets;
+ (id)allPhotos;
+ (id)allVideos;
@end
