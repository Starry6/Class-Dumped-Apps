@interface AWEProfileImageManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)getCacheName;
+ (void)updateCacheNameWithScene:;
+ (id)getWebImageConfig;
+ (id)profileImageCacheConfig;
+ (BOOL)enableCache;
@end
