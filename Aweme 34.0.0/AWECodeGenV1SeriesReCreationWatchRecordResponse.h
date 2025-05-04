@interface AWECodeGenV1SeriesReCreationWatchRecordResponse : AWEBaseResponseModel
@property (nonatomic) NSString seriesId;
@property (nonatomic) NSString itemId;
@property (nonatomic) q episode;
@property (nonatomic) q watchedProgress;
- (long long)watchedProgress;
- (void)setWatchedProgress:;
- (void).cxx_destruct;
- (long long)episode;
- (void)setEpisode:;
- (id)itemId;
- (id)seriesId;
- (void)setSeriesId:;
- (void)setItemId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
