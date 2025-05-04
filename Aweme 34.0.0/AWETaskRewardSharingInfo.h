@interface AWETaskRewardSharingInfo : AWEBaseApiModel
@property (nonatomic) q sharedPercentage;
@property (nonatomic) NSString descriptionString;
@property (nonatomic) NSArray participateUserAvatar;
@property (nonatomic) NSString participateUserCount;
- (long long)sharedPercentage;
- (void)setSharedPercentage:;
- (id)participateUserAvatar;
- (void)setParticipateUserAvatar:;
- (id)participateUserCount;
- (void)setParticipateUserCount:;
- (void)setDescriptionString:;
- (id)descriptionString;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
