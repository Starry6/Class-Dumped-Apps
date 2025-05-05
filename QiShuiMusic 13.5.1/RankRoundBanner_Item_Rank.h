@interface RankRoundBanner_Item_Rank : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (nonatomic) q score;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) q rank;
+ (id)descriptor;
@end
