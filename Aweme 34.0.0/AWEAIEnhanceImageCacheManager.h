@interface AWEAIEnhanceImageCacheManager : NSObject
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) NSMutableDictionary cacheMap;
- (id)currentProject;
- (id)currentCacheImagePath;
- (id)updateCacheImageWithResultPath:;
- (id)cacheFileName;
- (id)repository;
- (id)cacheMap;
- (void)setCacheMap:;
- (void).cxx_destruct;
- (void)setRepository:;
- (id)initWithRepository:;
+ (id)rootPath;
+ (void)clean;
@end
