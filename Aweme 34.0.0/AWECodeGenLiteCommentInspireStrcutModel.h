@interface AWECodeGenLiteCommentInspireStrcutModel : AWEBaseDataModel
@property (nonatomic) BOOL needShow;
@property (nonatomic) NSString rewardContent;
@property (nonatomic) NSInteger rewardCnt;
- (BOOL)needShow;
- (void)setNeedShow:;
- (id)rewardContent;
- (void)setRewardContent:;
- (int)rewardCnt;
- (void)setRewardCnt:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
