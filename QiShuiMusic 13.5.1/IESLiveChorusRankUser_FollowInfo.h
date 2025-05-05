@interface IESLiveChorusRankUser_FollowInfo : IESLivePBBaseMessage
@property (nonatomic) q followStatus;
@property (nonatomic) NSString remarkName;
+ (id)descriptor;
@end
