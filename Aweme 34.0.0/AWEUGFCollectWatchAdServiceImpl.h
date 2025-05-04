@interface AWEUGFCollectWatchAdServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getAdRewardInfo:needNext:completion:;
- (void)reportTaskComplete:token:isFirstReward:completion:;
- (void)showRewardToast:withImage:;
@end
