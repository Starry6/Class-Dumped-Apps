@interface AWEIncentiveChatToastShowModel : NSObject
@property (nonatomic) NSString sharkToast;
@property (nonatomic) NSString rewardToast;
@property (nonatomic) q rewardAmount;
@property (nonatomic) BOOL canShowRewardToast;
@property (nonatomic) BOOL canShowSharkToast;
- (long long)rewardAmount;
- (void)setRewardAmount:;
- (id)initWithRewardInfoDict:;
- (BOOL)canShowSharkToast;
- (id)sharkToast;
- (BOOL)canShowRewardToast;
- (id)rewardToast;
- (void)setSharkToast:;
- (void)setRewardToast:;
- (void)setCanShowRewardToast:;
- (void)setCanShowSharkToast:;
- (void).cxx_destruct;
@end
