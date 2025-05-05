@interface IESLiveScoreGapChallengeInstruction : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSMutableArray contentListArray;
@property (nonatomic) Q contentListArray_Count;
+ (id)descriptor;
@end
