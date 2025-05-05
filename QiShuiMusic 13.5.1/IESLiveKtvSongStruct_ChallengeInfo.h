@interface IESLiveKtvSongStruct_ChallengeInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger ktvChallengeType;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) double score;
+ (id)descriptor;
@end
