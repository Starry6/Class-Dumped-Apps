@interface IESIMMinorAlbumStatus : MTLModel
@property (nonatomic) q currentEpisode;
@property (nonatomic) q totalEpisodes;
@property (nonatomic) q recordEpisode;
@property (nonatomic) q progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)recordEpisode;
- (void)setRecordEpisode:;
- (void)setTotalEpisodes:;
- (long long)totalEpisodes;
- (void)setProgress:;
- (long long)progress;
- (long long)currentEpisode;
- (void)setCurrentEpisode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
