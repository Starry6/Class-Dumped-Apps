@interface AWESearchPoiCouponPopViewTask : AWESearchLynxPopupTask
@property (nonatomic) <AWESearchPopHandlerProtocol> delegete;
@property (nonatomic) AWESearchPopInfo locationPopInfo;
@property (nonatomic) AWESearchPopInfo poiCouponInfo;
@property (nonatomic) @? poiCouponAction;
- (BOOL)blockAllAlertWhenNotPreparedWithContext:;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)onAlertCanceled;
- (void)setPoiCouponInfo:;
- (void)setLocationPopInfo:;
- (void)setPoiCouponAction:;
- (id)poiCouponAction;
- (id)locationPopInfo;
- (id)poiCouponInfo;
- (id)init;
- (void).cxx_destruct;
- (id)delegete;
- (void)setDelegete:;
@end
