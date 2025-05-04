@interface AWEIMChatBgImageCacheManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadIfNeededBgImageURLsWithImageURI:skey:complete:;
- (void)cachedChatBgImgURLFromURI:skey:completion:;
- (void)fetchImageURLListWithURI:complete:;
+ (id)sharedIntance;
@end
