@interface AWECodeGenReCreationMatchedWatchedInfoModel : AWEBaseDataModel
@property (nonatomic) q watchedEpisode;
@property (nonatomic) q watchedItem;
@property (nonatomic) q watchedTime;
@property (nonatomic) q watchedProgress;
- (long long)watchedProgress;
- (void)setWatchedProgress:;
- (long long)watchedItem;
- (void)setWatchedItem:;
- (long long)watchedEpisode;
- (void)setWatchedEpisode:;
- (long long)watchedTime;
- (void)setWatchedTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
