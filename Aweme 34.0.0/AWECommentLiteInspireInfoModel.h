@interface AWECommentLiteInspireInfoModel : AWEBaseApiModel
@property (nonatomic) NSString taskKey;
@property (nonatomic) q bizCode;
@property (nonatomic) NSString toast;
@property (nonatomic) q rewardAmount;
@property (nonatomic) BOOL hasNext;
- (long long)bizCode;
- (long long)rewardAmount;
- (void)setBizCode:;
- (void)setRewardAmount:;
- (id)taskKey;
- (void)setTaskKey:;
- (void)setHasNext:;
- (void).cxx_destruct;
- (BOOL)hasNext;
- (void)setToast:;
- (id)toast;
+ (id)JSONKeyPathsByPropertyKey;
@end
