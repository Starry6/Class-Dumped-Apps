@interface HTSLiveEpisodeCorrelationSeasonInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveSeasonBriefInfo seasonBriefInfo;
@property (nonatomic) BOOL hasSeasonBriefInfo;
@property (nonatomic) HTSLiveShowCenterShowInfo showInfo;
@property (nonatomic) BOOL hasShowInfo;
+ (id)descriptor;
@end
