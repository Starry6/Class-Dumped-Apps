@interface AWECodeGenNoticeInspireFollowCollectInfoModel : AWEBaseDataModel
@property (nonatomic) NSString unfinishedTemplate;
@property (nonatomic) NSString finishedTemlpate;
@property (nonatomic) q remainNum;
@property (nonatomic) NSString entityId;
@property (nonatomic) BOOL mutualFollowed;
- (void)setUnfinishedTemplate:;
- (id)unfinishedTemplate;
- (id)finishedTemlpate;
- (void)setFinishedTemlpate:;
- (long long)remainNum;
- (void)setRemainNum:;
- (BOOL)mutualFollowed;
- (void)setMutualFollowed:;
- (void).cxx_destruct;
- (id)entityId;
- (void)setEntityId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
