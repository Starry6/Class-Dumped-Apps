@interface BattleArimesRanklistResult_Tag : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage bgImage;
@property (nonatomic) BOOL hasBgImage;
@property (nonatomic) NSString content;
@property (nonatomic) NSInteger tagActionType;
@property (nonatomic) NSString tagActionContent;
+ (id)descriptor;
@end
