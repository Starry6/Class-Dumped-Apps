@interface AWESearchDynamicImageInfo : MTLModel
@property (nonatomic) NSString lightUrl;
@property (nonatomic) NSString lightMd5;
@property (nonatomic) NSString darkUrl;
@property (nonatomic) NSString darkMd5;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)darkUrl;
- (BOOL)containsImageCacheForTheme:;
- (id)getImageCacheForKeyForTheme:;
- (void)loadImageCacheForKeyForTheme:;
- (id)lightUrl;
- (id)lightMd5;
- (id)darkMd5;
- (id)imageCache;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
