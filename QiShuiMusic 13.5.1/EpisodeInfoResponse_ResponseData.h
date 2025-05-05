@interface EpisodeInfoResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveEpisode episode;
@property (nonatomic) BOOL hasEpisode;
@property (nonatomic) NSMutableArray episodesArray;
@property (nonatomic) Q episodesArray_Count;
+ (id)descriptor;
@end
