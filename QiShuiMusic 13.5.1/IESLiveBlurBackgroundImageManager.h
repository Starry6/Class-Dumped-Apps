@interface IESLiveBlurBackgroundImageManager : NSObject
+ (BOOL)enableServerBlurBackgroundImage;
+ (id)blurBackgroundImageCacheForRoomId:;
+ (id)blurImageCacheDict;
+ (id)blurImageCacheKeyArray;
+ (void)cacheBlurImageWithRoomId:blurImage:;
+ (void)preLoadBlurBackgroundImageWithImageUrl:roomId:;
@end
