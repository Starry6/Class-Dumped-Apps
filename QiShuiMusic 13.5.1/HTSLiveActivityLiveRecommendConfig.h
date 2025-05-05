@interface HTSLiveActivityLiveRecommendConfig : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString level;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSInteger liveType;
@property (nonatomic) NSMutableArray actorOpenidsArray;
@property (nonatomic) Q actorOpenidsArray_Count;
@property (nonatomic) HTSLiveActivityLiveRecommendConfig_EpisodeInfo episodeInfo;
@property (nonatomic) BOOL hasEpisodeInfo;
+ (id)descriptor;
@end
