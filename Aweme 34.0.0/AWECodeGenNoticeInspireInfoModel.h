@interface AWECodeGenNoticeInspireInfoModel : AWEBaseDataModel
@property (nonatomic) q scene;
@property (nonatomic) AWECodeGenUrlModel iconUrlModel;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString hint;
@property (nonatomic) NSString content;
@property (nonatomic) AWECodeGenNoticeInspireFollowImmediatelyInfoModel immediatelyRewardInfoModel;
@property (nonatomic) AWECodeGenNoticeInspireFollowCollectInfoModel collectToTargetInfoModel;
- (id)iconUrlModel;
- (void)setIconUrlModel:;
- (id)immediatelyRewardInfoModel;
- (void)setImmediatelyRewardInfoModel:;
- (id)collectToTargetInfoModel;
- (void)setCollectToTargetInfoModel:;
- (id)schema;
- (void)setScene:;
- (id)content;
- (void)setSchema:;
- (long long)scene;
- (void)setContent:;
- (void).cxx_destruct;
- (id)hint;
- (void)setHint:;
+ (id)JSONKeyPathsByPropertyKey;
@end
