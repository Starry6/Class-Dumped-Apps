@interface AWEFollowCollectToTargetInfoModel : AWEBaseApiModel
@property (nonatomic) q remainNumber;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString unfinishedTemplate;
@property (nonatomic) NSString finishedTemlpate;
@property (nonatomic) BOOL isMutualFollowed;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setUnfinishedTemplate:;
- (id)unfinishedTemplate;
- (id)finishedTemlpate;
- (void)setFinishedTemlpate:;
- (long long)remainNumber;
- (void)setRemainNumber:;
- (BOOL)isMutualFollowed;
- (void)setIsMutualFollowed:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
