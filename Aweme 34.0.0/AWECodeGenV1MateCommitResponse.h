@interface AWECodeGenV1MateCommitResponse : AWEBaseResponseModel
@property (nonatomic) AWECodeGenMateRelationModel mateInfoModel;
@property (nonatomic) q followStatus;
@property (nonatomic) NSInteger followerStatus;
@property (nonatomic) NSInteger followerRequestStatus;
- (long long)followStatus;
- (void)setFollowStatus:;
- (int)followerStatus;
- (void)setFollowerStatus:;
- (int)followerRequestStatus;
- (void)setFollowerRequestStatus:;
- (id)mateInfoModel;
- (void)setMateInfoModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
