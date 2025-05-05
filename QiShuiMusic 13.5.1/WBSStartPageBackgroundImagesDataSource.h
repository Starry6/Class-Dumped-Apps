@interface WBSStartPageBackgroundImagesDataSource : NSObject
@property (nonatomic) q itemCount;
- (long long)itemCount;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)imageThumbnailWithItemIndex:completion:;
- (id)imageURLAndLuminanceWithItemIndex:;
- (long long)indexOfBackgroundImageWithName:;
- (id)initWithBundle:localCachesDirectory:;
- (id)initWithBuiltInImageURLs:localCachesDirectory:;
- (id)_thumbnailURLWithItemIndex:;
- (id)_createThumbnail:imageSource:;
@end
