@interface AWEECWebImageServiceNewImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)preloadImageWithURLArray:bizTag:sceneTag:options:logExtra:perfBlock:completion:;
+ (void)registerLogAppendDictionary:withBizTag:;
+ (void)cancelRequestInImageView:;
+ (id)getPreviewImageAtCacheWithURL:;
+ (id)getWebImageAtCacheWithURL:;
+ (void)imageView:setPreviewImageWithURL:;
+ (void)preconnectHost:keepAlive:;
+ (void)imageView:setImageWithURLArray:placeholder:bizTag:sceneTag:preferredSize:options:logExtra:perfBlock:completion:;
+ (void)preloadImageWithURL:bizTag:sceneTag:options:logExtra:perfBlock:completion:;
+ (void)requestImageWithURLArray:bizTag:sceneTag:preferredSize:options:logExtra:perfBlock:completion:;
@end
