@interface AWEFeedImageManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)getCacheName;
+ (id)feedImageCacheConfig;
+ (void)updateCacheNameWithScene:;
+ (id)getWebImageConfig;
+ (BOOL)enableCache;
@end
