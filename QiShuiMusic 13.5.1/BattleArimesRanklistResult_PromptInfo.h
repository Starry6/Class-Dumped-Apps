@interface BattleArimesRanklistResult_PromptInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger promptType;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schema;
+ (id)descriptor;
@end
