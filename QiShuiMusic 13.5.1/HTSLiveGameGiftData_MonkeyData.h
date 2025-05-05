@interface HTSLiveGameGiftData_MonkeyData : IESLivePBBaseMessage
@property (nonatomic) I multiplier;
@property (nonatomic) I addend;
@property (nonatomic) I seed;
@property (nonatomic) NSString token;
@property (nonatomic) NSMutableArray rangeMapArray;
@property (nonatomic) Q rangeMapArray_Count;
@property (nonatomic) NSString anchorRankBestUserName;
@property (nonatomic) NSInteger anchorRankBestScore;
@property (nonatomic) NSInteger bestScoreSelf;
+ (id)descriptor;
@end
