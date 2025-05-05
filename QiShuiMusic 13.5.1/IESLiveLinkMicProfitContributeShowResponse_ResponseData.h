@interface IESLiveLinkMicProfitContributeShowResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString score;
@property (nonatomic) IESLiveLinkMicProfitContributeShowResponse_OwnerHonorInfo ownerHonorInfo;
@property (nonatomic) BOOL hasOwnerHonorInfo;
@property (nonatomic) HTSLiveUser guestUser;
@property (nonatomic) BOOL hasGuestUser;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) IESLiveLinkMicProfitContributeShowTeamfightContent teamfightContent;
@property (nonatomic) IESLiveLinkMicProfitContributeShowGuestBattleContent guestBattleContent;
@property (nonatomic) IESLiveLinkMicProfitContributeShowStarWishContent starWishContent;
+ (id)descriptor;
@end
