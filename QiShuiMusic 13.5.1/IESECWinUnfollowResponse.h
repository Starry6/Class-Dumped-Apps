@interface IESECWinUnfollowResponse : IESECBaseApiModel
@property (nonatomic) NSString deleteFollowSuccessMsg;
@property (nonatomic) q followStatus;
- (id)deleteFollowSuccessMsg;
- (long long)followStatus;
- (void)setDeleteFollowSuccessMsg:;
- (void)setFollowStatus:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
