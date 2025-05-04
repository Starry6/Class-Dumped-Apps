@interface AWECodeGenMateCommitResultModel : AWEBaseDataModel
@property (nonatomic) NSString userId;
@property (nonatomic) NSInteger success;
@property (nonatomic) AWECodeGenMateRelationModel mateInfoModel;
@property (nonatomic) q followStatus;
- (long long)followStatus;
- (void)setFollowStatus:;
- (id)mateInfoModel;
- (void)setMateInfoModel:;
- (id)userId;
- (void)setSuccess:;
- (void).cxx_destruct;
- (void)setUserId:;
- (int)success;
+ (id)JSONKeyPathsByPropertyKey;
@end
