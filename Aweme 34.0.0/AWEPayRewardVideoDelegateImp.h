@interface AWEPayRewardVideoDelegateImp : NSObject
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSArray moreRewardInfos;
@property (nonatomic) q currentCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)videoAd:didLoadFailWithError:;
- (void)videoAd:loadSuccessWithInfos:;
- (void)videoAd:didClickBannerBtnWithInfo:;
- (void)videoAd:didClickCloseWithInfo:;
- (void)videoAd:becomeEffectiveWithInfos:index:;
- (void)videoAd:moreRewardDisplayInfoIndex:callBack:;
- (void)videoAdAfterDismissed;
- (id)moreRewardInfos;
- (void)setMoreRewardInfos:;
- (long long)currentCount;
- (void).cxx_destruct;
- (id)completionHandler;
- (void)setCompletionHandler:;
- (void)setCurrentCount:;
@end
