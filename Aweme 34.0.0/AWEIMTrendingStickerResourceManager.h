@interface AWEIMTrendingStickerResourceManager : HTSService
@property (nonatomic) AWEIMEmoticonThemeModel trendingThemeModel;
@property (nonatomic) AWEIMEmoticonThemeModel recentThemeModel;
@property (nonatomic) NSArray memoryCacheCommentTrendingStickers;
@property (nonatomic) double imLastRequestTime;
@property (nonatomic) double imRequestInterval;
@property (nonatomic) Q imRequestCount;
@property (nonatomic) NSArray imNextTrendingStickers;
@property (nonatomic) AWEIMEmoticonThemeModel innerTrendingThemeModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)replaceNextRemoteListIfNeeded;
- (void)updateRemoteListWithContext:;
- (void)updateRemoteListWithContext:completion:;
- (void)updateRemoteListWithContext:notification:completion:;
- (void)updateCommentTrendingThemeModelWithGroupID:completion:;
- (id)requestNewCommentTrendingThemeModel;
- (void)fetchNextRemoteListIfNeededWithContext:;
- (void)updateWithRemoteListRequestConfig;
- (void)processStickModel:error:notification:;
- (void)resetRecentThemeModel;
- (id)trendingThemeModel;
- (id)innerTrendingThemeModel;
- (id)changeResponseToEmotionModel:logID:;
- (id)changeResponseModel:;
- (double)imLastRequestTime;
- (double)imRequestInterval;
- (void)p_fetchRemoteListWithContext:notification:completion:;
- (void)processStickModel:error:notification:completion:;
- (void)setImLastRequestTime:;
- (void)p_processStickModel:error:notification:completion:;
- (void)p_updateTrendingCacheList:;
- (id)p_getTrendingCacheList;
- (unsigned long long)trendingStickersCount;
- (void)setImNextTrendingStickers:;
- (void)setMemoryCacheCommentTrendingStickers:;
- (id)memoryCacheCommentTrendingStickers;
- (id)recentThemeModel;
- (void)setTrendingThemeModel:;
- (void)setRecentThemeModel:;
- (void)setImRequestInterval:;
- (unsigned long long)imRequestCount;
- (void)setImRequestCount:;
- (id)imNextTrendingStickers;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
