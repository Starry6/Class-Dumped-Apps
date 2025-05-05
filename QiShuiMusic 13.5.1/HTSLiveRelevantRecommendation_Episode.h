@interface HTSLiveRelevantRecommendation_Episode : IESLivePBBaseMessage
@property (nonatomic) q episodeId;
@property (nonatomic) NSString episodeName;
@property (nonatomic) HTSLiveImage episodeCover;
@property (nonatomic) BOOL hasEpisodeCover;
@property (nonatomic) NSString currentPeriod;
@property (nonatomic) q seasonId;
@property (nonatomic) NSString itemId;
+ (id)descriptor;
@end
