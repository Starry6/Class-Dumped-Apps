@interface HTSLiveFeedsVSInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger episodeStage;
@property (nonatomic) HTSLiveEpisode episode;
@property (nonatomic) BOOL hasEpisode;
@property (nonatomic) HTSLiveRoom room;
@property (nonatomic) BOOL hasRoom;
+ (id)descriptor;
@end
