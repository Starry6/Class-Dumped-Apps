@interface IESLiveOpenChargeViewServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismissChargeView;
- (void)dismissCustomChargeView;
- (void)openCurrentLiveChargeViewIn:trackInfo:completion:dismiss:;
- (void)openCurrentLiveChargeViewIn:trackInfo:isInTopView:autoDismiss:completion:dismiss:;
- (void)openCustomChargeViewIn:trackInfo:chargeCompletion:manualAgreementChangedBlock:didManualAgreement:;
- (void)openHalfChargeViewIn:trackInfo:completion:;
- (id)p_fetchPopItemWith:containerView:;
- (id)p_fetchViewModelWithTrackInfo:width:autoDismiss:completion:dismiss:;
- (void)trackChargeViewShowWithTrackInfo:;
@end
