@interface AWESearchPoiLocationPopViewTask : AWESearchPopViewTask
@property (nonatomic) AWESearchPopInfo locationPopInfo;
@property (nonatomic) AWESearchPopInfo poiCouponInfo;
@property (nonatomic) <AWESearchPopHandlerProtocol> delegete;
@property (nonatomic) @? finishAuthBlock;
@property (nonatomic) @? userDenyActionBlock;
@property (nonatomic) @? fetchSearchId;
- (BOOL)blockAllAlertWhenNotPreparedWithContext:;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)onAlertCanceled;
- (void)setPoiCouponInfo:;
- (void)setFinishAuthBlock:;
- (void)setUserDenyActionBlock:;
- (void)setLocationPopInfo:;
- (id)locationPopInfo;
- (id)poiCouponInfo;
- (id)fetchSearchId;
- (id)finishAuthBlock;
- (id)userDenyActionBlock;
- (void)setFetchSearchId:;
- (void).cxx_destruct;
- (id)delegete;
- (void)setDelegete:;
@end
