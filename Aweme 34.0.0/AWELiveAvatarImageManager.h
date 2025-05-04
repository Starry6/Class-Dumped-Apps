@interface AWELiveAvatarImageManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeMemoryCache;
- (id)avatarImageCacheName;
+ (id)getCacheName;
+ (id)getWebImageConfig;
+ (void)registerWebImage;
+ (BOOL)enableCache;
@end
