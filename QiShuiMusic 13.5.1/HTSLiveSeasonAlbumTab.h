@interface HTSLiveSeasonAlbumTab : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray episodesArray;
@property (nonatomic) Q episodesArray_Count;
@property (nonatomic) NSMutableArray specialEpisodesArray;
@property (nonatomic) Q specialEpisodesArray_Count;
@property (nonatomic) NSString briefInfo;
@property (nonatomic) NSString premiereTime;
@property (nonatomic) q episodeTotal;
@property (nonatomic) q specialEpisodeTotal;
+ (id)descriptor;
@end
