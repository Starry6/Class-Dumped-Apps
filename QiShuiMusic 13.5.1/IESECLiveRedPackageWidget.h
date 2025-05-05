@interface IESECLiveRedPackageWidget : IESECLiveBaseWidget
@property (nonatomic) BOOL needFetchRedPackage;
@property (nonatomic) double expireDuration;
@property (nonatomic) IESECLiveRandomDelayTimer expireTimer;
@property (nonatomic) IESECLiveRandomDelayTimer firstPeakReduce;
- (void)setExpireTimer:;
- (id)firstPeakReduce;
- (long long)arc4random10mins;
- (void)didHideShopCart:;
- (void)didShowShopCart:;
- (double)expireDuration;
- (id)expireTimer;
- (BOOL)needFetchRedPackage;
- (void)requestMoreWhenRedPackApplied:;
- (void)requestRedPackageInfo;
- (void)setExpireDuration:;
- (void)setFetchRedPackageDelay:;
- (void)setFirstPeakReduce:;
- (void)setNeedFetchRedPackage:;
- (void)widgetMount;
- (void).cxx_destruct;
@end
