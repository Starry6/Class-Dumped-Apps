@interface AWEIMTrendingStickerResourceManager : NSObject
@property (nonatomic) IESIMSaaSEmoticonThemeModel trendingThemeModel;
@property (nonatomic) IESIMSaaSEmoticonThemeModel recentThemeModel;
- (id)changeResponseModel:;
- (id)changeResponseToEmotionModel:logPb:;
- (id)p_getTrendingCacheList;
- (void)p_updateTrendingCacheList:;
- (id)recentThemeModel;
- (id)requestNewCommentTrendingThemeModel;
- (void)resetRecentThemeModel;
- (void)setRecentThemeModel:;
- (void)setTrendingThemeModel:;
- (id)trendingThemeModel;
- (void)updateCommentTrendingThemeModelWithGroupID:completion:;
- (void)updateRemoteListWithContext:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
