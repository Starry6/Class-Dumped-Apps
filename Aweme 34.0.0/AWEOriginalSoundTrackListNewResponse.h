@interface AWEOriginalSoundTrackListNewResponse : AWEBaseApiModel
@property (nonatomic) AWEMusicPerformancePageModel performanceList;
@property (nonatomic) NSArray foldChartMediaList;
@property (nonatomic) AWEOriginalSoundTrackMediaPageModel foldMediaList;
@property (nonatomic) AWEOriginalSoundTrackMediaPageModel foldCooperationMediaList;
@property (nonatomic) BOOL hasMore;
- (id)performanceList;
- (void)setPerformanceList:;
- (id)foldChartMediaList;
- (void)setFoldChartMediaList:;
- (id)foldMediaList;
- (void)setFoldMediaList:;
- (id)foldCooperationMediaList;
- (void)setFoldCooperationMediaList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)hasMoreJSONTransformer;
+ (id)performanceListJSONTransformer;
+ (id)foldChartMediaListJSONTransformer;
+ (id)foldMediaListJSONTransformer;
+ (id)foldCooperationMediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
