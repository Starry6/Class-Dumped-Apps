@interface BUNativeAdsManager : BUInterfaceBaseObject
@property (nonatomic) NSObject<BUNativeAdsManagerMediationProtocol> mediation;
@property (nonatomic) <BUMNativeAdsManagerDelegate> delegate;
@property (nonatomic) BUNativeAdsManager iteration;
@property (nonatomic) BUAdSlot adslot;
@property (nonatomic) NSArray data;
@property (nonatomic) <BUNativeAdsManagerDelegate> delegate;
@property (nonatomic) <BUNativeExpressAdViewDelegate> nativeExpressAdViewDelegate;
@property (nonatomic) {CGSize=dd} adSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mediation;
- (void)nativeAdsManager:didFailWithError:;
- (void)nativeAdsManager:didWaitingBiddingResultWithParameters:andResumeHandler:;
- (void)nativeAdsManagerDidFinishLoadAdnAd:nativeAd:error:;
- (void)nativeAdsManagerSuccessToLoad:nativeAds:;
- (id)init;
- (void)setDelegate:;
- (id)initWithSlot:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setIteration:;
- (id)iteration;
@end
