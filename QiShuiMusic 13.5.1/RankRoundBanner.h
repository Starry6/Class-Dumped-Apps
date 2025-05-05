@interface RankRoundBanner : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray rankListArray;
@property (nonatomic) Q rankListArray_Count;
@property (nonatomic) q changeTime;
+ (id)descriptor;
@end
