@interface AWEACCMusicNetServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestMusicItemWithID:completion:;
- (void)requestMusicItemWithID:basicParams:completion:;
- (void)requestMusicItemWithID:additionalParams:completion:;
- (void)fetchImageMusicBeatsLocalURLWithMusic:withProgress:completion:;
- (BOOL)isMusicSupportBeats:;
- (id)fetchCachedMusicWithID:cacheKey:;
- (id)fetchCachedMusicListWithCacheKey:;
- (BOOL)cacheMusicModel:cacheKey:;
- (void)cacheMusicList:cacheKey:;
- (void)fetchDefaultMusicListWithURLGoup:callback:;
- (void)fetchAIFramesUploadAuthkeyWithCallback:;
- (void)requestAIRecommendMusicListWithZipURI:count:otherParams:completion:;
- (void)requestAIRecommendMusicListWithZipURI:count:otherParams:loadMoreCompletion:;
- (void)requestWithScene:cursor:region:count:completion:;
- (void)requestWithCursor:count:noDuplicate:otherParams:useRecomByVideoInterface:completion:;
- (void)requestCollectingMusicsWithCursor:count:channelID:completion:;
- (void)requestRecentMusicDetailWithMusicList:scene:completion:;
- (void)fetchMusicListWithURL:params:completion:;
+ (void)requestAIRecommendMusicListWithZipURI:count:otherParams:completion:;
+ (void)requestWithCursor:count:noDuplicate:otherParams:useRecomByVideoInterface:completion:;
+ (void)requestRecentMusicDetailWithMusicList:scene:completion:;
+ (void)requestRecommendMusicListWithZipURI:count:parameters:completion:;
@end
