@interface HTSLiveEpisodeStageInfo : IESLivePBBaseMessage
@property (nonatomic) q episodeId;
@property (nonatomic) NSInteger stage;
+ (id)descriptor;
@end
